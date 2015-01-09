package com.text.attack.world;

import com.text.attack.utiltiies.Assert;
import com.text.attack.world.GameState;
import com.text.attack.world.CellType;

/**
 * ...
 * @author Daphne
 */
class Comet extends Cell
{	
	
	public function new(x:Int, y:Int, cellType:CellType) 
	{
		super(cellType, x, y);

		Assert.assert(isCometType(cellType));
	}
	
	public override function update():Void
	{
		var collision:Cell = null;
		
		if (this.cellType == CellType.CometLeft) {
			if (this.x > 0) {
				this.move(-1, 0);
			} else {
				World.instance.gameState = GameState.ENDING;
			}
		}
		else if (this.cellType == CellType.CometDown) {
			if (this.y < World.HEIGHT - 1) {
				this.move(0, 1);
			} else {
				World.instance.gameState = GameState.ENDING;
			}
		}
		else if (this.cellType == CellType.CometUp) {
			if (this.x > 0) {
				this.move(-1, 0);
			} else {
				World.instance.gameState = GameState.ENDING;
			}
		}
		else if (this.cellType == CellType.CometRight) {
			if (this.x < World.WIDTH - 1) {
				this.move(1, 0);
			} else {
				World.instance.gameState = GameState.ENDING;
			}
		}
	}
	
	public function destroy()
	{
		World.instance.comets.remove(this);
		World.instance.grid.clear(this.x, this.y);
	}

	public static function isCometType(cellType:CellType)
	{
		return cellType == CellType.CometDown ||
				cellType == CellType.CometLeft ||
				cellType == CellType.CometRight ||
				cellType == CellType.CometDown;
	}
}