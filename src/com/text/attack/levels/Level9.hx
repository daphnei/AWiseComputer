package com.text.attack.levels;

/**
 * ...
 * @author Daphne
 */
class Level9 extends Level
{
	private inline static var LEVEL_STRING:String = 
	".............................." + 
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." + 
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." + 
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	"..........VV.V.VV............." +
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............................." +
	".............P...............";

	public function new() 
	{
		/*var p1 = "He said, \"Learning without thought is labor lost; thought without learning is perilous.\"";
		var p2 = "Have you realized...";
		var p3 = "That a wall is only a floor inverted?";
		var p3 = "Think on this.";*/

		var p1 = "He said, \"Learning without thought is labor lost; thought without learning is perilous.\"";
		var p2 = "If I am to triumph over him...";
		var p3 = "I must continue to study his lessons.";
		var p4 = "\n> And I must learn to shoot diagonally by pressing two buttons at once.";

		var preamble:Array<String> = [ p1, p2, p3, p4];
		
		super(LEVEL_STRING, preamble, 100);
	}
	
}