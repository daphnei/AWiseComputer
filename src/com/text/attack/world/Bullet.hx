package com.text.attack.world;
import com.text.attack.utiltiies.Point;
import com.text.attack.world.Player.Wall;
import openfl.display.FrameLabel;

/**
 * ...
 * @author Daphne
 */
class Bullet extends Cell
{	
	private var justAdded:Bool;
	
	private var dirX:Int;
	private var dirY:Int;
	
	public function new(x:Int, y:Int, dirX:Int, dirY:Int) 
	{
		super(CellType.Bullet, x, y);
		this.justAdded = false;
		this.dirX = dirX;
		this.dirY = dirY;
		
		this.addCellsInBulletSight();
	}
	
	private function  addCellsInBulletSight():Void
	{
		var p:Point = new Point(this.x, this.y);
		haxe.Log.trace("fkeggrhie");
		while (p.isInRange(World.WIDTH, World.HEIGHT)) {
			World.instance.grid.markForBullet(p.x, p.y);
			
			p.x += this.dirX;
			p.y += this.dirY;
		}
	}
	
	public override function update():Void 
	{			
		if (this.justAdded) {
			this.justAdded = false;
		}


		else if (this.dirY == -1) {
			if (this.y == 0) {
				this.destroy();
			} 
		}
		else if (this.dirY == 1) {
			if (this.y == World.HEIGHT - 1) {
				this.destroy();
			} 
		}

		if (this.dirX == -1) {
			if (this.x == 0) {
				this.destroy();
			} 
		}
		else if (this.dirX == 1) {
			if (this.x == World.WIDTH - 1) {
				this.destroy();
			} 
		}

		this.move(this.dirX, this.dirY);
	}
	
	public function destroy()
	{
		World.instance.bullets.remove(this);
		World.instance.grid.clear(this.x, this.y);
	}
	
	private static function shoot(dirX:Int, dirY:Int)
	{
		var player:Player = World.instance.player;
		var grid:WorldGrid = World.instance.grid;
		
		if (World.instance.numBulletsAvail > 0) {
			var b:Bullet = new Bullet(player.x + dirX, player.y + dirY, dirX, dirY);

			var oldCell:Cell = grid.set(b.x, b.y, b);
			
			if (Comet.isCometType(oldCell.cellType)) {
				World.instance.cometsToRemove.push(cast(oldCell, Comet));
			} 
			
			World.instance.bullets.push(b);
			World.instance.bulletsToAdd.push(b);
			World.instance.numBulletsAvail--;
		}
	}
	
	public override function getSymbol():Int
	{
		if (this.dirX == 0)
			return '|'.charCodeAt(0);
		else if (this.dirY == 0)
			return '-'.charCodeAt(0);
		else if (this.dirY * this.dirX > 0)
			return '\\'.charCodeAt(0);
		else
			return '/'.charCodeAt(0);
	}
	
	public static function shootUpLeft():Void
	{
		var wall:Wall = World.instance.player.wall;
		switch (wall) {
			case Player.Wall.BOTTOM:
				Bullet.shoot(-1, -1);
			case Player.Wall.LEFT:
				//Bullet.shoot(Direction.RIGHT);
			case Player.Wall.RIGHT:
				//Bullet.shoot(Direction.LEFT);
		}
	}

	public static function shootUpRight():Void
	{
		var wall:Wall = World.instance.player.wall;
		switch (wall) {
			case Player.Wall.BOTTOM:
				Bullet.shoot(1, -1);
			case Player.Wall.LEFT:
				//Bullet.shoot(Direction.RIGHT);
			case Player.Wall.RIGHT:
				//Bullet.shoot(Direction.LEFT);
		}
	}

	public static function shootUp():Void
	{
		var wall:Wall = World.instance.player.wall;
		switch (wall) {
			case Player.Wall.BOTTOM:
				Bullet.shoot(0, -1);
			case Player.Wall.LEFT:
				//Bullet.shoot(Direction.RIGHT);
			case Player.Wall.RIGHT:
				//Bullet.shoot(Direction.LEFT);
		}
	}
	
	public static function shootLeft():Void
	{
		var wall:Wall = World.instance.player.wall;
		switch (wall) {
			case Player.Wall.BOTTOM:
				Bullet.shoot(-1, 0);
			case Player.Wall.LEFT:
				//Bullet.shoot(Direction.UP);
			case Player.Wall.RIGHT:
				//Bullet.shoot(Direction.DOWN);
		}
	}
	
	public static function shootRight():Void
	{
		var wall:Wall = World.instance.player.wall;
		switch (wall) {
			case Player.Wall.BOTTOM:
				Bullet.shoot(1, 0);
			case Player.Wall.LEFT:
				//Bullet.shoot(Direction.DOWN);
			case Player.Wall.RIGHT:
				//Bullet.shoot(Direction.UP);
		}
	}
}