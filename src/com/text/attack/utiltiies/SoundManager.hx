package com.text.attack.utiltiies;

import openfl.media.Sound;
import openfl.Assets;
/**
 * Taken from http://www.colourlovers.com/palette/350919/icecream
 * @author Daphne
 */
class SoundManager
{

	private var singleSounds:Array<Sound>;
	private var chordSounds:Array<Sound>;


	private var endSound:Sound;

	public function new() 
	{
		singleSounds = new Array<Sound>();
		for (i in 1...9) {
			var path:String = "audio/m_0" + i + ".wav";
			var sound:Sound = Assets.getSound(path);
			singleSounds.push(sound);
		}

		chordSounds = new Array<Sound>();
		for (i in 1...6) {
			var path:String = "audio/ma_0" + i + ".wav";
			var sound:Sound = Assets.getSound(path);
			chordSounds.push(sound);
		}

		this.endSound = Assets.getSound("audio/end.wav");
	}

	public function playRandomNote():Void
	{
		var r:Int = Std.random(singleSounds.length);
		singleSounds[r].play();
	}

	public function playRandomChord():Void
	{
		var r:Int = Std.random(chordSounds.length);
		chordSounds[r].play();
	}


	public function playEndSound():Void
	{
		this.endSound.play();
	}
}