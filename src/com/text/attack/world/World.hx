package com.text.attack.world;
import com.text.attack.utiltiies.KeyManager;
import com.text.attack.world.Cell;
import com.text.attack.world.GameState;
import flash.display.Sprite;
import flash.events.Event;
import openfl.display.DisplayObject;
import openfl.text.Font;
import openfl.Vector.Vector;
import openfl.display.MovieClip;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.ui.Keyboard;
import com.text.attack.levels.*;
import com.text.attack.utiltiies.GameColors;
import openfl.text.TextFormatAlign;
import openfl.Assets;
import com.text.attack.utiltiies.SoundManager;
import com.text.attack.utiltiies.Point;

/**
 * http://www.newgrounds.com/audio/listen/550294 
 * http://www.drumdrops.com/downloads 
	 * FKD1 94 FOLK 10
	 * RYLD 93 SOUL 01
	 * RYLD 101 SOUL 09
 * @author Daphne
 */
class World extends MovieClip
{	
	public static var LEVELS:Array<Level> = [
											new Level1(),
											new Level2(),
											new Level3(), 
											new Level4(),
											new Level5(), 
											new Level6(),
											new Level7(),
											new Level8(),
											new Level9(),
											];

	private static inline var LEADING_IN_GAME:Int = -5;
	private static inline var LEADING_IN_TEXT:Int = 3;
	
	private static inline var BEGIN_LEVEL:Int = 8;
	private static inline var END_LEVEL:Int = 8;

	public static var instance:World;
	
	public inline static var WIDTH:Int = 30;
	public inline static var HEIGHT:Int = 30;
		
	public var player:Player;
	public var comets:Array<Comet>;
	public var bullets:Array<Bullet>;
	public var bouncers:Array<Bouncer>;

	/**
	 * This gets reset every frame and indicated the comets to be removed from the 
	 * grid at the end of the frame update.
	 */
	public var cometsToRemove:Array<Comet>;
	public var bulletsToAdd:Array<Bullet>;
	
	public var grid:WorldGrid;
	
	public var keyManager:KeyManager;
	public var soundManager:SoundManager;

	public var worldVisual:TextField;
	private var textFormat:TextFormat;
	
	private var helpText:TextField;

	public var gameState:GameState;
	
	public var numBulletsAvail:Int;
	
	public var levelIndex:Int;
	
	public var levelJumpString:String;

	public var stupid:Sprite;

	public function new() 
	{
		super();

		World.instance = this;
		
		this.addEventListener(Event.ADDED_TO_STAGE, added);
	}
	
	private function added(event:Event) 
	{
		this.removeEventListener(Event.ADDED_TO_STAGE, added);

		var font:Font = Assets.getFont ("fonts/me2.ttf");
		this.textFormat = new TextFormat(font.fontName);

		#if js
			textFormat.size = 10;
		#elif neko
			textFormat.size = 16;
		#elif flash
			textFormat.size = 50;
		#else
			textFormat.size = 26;
		#end
				
		this.worldVisual = new TextField();
		this.worldVisual.defaultTextFormat = this.textFormat;
		this.worldVisual.width = 700;
		this.worldVisual.height = 700;
		this.worldVisual.wordWrap = true;
		this.worldVisual.selectable = false;
		this.worldVisual.embedFonts = true;
		this.worldVisual.opaqueBackground = 0x222222;

		this.helpText = new TextField();
		this.helpText.defaultTextFormat = this.textFormat;
		this.helpText.width = 400;
		this.helpText.height = 700;
		this.helpText.selectable = false;
		this.helpText.embedFonts = true;

		//this.worldVisual.background = true;
		//this.worldVisual.backgroundColor = 0xff0000;
		//this.stupid = new Sprite();
		this.x = this.parent.stage.stageWidth / 2;
		this.y = this.parent.stage.stageHeight / 2;
		//this.world.add(stupid);

		this.addChild(this.worldVisual);
				
		this.levelIndex = BEGIN_LEVEL;
		
		this.splashScreen();
		
		//Create the key manager
		this.keyManager = new KeyManager();
		this.soundManager = new SoundManager();
	}
	
