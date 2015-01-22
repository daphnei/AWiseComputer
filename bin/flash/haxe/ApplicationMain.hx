import lime.Assets;
#if !macro


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	private static var app:lime.app.Application;
	
	
	public static function create ():Void {
		
		app = new openfl.display.Application ();
		app.create (config);
		
		var display = new NMEPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		preloader.onComplete = init;
		preloader.create (config);
		
		#if js
		var urls = [];
		var types = [];
		
		
		urls.push ("MyCourier");
		types.push (AssetType.FONT);
		
		
		urls.push ("fonts/me.ttf.bak");
		types.push (AssetType.BINARY);
		
		
		urls.push ("MyCourier");
		types.push (AssetType.FONT);
		
		
		urls.push ("fonts/me2.ttf.bf");
		types.push (AssetType.TEXT);
		
		
		urls.push ("MyCourier");
		types.push (AssetType.FONT);
		
		
		urls.push ("Courier");
		types.push (AssetType.FONT);
		
		
		urls.push ("audio/end.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/end.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/ma_01.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/ma_01.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/ma_02.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/ma_02.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/ma_03.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/ma_03.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/ma_04.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/ma_04.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/ma_05.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/ma_05.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/m_01.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/m_01.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/m_02.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/m_02.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/m_03.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/m_03.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/m_04.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/m_04.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/m_05.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/m_05.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/m_06.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/m_06.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/m_07.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/m_07.wav.asd");
		types.push (AssetType.BINARY);
		
		
		urls.push ("audio/m_08.wav");
		types.push (AssetType.SOUND);
		
		
		urls.push ("audio/m_08.wav.asd");
		types.push (AssetType.BINARY);
		
		
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if sys
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		if (loaded == total) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			antialiasing: Std.int (0),
			background: Std.int (0),
			borderless: false,
			depthBuffer: false,
			fps: Std.int (60),
			fullscreen: true,
			height: Std.int (800),
			orientation: "",
			resizable: true,
			stencilBuffer: false,
			title: "TextAttack",
			vsync: false,
			width: Std.int (1200),
			
		}
		
		#if js
		#if munit
		flash.Lib.embed (null, 1200, 800, "000000");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		openfl.Lib.current.stage.align = openfl.display.StageAlign.TOP_LEFT;
		openfl.Lib.current.stage.scaleMode = openfl.display.StageScaleMode.NO_SCALE;
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields (com.text.attack.Main)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		if (hasMain) {
			
			Reflect.callMethod (com.text.attack.Main, Reflect.field (com.text.attack.Main, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		
	}
	
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends com.text.attack.Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end
