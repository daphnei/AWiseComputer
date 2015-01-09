#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_text_attack_utiltiies_SoundManager
#include <com/text/attack/utiltiies/SoundManager.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__v2_media_SoundChannel
#include <openfl/_v2/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace utiltiies{

Void SoundManager_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.utiltiies.SoundManager","new",0x5972e390,"com.text.attack.utiltiies.SoundManager.new","com/text/attack/utiltiies/SoundManager.hx",19,0xe97d293e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->singleSounds = _g;
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(21)
		while((true)){
			HX_STACK_LINE(21)
			if ((!(((_g1 < (int)9))))){
				HX_STACK_LINE(21)
				break;
			}
			HX_STACK_LINE(21)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(22)
			::String path = ((HX_CSTRING("audio/m_0") + i) + HX_CSTRING(".wav"));		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(23)
			::openfl::_v2::media::Sound sound = ::openfl::_v2::Assets_obj::getSound(path,null());		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(24)
			this->singleSounds->push(sound);
		}
	}
	HX_STACK_LINE(27)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(27)
	this->chordSounds = _g1;
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int _g2 = (int)1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(28)
		while((true)){
			HX_STACK_LINE(28)
			if ((!(((_g2 < (int)6))))){
				HX_STACK_LINE(28)
				break;
			}
			HX_STACK_LINE(28)
			int i = (_g2)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(29)
			::String path = ((HX_CSTRING("audio/ma_0") + i) + HX_CSTRING(".wav"));		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(30)
			::openfl::_v2::media::Sound sound = ::openfl::_v2::Assets_obj::getSound(path,null());		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(31)
			this->chordSounds->push(sound);
		}
	}
	HX_STACK_LINE(34)
	::openfl::_v2::media::Sound _g2 = ::openfl::_v2::Assets_obj::getSound(HX_CSTRING("audio/end.wav"),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(34)
	this->endSound = _g2;
}
;
	return null();
}

//SoundManager_obj::~SoundManager_obj() { }

Dynamic SoundManager_obj::__CreateEmpty() { return  new SoundManager_obj; }
hx::ObjectPtr< SoundManager_obj > SoundManager_obj::__new()
{  hx::ObjectPtr< SoundManager_obj > result = new SoundManager_obj();
	result->__construct();
	return result;}

Dynamic SoundManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundManager_obj > result = new SoundManager_obj();
	result->__construct();
	return result;}

Void SoundManager_obj::playRandomNote( ){
{
		HX_STACK_FRAME("com.text.attack.utiltiies.SoundManager","playRandomNote",0x318b2979,"com.text.attack.utiltiies.SoundManager.playRandomNote","com/text/attack/utiltiies/SoundManager.hx",38,0xe97d293e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		int r = ::Std_obj::random(this->singleSounds->length);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(40)
		this->singleSounds->__get(r).StaticCast< ::openfl::_v2::media::Sound >()->play(null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundManager_obj,playRandomNote,(void))

Void SoundManager_obj::playRandomChord( ){
{
		HX_STACK_FRAME("com.text.attack.utiltiies.SoundManager","playRandomChord",0xce2c80f5,"com.text.attack.utiltiies.SoundManager.playRandomChord","com/text/attack/utiltiies/SoundManager.hx",44,0xe97d293e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		int r = ::Std_obj::random(this->chordSounds->length);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(46)
		this->chordSounds->__get(r).StaticCast< ::openfl::_v2::media::Sound >()->play(null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundManager_obj,playRandomChord,(void))

Void SoundManager_obj::playEndSound( ){
{
		HX_STACK_FRAME("com.text.attack.utiltiies.SoundManager","playEndSound",0xaa4023d8,"com.text.attack.utiltiies.SoundManager.playEndSound","com/text/attack/utiltiies/SoundManager.hx",52,0xe97d293e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->endSound->play(null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundManager_obj,playEndSound,(void))


SoundManager_obj::SoundManager_obj()
{
}

void SoundManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundManager);
	HX_MARK_MEMBER_NAME(singleSounds,"singleSounds");
	HX_MARK_MEMBER_NAME(chordSounds,"chordSounds");
	HX_MARK_MEMBER_NAME(endSound,"endSound");
	HX_MARK_END_CLASS();
}

void SoundManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(singleSounds,"singleSounds");
	HX_VISIT_MEMBER_NAME(chordSounds,"chordSounds");
	HX_VISIT_MEMBER_NAME(endSound,"endSound");
}

Dynamic SoundManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"endSound") ) { return endSound; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"chordSounds") ) { return chordSounds; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"singleSounds") ) { return singleSounds; }
		if (HX_FIELD_EQ(inName,"playEndSound") ) { return playEndSound_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"playRandomNote") ) { return playRandomNote_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playRandomChord") ) { return playRandomChord_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"endSound") ) { endSound=inValue.Cast< ::openfl::_v2::media::Sound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"chordSounds") ) { chordSounds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"singleSounds") ) { singleSounds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("singleSounds"));
	outFields->push(HX_CSTRING("chordSounds"));
	outFields->push(HX_CSTRING("endSound"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SoundManager_obj,singleSounds),HX_CSTRING("singleSounds")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SoundManager_obj,chordSounds),HX_CSTRING("chordSounds")},
	{hx::fsObject /*::openfl::_v2::media::Sound*/ ,(int)offsetof(SoundManager_obj,endSound),HX_CSTRING("endSound")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("singleSounds"),
	HX_CSTRING("chordSounds"),
	HX_CSTRING("endSound"),
	HX_CSTRING("playRandomNote"),
	HX_CSTRING("playRandomChord"),
	HX_CSTRING("playEndSound"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundManager_obj::__mClass,"__mClass");
};

#endif

Class SoundManager_obj::__mClass;

void SoundManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.utiltiies.SoundManager"), hx::TCanCast< SoundManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void SoundManager_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace utiltiies
