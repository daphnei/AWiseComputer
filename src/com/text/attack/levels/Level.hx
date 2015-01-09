package com.text.attack.levels;

import com.text.attack.world.World;
import com.text.attack.levels.Level1;
/**
 * ...
 * @author Daphne
 */
class Level
{	
	public var levelString:String;
	public var preamble:Array<String>;
	public var availableBullets:Int;
	
	private var preIndex:Int;
	private static inline var CHARS_PER_LINE = 40;
	
	public function new(levelString:String, preamble:Array<String>, availableBullets:Int)
	{
		this.levelString = levelString;
		this.preamble = preamble;
		this.preIndex = 0;
		this.availableBullets = availableBullets;
	}
	
	public function getSomePreamble():String
	{	
		if (this.preIndex >= this.preamble.length) {
			return null;
		} else {
			var str:StringBuf = new StringBuf();
			for (i in 0...preIndex + 1) {
				var line:String = preamble[i];
				/*for (lineBuf in 0...Math.floor(line.length / CHARS_PER_LINE)+1) {
					str.add(lineBuf == 0 ? "> " : "  ");
					str.addSub(line, lineBuf * CHARS_PER_LINE, CHARS_PER_LINE);
					str.add("\n");	
				}*/
				str.add("> ");
				str.add(line);
				str.add("\n");
			}
			if (this.preIndex == this.preamble.length-1) {
					str.add("> ");
				str.add("[START]");
			} else {
				str.add("[PRESS ENTER]");
			}
			
			this.preIndex++;
			
			return str.toString();
		}
	}
	
	public function resetPreamble():Void 
	{
		this.preIndex = 0;
	}
}