	public function splashScreen():Void
	{
		this.setWorldVisualFormat(true);
		
		this.levelJumpString = "";

		this.worldVisual.appendText("> the\n");
		this.worldVisual.appendText("> wise\n");
		this.worldVisual.appendText("> computer\n");
		this.worldVisual.appendText("> \n");
		this.worldVisual.appendText("> [PRESS ENTER]\n");
		this.worldVisual.appendText("> \n");
		this.worldVisual.appendText("> UTGDDC \n");
		this.worldVisual.appendText("> Game-Making Deathmatch");
		this.gameState = GameState.DEAD;
		
		centerWorldVisual();
	}
	
	public function nextLevel():Void
	{
		if (this.levelIndex == World.END_LEVEL) {
			//The player just beat the last level.
			
			this.levelIndex = BEGIN_LEVEL;
			endGame(true);
		} else {
			//Move on to the next level.
			this.levelIndex++;
			startLevel();
		}
	}
	
	/**
	 * Starts the level at the text preamble.
	 * @param	index The level to switch to.
	 */
	private function startLevel()
	{		
		//Make sure all of the gameplay elements are reset.
		this.grid = null;
		this.player = null;
		this.comets = null;
		this.bullets = null;
		this.bouncers = null;
		this.cometsToRemove = null;
		this.bulletsToAdd = null;
		
		this.setWorldVisualFormat(true);
		
		this.gameState = GameState.PREAMBLE;
		
		LEVELS[this.levelIndex].resetPreamble();
		this.worldVisual.text = LEVELS[this.levelIndex].getSomePreamble();
		
		centerWorldVisual();
	}
	
	/**
	 * Starts the gameplay for the level.
	 */
	private function startPlay():Void
	{	
		trace("Starting the level");
		
		var level:Level = LEVELS[this.levelIndex];
		
		this.setWorldVisualFormat(false);
		
		//Create the world grid.
		this.grid = new WorldGrid();
		
		this.comets = new Array<Comet>();
		this.bullets = new Array<Bullet>();
		this.bouncers = new Array<Bouncer>();
		this.cometsToRemove = new Array<Comet>();
		this.bulletsToAdd = new Array<Bullet>();
		this.numBulletsAvail = level.availableBullets;
		
		for (y in 0...World.HEIGHT) {
			var row = level.levelString.substr(y * World.WIDTH, World.WIDTH);
			for (x in 0...World.WIDTH) {
				var newCell:Cell;
				
				var char:Int = row.charCodeAt(x);
				
				//trace("Char: " + char + "Looking for: " + String.fromCharCode(CellType.Comet.symbol));
				
				if (char == CellType.CometDown.symbol) {
					var comet = new Comet(x, y, CellType.CometDown);
					this.comets.push(comet);
					newCell = comet;
				}
				else if (char == CellType.CometLeft.symbol) {
					var comet = new Comet(x, y, CellType.CometLeft);
					this.comets.push(comet);
					newCell = comet;
				} 
				else if (char == CellType.CometRight.symbol) {
					var comet = new Comet(x, y, CellType.CometRight);
					this.comets.push(comet);
					newCell = comet;
				} 
				else if (char == CellType.Bouncer.symbol) {
					var bouncer = new Bouncer(x, y);
					this.bouncers.push(bouncer);
					newCell = bouncer;
				}
				else if (char == CellType.Player.symbol) {
					this.player = new Player(x, y);
					newCell = this.player;
				} else {
					newCell = new Empty(x, y);
				}
				
				this.grid.set(x, y, newCell);
			}
		}
		
		this.resetWorldVisual();
		this.grid.addGridToTextField(this.worldVisual, this.textFormat);
				
		this.centerWorldVisual();
				
		this.gameState = GameState.PLAYING;
	}
	
	/**
	 * Ends the game, restarting it at the first level is ENTER is pressed.
	 * @param	success Whether the user ended the game by dying or by winning.
	 */
	private function endGame(success:Bool):Void
	{
		this.setWorldVisualFormat(true);
		
		if (success) {
			this.worldVisual.text = "> In the end, \"I hear and I forget. I see and I remember. I do and I understand.\" \n> Press [Enter] to play again.";
		} else {
			this.worldVisual.text = "> I've died.\n> But I will try again. \n> [PRESS ENTER]";
			this.soundManager.playEndSound();
		}
		
		this.grid = null;
		this.player = null;
		this.comets = null;
		this.bullets = null;
		
		this.gameState = GameState.DEAD;
	}
	
