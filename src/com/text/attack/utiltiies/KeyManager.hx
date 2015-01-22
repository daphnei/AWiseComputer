package com.text.attack.utiltiies;

import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;
import com.text.attack.world.World;
import openfl.Lib;
import openfl.system.System;

/**
 * ...
 * @author Daphne
 */
class KeyManager
{
	private var keysDown:Array<Int>;

	public function new() 
	{
		this.keysDown = new Array<Int>();
		
		World.instance.stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);
		World.instance.stage.addEventListener(KeyboardEvent.KEY_UP, onKeyUp);	
	}
	
	public function update():Void
	{
		//Clear all of the remembered key presses.
		keysDown.splice(0, keysDown.length);
	}
	
	public function onKeyDown(event:KeyboardEvent):Void
	{
		keysDown.push(event.keyCode);
	}
	
	public function onKeyUp(event:KeyboardEvent):Void
	{
		trace("KEY LIFTED");
		
		if (this.isKeyDown(Keyboard.ESCAPE)) {
			System.exit(0);
		}
		World.instance.update();
	}
	
	public function isKeyDown(keyCode:Int):Bool
	{
		return keysDown.indexOf(keyCode) >= 0;
	}
	
	public function getNumberKeyDown():Int
	{
		var keys = [Keyboard.NUMBER_0, Keyboard.NUMBER_1, Keyboard.NUMBER_2, Keyboard.NUMBER_3,
		Keyboard.NUMBER_4, Keyboard.NUMBER_5, Keyboard.NUMBER_6, Keyboard.NUMBER_7, 
		Keyboard.NUMBER_8, Keyboard.NUMBER_9];
		
		for (key in keys) {
			if (this.isKeyDown(key)) {
				return key; 
			}
		}
		return -1;
	}
}