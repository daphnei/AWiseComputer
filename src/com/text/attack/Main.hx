package com.text.attack;

import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import openfl.display.StageDisplayState;
import com.text.attack.world.World;
import openfl.utils.Timer;
import openfl.events.TimerEvent;

/**
 * ...
 * @author Daphne
 */

class Main extends Sprite 
{
	var inited:Bool;

	var world:World;
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	function update(event:Event) 
	{
		this.world.update();
	}
	
	function init() 
	{
		if (this.inited) return;
		this.inited = true;

		// (your code here)
		#if !debug
		//Lib.current.stage.displayState = StageDisplayState.FULL_SCREEN_INTERACTIVE;
		#end
		
		this.world = new World();
		this.world.x = this.stage.stageWidth / 2;
		this.world.y = this.stage.stageHeight / 2;
		this.addChild(world);
		
		// Stage:
		// stage.stageWidth x stage.stageHeight @ stage.dpiScale
		
		// Assets:
		// nme.Assets.getBitmapData("img/assetname.jpg");
	}

	/* SETUP */

	public function new() 
	{
		super();	
		addEventListener(Event.ADDED_TO_STAGE, added);
	}

	function added(e) 
	{
		removeEventListener(Event.ADDED_TO_STAGE, added);
		stage.addEventListener(Event.RESIZE, resize);
		//stage.addEventListener(Event.ENTER_FRAME, update);
		
		//var timer:Timer = new Timer(500, 0);
		//timer.addEventListener(TimerEvent.TIMER, update);
		//timer.start();
	}
	
	public static function main() 
	{
		// static entry point
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());
	}
}
