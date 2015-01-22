package nme;


import openfl.Assets;


class AssetData {

	
	public static var className = new #if haxe3 Map <String, #else Hash <#end Dynamic> ();
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();
	
	private static var initialized:Bool = false;
	
	
	public static function initialize ():Void {
		
		if (!initialized) {
			
			className.set ("fonts/me.ttf", nme.NME_fonts_me_ttf);
			type.set ("fonts/me.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			className.set ("fonts/me.ttf.bak", nme.NME_fonts_me_ttf_bak);
			type.set ("fonts/me.ttf.bak", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("fonts/Original me.ttf", nme.NME_fonts_original_me_ttf);
			type.set ("fonts/Original me.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			className.set ("audio/end.wav", nme.NME_audio_end_wav);
			type.set ("audio/end.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/end.wav.asd", nme.NME_audio_end_wav_asd);
			type.set ("audio/end.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/ma_01.wav", nme.NME_audio_ma_01_wav);
			type.set ("audio/ma_01.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/ma_01.wav.asd", nme.NME_audio_ma_01_wav_asd);
			type.set ("audio/ma_01.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/ma_02.wav", nme.NME_audio_ma_02_wav);
			type.set ("audio/ma_02.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/ma_02.wav.asd", nme.NME_audio_ma_02_wav_asd);
			type.set ("audio/ma_02.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/ma_03.wav", nme.NME_audio_ma_03_wav);
			type.set ("audio/ma_03.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/ma_03.wav.asd", nme.NME_audio_ma_03_wav_asd);
			type.set ("audio/ma_03.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/ma_04.wav", nme.NME_audio_ma_04_wav);
			type.set ("audio/ma_04.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/ma_04.wav.asd", nme.NME_audio_ma_04_wav_asd);
			type.set ("audio/ma_04.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/ma_05.wav", nme.NME_audio_ma_05_wav);
			type.set ("audio/ma_05.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/ma_05.wav.asd", nme.NME_audio_ma_05_wav_asd);
			type.set ("audio/ma_05.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/m_01.wav", nme.NME_audio_m_01_wav);
			type.set ("audio/m_01.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/m_01.wav.asd", nme.NME_audio_m_01_wav_asd);
			type.set ("audio/m_01.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/m_02.wav", nme.NME_audio_m_02_wav);
			type.set ("audio/m_02.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/m_02.wav.asd", nme.NME_audio_m_02_wav_asd);
			type.set ("audio/m_02.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/m_03.wav", nme.NME_audio_m_03_wav);
			type.set ("audio/m_03.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/m_03.wav.asd", nme.NME_audio_m_03_wav_asd);
			type.set ("audio/m_03.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/m_04.wav", nme.NME_audio_m_04_wav);
			type.set ("audio/m_04.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/m_04.wav.asd", nme.NME_audio_m_04_wav_asd);
			type.set ("audio/m_04.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/m_05.wav", nme.NME_audio_m_05_wav);
			type.set ("audio/m_05.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/m_05.wav.asd", nme.NME_audio_m_05_wav_asd);
			type.set ("audio/m_05.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/m_06.wav", nme.NME_audio_m_06_wav);
			type.set ("audio/m_06.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/m_06.wav.asd", nme.NME_audio_m_06_wav_asd);
			type.set ("audio/m_06.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/m_07.wav", nme.NME_audio_m_07_wav);
			type.set ("audio/m_07.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/m_07.wav.asd", nme.NME_audio_m_07_wav_asd);
			type.set ("audio/m_07.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			className.set ("audio/m_08.wav", nme.NME_audio_m_08_wav);
			type.set ("audio/m_08.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			className.set ("audio/m_08.wav.asd", nme.NME_audio_m_08_wav_asd);
			type.set ("audio/m_08.wav.asd", Reflect.field (AssetType, "binary".toUpperCase ()));
			
			
			initialized = true;
			
		}
		
	}
	
	
}


class NME_fonts_me_ttf extends flash.text.Font { }
class NME_fonts_me_ttf_bak extends flash.utils.ByteArray { }
class NME_fonts_original_me_ttf extends flash.text.Font { }
class NME_audio_end_wav extends flash.media.Sound { }
class NME_audio_end_wav_asd extends flash.utils.ByteArray { }
class NME_audio_ma_01_wav extends flash.media.Sound { }
class NME_audio_ma_01_wav_asd extends flash.utils.ByteArray { }
class NME_audio_ma_02_wav extends flash.media.Sound { }
class NME_audio_ma_02_wav_asd extends flash.utils.ByteArray { }
class NME_audio_ma_03_wav extends flash.media.Sound { }
class NME_audio_ma_03_wav_asd extends flash.utils.ByteArray { }
class NME_audio_ma_04_wav extends flash.media.Sound { }
class NME_audio_ma_04_wav_asd extends flash.utils.ByteArray { }
class NME_audio_ma_05_wav extends flash.media.Sound { }
class NME_audio_ma_05_wav_asd extends flash.utils.ByteArray { }
class NME_audio_m_01_wav extends flash.media.Sound { }
class NME_audio_m_01_wav_asd extends flash.utils.ByteArray { }
class NME_audio_m_02_wav extends flash.media.Sound { }
class NME_audio_m_02_wav_asd extends flash.utils.ByteArray { }
class NME_audio_m_03_wav extends flash.media.Sound { }
class NME_audio_m_03_wav_asd extends flash.utils.ByteArray { }
class NME_audio_m_04_wav extends flash.media.Sound { }
class NME_audio_m_04_wav_asd extends flash.utils.ByteArray { }
class NME_audio_m_05_wav extends flash.media.Sound { }
class NME_audio_m_05_wav_asd extends flash.utils.ByteArray { }
class NME_audio_m_06_wav extends flash.media.Sound { }
class NME_audio_m_06_wav_asd extends flash.utils.ByteArray { }
class NME_audio_m_07_wav extends flash.media.Sound { }
class NME_audio_m_07_wav_asd extends flash.utils.ByteArray { }
class NME_audio_m_08_wav extends flash.media.Sound { }
class NME_audio_m_08_wav_asd extends flash.utils.ByteArray { }
