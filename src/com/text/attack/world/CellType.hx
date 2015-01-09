package com.text.attack.world;

import com.text.attack.utiltiies.Assert;

/**
 * ...
 * @author Daphne
 */
class CellType
{
	public static var Player:CellType = new CellType('P');
	public static var Empty:CellType = new CellType('.');
	public static var Block:CellType = new CellType('#');
	public static var CometDown:CellType = new CellType('V');
	public static var CometLeft:CellType = new CellType('<');
	public static var CometRight:CellType = new CellType('>');
	public static var CometUp:CellType = new CellType('∧');
	public static var Bouncer:CellType = new CellType('-');
	public static var Bullet:CellType = new CellType('|');

	public var symbol:Int;
	
	private function new(symbol:String) 
	{		
		this.symbol = symbol.charCodeAt(0);
	}
	
}