	private function setWorldVisualFormat(forText:Bool):Void 
	{
		trace("Updating text leading");
		if (forText) {
			this.textFormat.leading = World.LEADING_IN_TEXT;
			this.textFormat.align = TextFormatAlign.LEFT;
			this.textFormat.color = GameColors.WHITE;
			this.worldVisual.width = 800;
		} else {
			this.textFormat.leading = World.LEADING_IN_GAME;
			this.textFormat.align = TextFormatAlign.CENTER;
			this.worldVisual.width = 700;		
		}
		
		this.rotate(0);
		
		this.worldVisual.defaultTextFormat = textFormat;

	}
	
	private function centerWorldVisual():Void
	{
		trace("Centering world visual");
		
		this.worldVisual.x = - this.worldVisual.width / 2;
		this.worldVisual.y = - this.worldVisual.height / 2;
	}
	
	private function resetWorldVisual():Void
	{		
		this.worldVisual.text = "";
		
		this.textFormat.color = GameColors.WHITE;
		
		this.worldVisual.appendText("Bullets: ");
		this.worldVisual.appendText(this.numBulletsAvail + "");
		this.worldVisual.appendText("\t Level ");
		this.worldVisual.appendText((this.levelIndex + 1) + "");
		this.worldVisual.appendText("\n");
		
		this.worldVisual.setTextFormat(textFormat, 0, this.worldVisual.text.length);
	}
	
	public function okToWallWalk():Bool
	{
		return this.levelIndex >= 1000;
	}
	
	private function playingKeyDown():Bool
	{
		return (this.keyManager.isKeyDown(Keyboard.X) && this.numBulletsAvail > 0) ||
				this.keyManager.isKeyDown(Keyboard.LEFT) ||
				this.keyManager.isKeyDown(Keyboard.RIGHT) || 
				(this.levelIndex >= 2 &&
				((this.keyManager.isKeyDown(Keyboard.Z) && this.numBulletsAvail > 0) || 
				 (this.keyManager.isKeyDown(Keyboard.C) && this.numBulletsAvail > 0))) ||
				(this.levelIndex >= 4 &&
				this.keyManager.isKeyDown(Keyboard.UP));
	}
	
	private function updateLevelCheat():Void
	{
		var numKey:Int = this.keyManager.getNumberKeyDown();
		if (numKey != -1) {
			this.levelJumpString += String.fromCharCode(numKey);
		}
	}
	
	private function switchToLevelCheat():Bool
	{
		if (this.levelJumpString.length > 0) {
			var num:Int = Std.parseInt(this.levelJumpString);
			
			this.levelJumpString = "";

			if (num <= World.END_LEVEL) {
				this.levelIndex = num;
				return true;
			}
		} 
		
		return false;
	}
	
	private function splitComet(comet:Comet, bouncer:Bouncer):Void
	{
		var x1:Int = bouncer.x;
		var y1:Int = bouncer.y;
		var x2:Int = bouncer.x;
		var y2:Int = bouncer.y;
		var dir1:CellType;
		var dir2:CellType;

		if (comet.cellType == CellType.CometLeft || 
			comet.cellType == CellType.CometRight) {
			y1 = bouncer.y - 1;
			y2 = bouncer.y + 1;
			dir1 = CellType.CometUp;
			dir2 = CellType.CometDown;
		} else {
			x1 = bouncer.x - 1;
			x2 = bouncer.x + 1;
			dir1 = CellType.CometLeft;
			dir2 = CellType.CometRight;
		} 

		trace("Creating the two new comets.");
		var newComet1:Comet = new Comet(x1, y1, dir1);
		var newComet2:Comet = new Comet(x2, y2, dir2);
		this.comets.push(newComet1);
		this.comets.push(newComet2);

		this.grid.set(x1, y1, newComet1);
		this.grid.set(x2, y2, newComet2);

		trace("Done creating the two new comets.");
		comet.destroy();
	}

