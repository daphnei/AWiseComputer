package com.text.attack.world;
import com.text.attack.world.CellType;
import openfl.events.EventDispatcher;
/**
 * ...
 * @author Daphne
 */
class Cell extends EventDispatcher
{
	public var cellType:CellType;
	public var x:Int;
	public var y:Int;
	
	public var newY:Int;
	public var newX:Int;
	
	public function new(cellType:CellType, x:Int, y:Int) 
	{
		super();
		this.cellType = cellType;
		this.x = x;
		this.y = y;
		this.newX = x;
		this.newY = y;
	}

	/**
	 * Attempt to move this cell to a new cell position. The move will only be 
	 * successful if the new position has an empty cell type.
	 * @param	xOffset
	 * @param	yOffset
	 * @return	null if a move was sucesfully made, otherwise the cell impeding the move 
	 * 			from taking place.
	 */
	public function move(xOffset:Int, yOffset:Int):Void
	{
		//Check what is in the new position.
		this.newX = this.x + xOffset;
		this.newY = this.y + yOffset;
	}
	
	public function applyMove():Void
	{
		var grid:WorldGrid = World.instance.grid;
		
		if (grid.get(this.x, this.y) == this) {
			grid.clear(this.x, this.y);
		}
		
		this.x = this.newX;
		this.y = this.newY;
		
		grid.set(this.x, this.y, this);
	}
	
	public function getSymbol():Int
	{
		return this.cellType.symbol;
	}
	
	public function update():Void 
	{
	}

	public function newPosCollides(cell:Cell):Bool
	{
		return this.newX == cell.newX && this.newY == cell.newY;
	}
	
	public override function toString():String 
	{
		return "[Cell = " + String.fromCharCode(cellType.symbol) + "]";
	}
}