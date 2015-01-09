#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_utiltiies_KeyManager
#include <com/text/attack/utiltiies/KeyManager.h>
#endif
#ifndef INCLUDED_com_text_attack_world_World
#include <com/text/attack/world/World.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_KeyboardEvent
#include <openfl/_v2/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_system_System
#include <openfl/_v2/system/System.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace utiltiies{

Void KeyManager_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.utiltiies.KeyManager","new",0xac3668c0,"com.text.attack.utiltiies.KeyManager.new","com/text/attack/utiltiies/KeyManager.hx",18,0x6060268e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	this->keysDown = _g;
	HX_STACK_LINE(21)
	::com::text::attack::world::World_obj::instance->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
	HX_STACK_LINE(22)
	::com::text::attack::world::World_obj::instance->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->onKeyUp_dyn(),null(),null(),null());
}
;
	return null();
}

//KeyManager_obj::~KeyManager_obj() { }

Dynamic KeyManager_obj::__CreateEmpty() { return  new KeyManager_obj; }
hx::ObjectPtr< KeyManager_obj > KeyManager_obj::__new()
{  hx::ObjectPtr< KeyManager_obj > result = new KeyManager_obj();
	result->__construct();
	return result;}

Dynamic KeyManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyManager_obj > result = new KeyManager_obj();
	result->__construct();
	return result;}

Void KeyManager_obj::update( ){
{
		HX_STACK_FRAME("com.text.attack.utiltiies.KeyManager","update",0xac4669a9,"com.text.attack.utiltiies.KeyManager.update","com/text/attack/utiltiies/KeyManager.hx",28,0x6060268e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->keysDown->splice((int)0,this->keysDown->length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(KeyManager_obj,update,(void))

Void KeyManager_obj::onKeyDown( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("com.text.attack.utiltiies.KeyManager","onKeyDown",0x8be342a2,"com.text.attack.utiltiies.KeyManager.onKeyDown","com/text/attack/utiltiies/KeyManager.hx",33,0x6060268e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(33)
		this->keysDown->push(event->keyCode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KeyManager_obj,onKeyDown,(void))

Void KeyManager_obj::onKeyUp( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("com.text.attack.utiltiies.KeyManager","onKeyUp",0xe8c2a09b,"com.text.attack.utiltiies.KeyManager.onKeyUp","com/text/attack/utiltiies/KeyManager.hx",37,0x6060268e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(38)
		if ((this->isKeyDown((int)27))){
			HX_STACK_LINE(39)
			::openfl::_v2::system::System_obj::exit((int)0);
		}
		HX_STACK_LINE(41)
		::com::text::attack::world::World_obj::instance->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KeyManager_obj,onKeyUp,(void))

bool KeyManager_obj::isKeyDown( int keyCode){
	HX_STACK_FRAME("com.text.attack.utiltiies.KeyManager","isKeyDown",0xb8370737,"com.text.attack.utiltiies.KeyManager.isKeyDown","com/text/attack/utiltiies/KeyManager.hx",45,0x6060268e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_LINE(46)
	int _g = this->keysDown->indexOf(keyCode,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	return (_g >= (int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(KeyManager_obj,isKeyDown,return )

int KeyManager_obj::getNumberKeyDown( ){
	HX_STACK_FRAME("com.text.attack.utiltiies.KeyManager","getNumberKeyDown",0xff34bb02,"com.text.attack.utiltiies.KeyManager.getNumberKeyDown","com/text/attack/utiltiies/KeyManager.hx",50,0x6060268e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	Array< int > keys = Array_obj< int >::__new().Add((int)48).Add((int)49).Add((int)50).Add((int)51).Add((int)52).Add((int)53).Add((int)54).Add((int)55).Add((int)56).Add((int)57);		HX_STACK_VAR(keys,"keys");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		while((true)){
			HX_STACK_LINE(55)
			if ((!(((_g < keys->length))))){
				HX_STACK_LINE(55)
				break;
			}
			HX_STACK_LINE(55)
			int key = keys->__get(_g);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(55)
			++(_g);
			HX_STACK_LINE(56)
			if ((this->isKeyDown(key))){
				HX_STACK_LINE(57)
				return key;
			}
		}
	}
	HX_STACK_LINE(60)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(KeyManager_obj,getNumberKeyDown,return )


KeyManager_obj::KeyManager_obj()
{
}

void KeyManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyManager);
	HX_MARK_MEMBER_NAME(keysDown,"keysDown");
	HX_MARK_END_CLASS();
}

void KeyManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keysDown,"keysDown");
}

Dynamic KeyManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keysDown") ) { return keysDown; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"isKeyDown") ) { return isKeyDown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNumberKeyDown") ) { return getNumberKeyDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"keysDown") ) { keysDown=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("keysDown"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(KeyManager_obj,keysDown),HX_CSTRING("keysDown")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("keysDown"),
	HX_CSTRING("update"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("isKeyDown"),
	HX_CSTRING("getNumberKeyDown"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyManager_obj::__mClass,"__mClass");
};

#endif

Class KeyManager_obj::__mClass;

void KeyManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.utiltiies.KeyManager"), hx::TCanCast< KeyManager_obj> ,sStaticFields,sMemberFields,
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

void KeyManager_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace utiltiies
