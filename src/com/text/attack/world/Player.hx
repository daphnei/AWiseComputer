package com.text.attack.world;

import com.text.attack.world.Player.Wall;
import flash.events.Event;
import haxe.Log;
import openfl.events.KeyboardEvent;
import Std;
import openfl.ui.Keyboard;

enum Wall {
	LEFT;
	BOTTOM;
	RIGHT;
}
/**
 * ...
 * @author Daphne
 */
class Player extends Cell
{
	public var justShot:Bool;
	public var wall:Wall;
	
	public function new(x:Int, y:Int) 
	{
		super(CellType.Player, x, y);
		justShot = false;
		this.wall = Wall.BOTTOM;
	}
	
	public override function update():Void
	{
		var collision:Cell = null;
		if (World.instance.keyManager.isKeyDown(Keyboard.LEFT)) {
			this.moveClockwise();
			justShot = false;
		}
		else if (World.instance.keyManager.isKeyDown(Keyboard.RIGHT)) {
			this.moveCounterClockwise();
			justShot = false;
		}
		else if (World.instance.keyManager.isKeyDown(Keyboard.Z)) {
			Bullet.shootLeft();
			justShot = false;
		}
		else if (World.instance.keyManager.isKeyDown(Keyboard.X)) {
			Bullet.shootUp();
			justShot = true;
		}
		else if (World.instance.keyManager.isKeyDown(Keyboard.C)) {
			Bullet.shootRight();
			justShot = false;
		}
		else if (World.instance.keyManager.isKeyDown(Keyboard.UP)) {
			//Do nothing.
			justShot = false;
		}
	}
	
	private function moveClockwise():Void 
	{
		if (this.x == 0) {
			if (World.instance.okToWallWalk()) {
				this.move(0, -1);
				this.wall = Wall.LEFT;
				//World.instance.rotate(-90);
			}
		}
		else if (this.x == World.WIDTH - 1 ) {
			if (this.y == World.HEIGHT - 1) {
				this.move( -1, 0);
				this.wall = Wall.BOTTOM;
			} else {
				this.move(0, 1);
			}
		} else {
			this.move( -1, 0 );
		}
	}
	
	private function moveCounterClockwise():Void 
	{
		if (this.x == World.WIDTH - 1) {
			if (World.instance.okToWallWalk()) {
				this.move(0, -1);
				this.wall = Wall.RIGHT;
				//World.instance.rotate(90);
			}
		}
		else if (this.x == 0){
			if (this.y == World.HEIGHT - 1 ) {
				this.move(1, 0);
				this.wall = Wall.BOTTOM;
			} else {
				this.move(0, 1);
			}
		} else {
			this.move(1, 0);
		}
	}
	
	override public function getSymbol():Int 
	{
		return "O".charCodeAt(0);
	}
}