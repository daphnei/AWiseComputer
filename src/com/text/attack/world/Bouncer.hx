package com.text.attack.world;

import com.text.attack.world.Bullet.Direction;
import com.text.attack.world.Player.Wall;
import openfl.display.FrameLabel;

/**
 * ...
 * @author Daphne
 */
class Bouncer extends Cell
{	
	public function new(x:Int, y:Int) 
	{
		super(CellType.Bouncer, x, y);
	}

	public override function getSymbol():Int
	{
		return '.'.charCodeAt(0);
	}
}