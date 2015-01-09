package com.text.attack.world;
import com.text.attack.world.Bullet.Direction;
import com.text.attack.world.Player.Wall;
import openfl.display.FrameLabel;

enum Direction {
	LEFT;
	RIGHT;
	UP;
	DOWN;
}
/**
 * ...
 * @author Daphne
 */
class Bullet extends Cell
{	
	private var justAdded:Bool;
	
	private var direction:Direction;
	
	public function new(x:Int, y:Int, direction:Direction) 
	{
		super(CellType.Bullet, x, y);
		this.justAdded = false;
		this.direction = direction;
	}
	
	public override function update():Void 
	{			
		if (this.justAdded) {
			this.justAdded = false;
		}
		else if (this.direction == Direction.UP) {
			if (this.y == 0) {
				this.destroy();
			} else {	
				this.move(0, -1);
			}
		}
		else if (this.direction == Direction.DOWN) {
			if (this.y == World.HEIGHT - 1) {
				this.destroy();
			} else {	
				this.move(0, 1);
			}
		}
		else if (this.direction == Direction.LEFT) {
			if (this.x == 0) {
				this.destroy();
			} else {	
				this.move(-1, 0);

			}
		}
		else if (this.direction == Direction.RIGHT) {
			if (this.x == World.WIDTH - 1) {
				this.destroy();
			} else {	
				this.move(1, 0);
			}
		}
	}
	
	public function destroy()
	{
		World.instance.bullets.remove(this);
		World.instance.grid.clear(this.x, this.y);
	}
	
	private static function shoot(dir:Direction)
	{
		var player:Player = World.instance.player;
		var grid:WorldGrid = World.instance.grid;
		
		if (World.instance.numBulletsAvail > 0) {
			var b:Bullet = null;
			switch (dir) {
				case Direction.LEFT:
					b = new Bullet(player.x - 1, player.y, dir);
				case Direction.RIGHT:
					b = new Bullet(player.x + 1, player.y, dir);
				case Direction.UP:
					b = new Bullet(player.x, player.y - 1, dir);
				case Direction.DOWN:
					b = new Bullet(player.x, player.y + 1, dir);
			}
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
		switch (this.direction) {
			case Direction.UP, Direction.DOWN:
				return '|'.charCodeAt(0);
			default:
				return '-'.charCodeAt(0);
		}
	}
	
	public static function shootUp():Void
	{
		var wall:Wall = World.instance.player.wall;
		switch (wall) {
			case Player.Wall.BOTTOM:
				Bullet.shoot(Direction.UP);
			case Player.Wall.LEFT:
				Bullet.shoot(Direction.RIGHT);
			case Player.Wall.RIGHT:
				Bullet.shoot(Direction.LEFT);
		}
	}
	
	public static function shootLeft():Void
	{
		var wall:Wall = World.instance.player.wall;
		switch (wall) {
			case Player.Wall.BOTTOM:
				Bullet.shoot(Direction.LEFT);
			case Player.Wall.LEFT:
				Bullet.shoot(Direction.UP);
			case Player.Wall.RIGHT:
				Bullet.shoot(Direction.DOWN);
		}
	}
	
	public static function shootRight():Void
	{
		var wall:Wall = World.instance.player.wall;
		switch (wall) {
			case Player.Wall.BOTTOM:
				Bullet.shoot(Direction.RIGHT);
			case Player.Wall.LEFT:
				Bullet.shoot(Direction.DOWN);
			case Player.Wall.RIGHT:
				Bullet.shoot(Direction.UP);
		}
	}
}