	public function rotate(amount:Int):Void
	{
		this.rotation = amount;
	}
	
	public function update():Void
	{
		switch (this.gameState) {
			case GameState.PLAYING:
				if (playingKeyDown()) {
					if (World.instance.comets.length == 0) {
						trace("ALL COMETS DESTROYED");
						World.instance.nextLevel();
					} else {
						//Update each bullet
						for (bullet in this.bullets) {
							bullet.update();
						}
						
						//Update the player.
						this.player.update();
						
						//Update each comet.
						for (comet in this.comets) {
							comet.update();
						}
						
						if (this.gameState == GameState.ENDING) {
							this.endGame(false);
						} else {
							resolveBulletCollision();
							resolveCometCollision();

							//Apply the moves for all the bullets.
							for (bullet in this.bullets) {
								bullet.applyMove();
							}
							
							//Apply the moves for the remaining comets
							for (comet in this.comets) {
								comet.applyMove();
							}
							
							//Apple the move for the player
							player.applyMove();
							
							//Update the textfield with the new grid.
							this.resetWorldVisual();
							this.grid.addGridToTextField(this.worldVisual, this.textFormat);
						}
					}
				}
			case GameState.PREAMBLE:
				updateLevelCheat();
				if (this.keyManager.isKeyDown(Keyboard.ENTER)) {
					if (switchToLevelCheat()) {
						this.startLevel();
					} else {
						var preambleText = LEVELS[this.levelIndex].getSomePreamble();
						if (preambleText == null) {
							this.startPlay();
						} else {
							this.worldVisual.text = preambleText;
						}
					}
				}
			case GameState.ENDING:
				this.endGame(false);
				
			case GameState.DEAD:
				updateLevelCheat();
				if (this.keyManager.isKeyDown(Keyboard.ENTER)) {
					switchToLevelCheat();
					this.startLevel();
				}
				
			case GameState.PAUSED:
		}
		
		this.keyManager.update();
	}

	private function resolveBulletCollision():Void
	{
		var bulletsClone:Array<Bullet> = this.bullets.copy();
		for (i in 0...bulletsClone.length) {
			var bullet = bulletsClone[i];
			for (bouncer in this.bouncers) { 
				if ( bullet.newPosCollides(bouncer) ) {
					//Split the bullet in two or something.
				}
			}
		}
	}

	private function resolveCometCollision():Void 
	{
		var cometsClone:Array<Comet> = this.comets.copy();
		for (i in 0...cometsClone.length) {
			var comet:Comet = cometsClone[i];
			
			//Check if the comet collides with the player.
			if (comet.newPosCollides(this.player) && !player.justShot) {
				this.endGame(false);
				return;
			}
			else {
				//Check if the comet collides with a bullet
				var collidedWithABullet:Bool = false;
				for (bullet in this.bullets) {
					var tempBullet:Bullet = new Bullet(bullet.newX, bullet.newY + 1, 0, 0);
					
					//var needTempBullet:Bool = this.grid.get(tempBullet.x, tempBullet.y).cellType != CellType.Empty;
					if (comet.newPosCollides(bullet)) {
						//Destroy the comet.
						comet.destroy();
						collidedWithABullet = true;
					}
					else if ( comet.newPosCollides(tempBullet) ) {
						//Destroy the comet.
						comet.destroy();
						collidedWithABullet = true;
						this.grid.clear(tempBullet.x, tempBullet.y);
					}
				}
					
				var collidedWithABouncer:Bool = false;

				if (!collidedWithABullet) {
					//Check if the comet collides with a bouncer.
					for (bouncer in this.bouncers) { 
						if ( comet.newPosCollides(bouncer) ) {
							//Split the comet in two.
							splitComet(comet, bouncer);
							collidedWithABouncer = true;
						}
					}
				}

				if (!collidedWithABullet && !collidedWithABouncer) {
					comet.applyMove();
				}
			}
		}
		
		if (this.comets.length == cometsClone.length) {
			this.soundManager.playRandomNote();
		} else {
			this.soundManager.playRandomChord();
		}
	}
}