package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Font;
import lime.graphics.Image;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if (sys || nodejs)
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("fonts/me.ttf", __ASSET__fonts_me_ttf);
		type.set ("fonts/me.ttf", AssetType.FONT);
		className.set ("fonts/me.ttf.bak", __ASSET__fonts_me_ttf_bak);
		type.set ("fonts/me.ttf.bak", AssetType.BINARY);
		className.set ("fonts/me2.ttf.bf", __ASSET__fonts_me2_ttf_bf);
		type.set ("fonts/me2.ttf.bf", AssetType.TEXT);
		className.set ("fonts/Original me.ttf", __ASSET__fonts_original_me_ttf);
		type.set ("fonts/Original me.ttf", AssetType.FONT);
		className.set ("audio/end.wav", __ASSET__audio_end_wav);
		type.set ("audio/end.wav", AssetType.SOUND);
		className.set ("audio/end.wav.asd", __ASSET__audio_end_wav_asd);
		type.set ("audio/end.wav.asd", AssetType.BINARY);
		className.set ("audio/m_01.wav", __ASSET__audio_m_01_wav);
		type.set ("audio/m_01.wav", AssetType.SOUND);
		className.set ("audio/m_01.wav.asd", __ASSET__audio_m_01_wav_asd);
		type.set ("audio/m_01.wav.asd", AssetType.BINARY);
		className.set ("audio/m_02.wav", __ASSET__audio_m_02_wav);
		type.set ("audio/m_02.wav", AssetType.SOUND);
		className.set ("audio/m_02.wav.asd", __ASSET__audio_m_02_wav_asd);
		type.set ("audio/m_02.wav.asd", AssetType.BINARY);
		className.set ("audio/m_03.wav", __ASSET__audio_m_03_wav);
		type.set ("audio/m_03.wav", AssetType.SOUND);
		className.set ("audio/m_03.wav.asd", __ASSET__audio_m_03_wav_asd);
		type.set ("audio/m_03.wav.asd", AssetType.BINARY);
		className.set ("audio/m_04.wav", __ASSET__audio_m_04_wav);
		type.set ("audio/m_04.wav", AssetType.SOUND);
		className.set ("audio/m_04.wav.asd", __ASSET__audio_m_04_wav_asd);
		type.set ("audio/m_04.wav.asd", AssetType.BINARY);
		className.set ("audio/m_05.wav", __ASSET__audio_m_05_wav);
		type.set ("audio/m_05.wav", AssetType.SOUND);
		className.set ("audio/m_05.wav.asd", __ASSET__audio_m_05_wav_asd);
		type.set ("audio/m_05.wav.asd", AssetType.BINARY);
		className.set ("audio/m_06.wav", __ASSET__audio_m_06_wav);
		type.set ("audio/m_06.wav", AssetType.SOUND);
		className.set ("audio/m_06.wav.asd", __ASSET__audio_m_06_wav_asd);
		type.set ("audio/m_06.wav.asd", AssetType.BINARY);
		className.set ("audio/m_07.wav", __ASSET__audio_m_07_wav);
		type.set ("audio/m_07.wav", AssetType.SOUND);
		className.set ("audio/m_07.wav.asd", __ASSET__audio_m_07_wav_asd);
		type.set ("audio/m_07.wav.asd", AssetType.BINARY);
		className.set ("audio/m_08.wav", __ASSET__audio_m_08_wav);
		type.set ("audio/m_08.wav", AssetType.SOUND);
		className.set ("audio/m_08.wav.asd", __ASSET__audio_m_08_wav_asd);
		type.set ("audio/m_08.wav.asd", AssetType.BINARY);
		className.set ("audio/ma_01.wav", __ASSET__audio_ma_01_wav);
		type.set ("audio/ma_01.wav", AssetType.SOUND);
		className.set ("audio/ma_01.wav.asd", __ASSET__audio_ma_01_wav_asd);
		type.set ("audio/ma_01.wav.asd", AssetType.BINARY);
		className.set ("audio/ma_02.wav", __ASSET__audio_ma_02_wav);
		type.set ("audio/ma_02.wav", AssetType.SOUND);
		className.set ("audio/ma_02.wav.asd", __ASSET__audio_ma_02_wav_asd);
		type.set ("audio/ma_02.wav.asd", AssetType.BINARY);
		className.set ("audio/ma_03.wav", __ASSET__audio_ma_03_wav);
		type.set ("audio/ma_03.wav", AssetType.SOUND);
		className.set ("audio/ma_03.wav.asd", __ASSET__audio_ma_03_wav_asd);
		type.set ("audio/ma_03.wav.asd", AssetType.BINARY);
		className.set ("audio/ma_04.wav", __ASSET__audio_ma_04_wav);
		type.set ("audio/ma_04.wav", AssetType.SOUND);
		className.set ("audio/ma_04.wav.asd", __ASSET__audio_ma_04_wav_asd);
		type.set ("audio/ma_04.wav.asd", AssetType.BINARY);
		className.set ("audio/ma_05.wav", __ASSET__audio_ma_05_wav);
		type.set ("audio/ma_05.wav", AssetType.SOUND);
		className.set ("audio/ma_05.wav.asd", __ASSET__audio_ma_05_wav_asd);
		type.set ("audio/ma_05.wav.asd", AssetType.BINARY);
		
		
		#elseif html5
		
		var id;
		id = "fonts/me.ttf";
		className.set (id, __ASSET__fonts_me_ttf);
		
		type.set (id, AssetType.FONT);
		id = "fonts/me.ttf.bak";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "fonts/me2.ttf.bf";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "fonts/Original me.ttf";
		className.set (id, __ASSET__fonts_original_me_ttf);
		
		type.set (id, AssetType.FONT);
		id = "audio/end.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/end.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/m_01.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/m_01.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/m_02.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/m_02.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/m_03.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/m_03.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/m_04.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/m_04.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/m_05.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/m_05.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/m_06.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/m_06.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/m_07.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/m_07.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/m_08.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/m_08.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/ma_01.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/ma_01.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/ma_02.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/ma_02.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/ma_03.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/ma_03.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/ma_04.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/ma_04.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "audio/ma_05.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "audio/ma_05.wav.asd";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		
		
		#else
		
		#if openfl
		
		openfl.text.Font.registerFont (__ASSET__fonts_me_ttf);
		
		
		openfl.text.Font.registerFont (__ASSET__fonts_original_me_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if (windows || mac || linux)
		
		/*var useManifest = false;
		
		className.set ("fonts/me.ttf", __ASSET__fonts_me_ttf);
		type.set ("fonts/me.ttf", AssetType.FONT);
		
		className.set ("fonts/me.ttf.bak", __ASSET__fonts_me_ttf_bak);
		type.set ("fonts/me.ttf.bak", AssetType.BINARY);
		
		className.set ("fonts/me2.ttf.bf", __ASSET__fonts_me2_ttf_bf);
		type.set ("fonts/me2.ttf.bf", AssetType.TEXT);
		
		className.set ("fonts/Original me.ttf", __ASSET__fonts_original_me_ttf);
		type.set ("fonts/Original me.ttf", AssetType.FONT);
		
		className.set ("audio/end.wav", __ASSET__audio_end_wav);
		type.set ("audio/end.wav", AssetType.SOUND);
		
		className.set ("audio/end.wav.asd", __ASSET__audio_end_wav_asd);
		type.set ("audio/end.wav.asd", AssetType.BINARY);
		
		className.set ("audio/m_01.wav", __ASSET__audio_m_01_wav);
		type.set ("audio/m_01.wav", AssetType.SOUND);
		
		className.set ("audio/m_01.wav.asd", __ASSET__audio_m_01_wav_asd);
		type.set ("audio/m_01.wav.asd", AssetType.BINARY);
		
		className.set ("audio/m_02.wav", __ASSET__audio_m_02_wav);
		type.set ("audio/m_02.wav", AssetType.SOUND);
		
		className.set ("audio/m_02.wav.asd", __ASSET__audio_m_02_wav_asd);
		type.set ("audio/m_02.wav.asd", AssetType.BINARY);
		
		className.set ("audio/m_03.wav", __ASSET__audio_m_03_wav);
		type.set ("audio/m_03.wav", AssetType.SOUND);
		
		className.set ("audio/m_03.wav.asd", __ASSET__audio_m_03_wav_asd);
		type.set ("audio/m_03.wav.asd", AssetType.BINARY);
		
		className.set ("audio/m_04.wav", __ASSET__audio_m_04_wav);
		type.set ("audio/m_04.wav", AssetType.SOUND);
		
		className.set ("audio/m_04.wav.asd", __ASSET__audio_m_04_wav_asd);
		type.set ("audio/m_04.wav.asd", AssetType.BINARY);
		
		className.set ("audio/m_05.wav", __ASSET__audio_m_05_wav);
		type.set ("audio/m_05.wav", AssetType.SOUND);
		
		className.set ("audio/m_05.wav.asd", __ASSET__audio_m_05_wav_asd);
		type.set ("audio/m_05.wav.asd", AssetType.BINARY);
		
		className.set ("audio/m_06.wav", __ASSET__audio_m_06_wav);
		type.set ("audio/m_06.wav", AssetType.SOUND);
		
		className.set ("audio/m_06.wav.asd", __ASSET__audio_m_06_wav_asd);
		type.set ("audio/m_06.wav.asd", AssetType.BINARY);
		
		className.set ("audio/m_07.wav", __ASSET__audio_m_07_wav);
		type.set ("audio/m_07.wav", AssetType.SOUND);
		
		className.set ("audio/m_07.wav.asd", __ASSET__audio_m_07_wav_asd);
		type.set ("audio/m_07.wav.asd", AssetType.BINARY);
		
		className.set ("audio/m_08.wav", __ASSET__audio_m_08_wav);
		type.set ("audio/m_08.wav", AssetType.SOUND);
		
		className.set ("audio/m_08.wav.asd", __ASSET__audio_m_08_wav_asd);
		type.set ("audio/m_08.wav.asd", AssetType.BINARY);
		
		className.set ("audio/ma_01.wav", __ASSET__audio_ma_01_wav);
		type.set ("audio/ma_01.wav", AssetType.SOUND);
		
		className.set ("audio/ma_01.wav.asd", __ASSET__audio_ma_01_wav_asd);
		type.set ("audio/ma_01.wav.asd", AssetType.BINARY);
		
		className.set ("audio/ma_02.wav", __ASSET__audio_ma_02_wav);
		type.set ("audio/ma_02.wav", AssetType.SOUND);
		
		className.set ("audio/ma_02.wav.asd", __ASSET__audio_ma_02_wav_asd);
		type.set ("audio/ma_02.wav.asd", AssetType.BINARY);
		
		className.set ("audio/ma_03.wav", __ASSET__audio_ma_03_wav);
		type.set ("audio/ma_03.wav", AssetType.SOUND);
		
		className.set ("audio/ma_03.wav.asd", __ASSET__audio_ma_03_wav_asd);
		type.set ("audio/ma_03.wav.asd", AssetType.BINARY);
		
		className.set ("audio/ma_04.wav", __ASSET__audio_ma_04_wav);
		type.set ("audio/ma_04.wav", AssetType.SOUND);
		
		className.set ("audio/ma_04.wav.asd", __ASSET__audio_ma_04_wav_asd);
		type.set ("audio/ma_04.wav.asd", AssetType.BINARY);
		
		className.set ("audio/ma_05.wav", __ASSET__audio_ma_05_wav);
		type.set ("audio/ma_05.wav", AssetType.SOUND);
		
		className.set ("audio/ma_05.wav.asd", __ASSET__audio_ma_05_wav_asd);
		type.set ("audio/ma_05.wav.asd", AssetType.BINARY);
		*/
		var useManifest = true;
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && requestedType == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return AudioBuffer.fromFile (path.get (id));
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		//return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		//else 
		return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Dynamic /*Font*/ {
		
		// TODO: Complete Lime Font API
		
		#if openfl
		#if (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), openfl.text.Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			openfl.text.Font.registerFont (fontClass);
			return cast (Type.createInstance (fontClass, []), openfl.text.Font);
			
		} else {
			
			return new openfl.text.Font (path.get (id));
			
		}
		
		#end
		#end
		
		return null;
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		return Image.fromFile (path.get (id));
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash || js)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getAudioBuffer (id));
			
		//}
		
		#else
		
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		handler (getImage (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || js)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		//#if html5
		
		/*if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}*/
		
		//#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		//#end
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__fonts_me_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__fonts_me_ttf_bak extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_me2_ttf_bf extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__fonts_original_me_ttf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__audio_end_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_end_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_m_01_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_m_01_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_m_02_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_m_02_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_m_03_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_m_03_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_m_04_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_m_04_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_m_05_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_m_05_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_m_06_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_m_06_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_m_07_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_m_07_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_m_08_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_m_08_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_ma_01_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_ma_01_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_ma_02_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_ma_02_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_ma_03_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_ma_03_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_ma_04_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_ma_04_wav_asd extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__audio_ma_05_wav extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__audio_ma_05_wav_asd extends flash.utils.ByteArray { }


#elseif html5

#if openfl
@:keep #if display private #end class __ASSET__fonts_me_ttf extends openfl.text.Font { public function new () { super (); fontName = "MyCourier"; } } 


@:keep #if display private #end class __ASSET__fonts_original_me_ttf extends openfl.text.Font { public function new () { super (); fontName = "Courier"; } } 





























#end

#else

#if openfl
class __ASSET__fonts_me_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/me.ttf"; fontName = "MyCourier"; }}
class __ASSET__fonts_original_me_ttf extends openfl.text.Font { public function new () { super (); __fontPath = "fonts/Original me.ttf"; fontName = "Courier"; }}

#end

#if (windows || mac || linux)

//
//@:font("Assets/fonts/me.ttf") class __ASSET__fonts_me_ttf extends openfl.text.Font {}
//@:file("Assets/fonts/me.ttf.bak") class __ASSET__fonts_me_ttf_bak extends lime.utils.ByteArray {}
//@:file("Assets/fonts/me2.ttf.bf") class __ASSET__fonts_me2_ttf_bf extends lime.utils.ByteArray {}
//@:font("Assets/fonts/Original me.ttf") class __ASSET__fonts_original_me_ttf extends openfl.text.Font {}
//@:sound("Assets/audio/end.wav") class __ASSET__audio_end_wav extends openfl.media.Sound {}
//@:file("Assets/audio/end.wav.asd") class __ASSET__audio_end_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/m_01.wav") class __ASSET__audio_m_01_wav extends openfl.media.Sound {}
//@:file("Assets/audio/m_01.wav.asd") class __ASSET__audio_m_01_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/m_02.wav") class __ASSET__audio_m_02_wav extends openfl.media.Sound {}
//@:file("Assets/audio/m_02.wav.asd") class __ASSET__audio_m_02_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/m_03.wav") class __ASSET__audio_m_03_wav extends openfl.media.Sound {}
//@:file("Assets/audio/m_03.wav.asd") class __ASSET__audio_m_03_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/m_04.wav") class __ASSET__audio_m_04_wav extends openfl.media.Sound {}
//@:file("Assets/audio/m_04.wav.asd") class __ASSET__audio_m_04_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/m_05.wav") class __ASSET__audio_m_05_wav extends openfl.media.Sound {}
//@:file("Assets/audio/m_05.wav.asd") class __ASSET__audio_m_05_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/m_06.wav") class __ASSET__audio_m_06_wav extends openfl.media.Sound {}
//@:file("Assets/audio/m_06.wav.asd") class __ASSET__audio_m_06_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/m_07.wav") class __ASSET__audio_m_07_wav extends openfl.media.Sound {}
//@:file("Assets/audio/m_07.wav.asd") class __ASSET__audio_m_07_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/m_08.wav") class __ASSET__audio_m_08_wav extends openfl.media.Sound {}
//@:file("Assets/audio/m_08.wav.asd") class __ASSET__audio_m_08_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/ma_01.wav") class __ASSET__audio_ma_01_wav extends openfl.media.Sound {}
//@:file("Assets/audio/ma_01.wav.asd") class __ASSET__audio_ma_01_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/ma_02.wav") class __ASSET__audio_ma_02_wav extends openfl.media.Sound {}
//@:file("Assets/audio/ma_02.wav.asd") class __ASSET__audio_ma_02_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/ma_03.wav") class __ASSET__audio_ma_03_wav extends openfl.media.Sound {}
//@:file("Assets/audio/ma_03.wav.asd") class __ASSET__audio_ma_03_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/ma_04.wav") class __ASSET__audio_ma_04_wav extends openfl.media.Sound {}
//@:file("Assets/audio/ma_04.wav.asd") class __ASSET__audio_ma_04_wav_asd extends lime.utils.ByteArray {}
//@:sound("Assets/audio/ma_05.wav") class __ASSET__audio_ma_05_wav extends openfl.media.Sound {}
//@:file("Assets/audio/ma_05.wav.asd") class __ASSET__audio_ma_05_wav_asd extends lime.utils.ByteArray {}
//
//

#end

#end
#end

