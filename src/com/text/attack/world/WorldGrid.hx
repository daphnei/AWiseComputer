package com.text.attack.world;

import haxe.ds.Vector;
import haxe.Log;
import com.text.attack.utiltiies.Assert;
import openfl.text.TextField;
import openfl.text.TextFormat;
import com.text.attack.utiltiies.GameColors;
import openfl.utils.Object;
import openfl.utils.ByteArray;


/**
 * ...
 * @author Daphne
 */
class WorldGrid
{
	private var grid:Vector<Vector<Cell>>;

	private var inBulletsWay:Vector<Vector<Bool>>;
	
	public function new() 
	{
		trace("HERE!");
		
		//Initalize the entire grid to empty cells.
		this.grid = new Vector<Vector<Cell>>(World.HEIGHT);
		this.inBulletsWay = new Vector<Vector<Bool>>(World.HEIGHT);
		
		for (y in 0...World.HEIGHT) {
			this.grid[y] = new Vector<Cell>(World.WIDTH);
			this.inBulletsWay[y] = new Vector<Bool>(World.WIDTH);
			
			for (x in 0...World.WIDTH) {
				this.set(x, y, new Empty(x, y));
				this.inBulletsWay[y][x] = false;
			}
		}
	}
	
	public function clear(x:Int, y:Int):Void
	{
		this.set(x, y, new Empty(x, y));
	}
	
	/**
	 * Places a new cell object into the specified grid position.
	 * @param	x
	 * @param	y
	 * @param	cell
	 * @return	Returns the cell object that used to be in this position.
	 */
	public function set(x:Int, y:Int, cell:Cell):Cell
	{
		//trace("Y = " + y + " this.grid[y] = " + this.grid[y]);
		Assert.assert(y < World.HEIGHT);
		Assert.assert(this.grid != null);
		Assert.assert(this.grid[y] != null);
		
		var oldCell:Cell = this.grid[y][x];
		
		this.grid[y][x] = cell;
		
		return oldCell;
	}
	
	public function get(x:Int, y:Int):Cell
	{
		return this.grid[y][x];
	}
	
	public function move(oldX:Int, oldY:Int, xOffset:Int, yOffset:Int):Void
	{
		var cell:Cell = this.grid[oldY][oldX];
		
		this.clear(oldX, oldY);
		
		this.grid[oldY + yOffset][oldX + xOffset] = cell;
	}
	
	public function addGridToTextField(textField:TextField, textFormat:TextFormat):Void
	{		
		for (y in 0...World.HEIGHT) {
			for (x in 0...World.WIDTH) {
				var cell:Cell = grid[y][x];
				
				var color:Int = 0xff0000;
				if (Comet.isCometType(cell.cellType))
					color = GameColors.RED;
				else if (cell.cellType ==  CellType.Player)
					color = GameColors.WHITE;
				else if (cell.cellType ==  CellType.Bullet)
					color = GameColors.YELLOW;
				else if (cell.cellType ==  CellType.Bouncer)
					color = GameColors.GREEN;
				else
					color = 0x333333;
				
				/*if (cell.cellType != CellType.Empty) {
					trace("Rendering a " + String.fromCharCode(cell.cellType.symbol));
				}*/

				textFormat.color = color;
				textField.appendText(String.fromCharCode(cell.getSymbol()));
				textField.setTextFormat(textFormat, textField.text.length - 1, textField.text.length);
			}
			textField.appendText('\n');
		}
	}
	
	public function printCell(x:Int, y:Int):Void
	{
		Log.trace(this.grid[y][x].toString());
	}
	
	public function markForBullet(x:Int, y:Int) 
	{
		this.inBulletsWay[y][x] = true;
	}
}