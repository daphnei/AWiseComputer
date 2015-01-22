package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("fonts/me.ttf", "fonts/me.ttf");
			type.set ("fonts/me.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("fonts/me.ttf.bak", "fonts/me.ttf.bak");
			type.set ("fonts/me.ttf.bak", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("fonts/me2.ttf", "fonts/me2.ttf");
			type.set ("fonts/me2.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("fonts/me2.ttf.bf", "fonts/me2.ttf.bf");
			type.set ("fonts/me2.ttf.bf", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("fonts/MyCourier.ttf", "fonts/MyCourier.ttf");
			type.set ("fonts/MyCourier.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("fonts/Original me.ttf", "fonts/Original me.ttf");
			type.set ("fonts/Original me.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("audio/end.wav", "audio/end.wav");
			type.set ("audio/end.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/end.wav.asd", "audio/end.wav.asd");
			type.set ("audio/end.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/ma_01.wav", "audio/ma_01.wav");
			type.set ("audio/ma_01.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/ma_01.wav.asd", "audio/ma_01.wav.asd");
			type.set ("audio/ma_01.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/ma_02.wav", "audio/ma_02.wav");
			type.set ("audio/ma_02.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/ma_02.wav.asd", "audio/ma_02.wav.asd");
			type.set ("audio/ma_02.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/ma_03.wav", "audio/ma_03.wav");
			type.set ("audio/ma_03.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/ma_03.wav.asd", "audio/ma_03.wav.asd");
			type.set ("audio/ma_03.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/ma_04.wav", "audio/ma_04.wav");
			type.set ("audio/ma_04.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/ma_04.wav.asd", "audio/ma_04.wav.asd");
			type.set ("audio/ma_04.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/ma_05.wav", "audio/ma_05.wav");
			type.set ("audio/ma_05.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/ma_05.wav.asd", "audio/ma_05.wav.asd");
			type.set ("audio/ma_05.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/m_01.wav", "audio/m_01.wav");
			type.set ("audio/m_01.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/m_01.wav.asd", "audio/m_01.wav.asd");
			type.set ("audio/m_01.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/m_02.wav", "audio/m_02.wav");
			type.set ("audio/m_02.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/m_02.wav.asd", "audio/m_02.wav.asd");
			type.set ("audio/m_02.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/m_03.wav", "audio/m_03.wav");
			type.set ("audio/m_03.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/m_03.wav.asd", "audio/m_03.wav.asd");
			type.set ("audio/m_03.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/m_04.wav", "audio/m_04.wav");
			type.set ("audio/m_04.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/m_04.wav.asd", "audio/m_04.wav.asd");
			type.set ("audio/m_04.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/m_05.wav", "audio/m_05.wav");
			type.set ("audio/m_05.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/m_05.wav.asd", "audio/m_05.wav.asd");
			type.set ("audio/m_05.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/m_06.wav", "audio/m_06.wav");
			type.set ("audio/m_06.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/m_06.wav.asd", "audio/m_06.wav.asd");
			type.set ("audio/m_06.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/m_07.wav", "audio/m_07.wav");
			type.set ("audio/m_07.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/m_07.wav.asd", "audio/m_07.wav.asd");
			type.set ("audio/m_07.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("audio/m_08.wav", "audio/m_08.wav");
			type.set ("audio/m_08.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("audio/m_08.wav.asd", "audio/m_08.wav.asd");
			type.set ("audio/m_08.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
