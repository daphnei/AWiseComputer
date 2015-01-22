package com.text.attack.utiltiies;

/**
 * ...
 * @author Daphne
 */
class Point
{
	public var x:Int;
	public var y:Int;
	
	public function new(x:Int, y:Int) 
	{
		this.x = x;
		this.y = y;
	}
	
	
	public function isInRange(xMax:Int, yMax:Int):Bool {
		return this.x >= 0 && this.x < xMax && this.y >= 0 && this.y < yMax;
	}
}