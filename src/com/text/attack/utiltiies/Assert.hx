package com.text.attack.utiltiies;

import openfl.system.System;
/**
 * ...
 * @author Daphne
 */
class Assert
{
	public static function assert( cond : Bool, ?pos : haxe.PosInfos ) {
		if ( !cond ) {
			trace("Assert in " + pos.className + "::" + pos.methodName, pos);
			System.exit(1);
		}
    }
}