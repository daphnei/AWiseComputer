#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_utiltiies_KeyManager
#include <com/text/attack/utiltiies/KeyManager.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Bullet
#include <com/text/attack/world/Bullet.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Cell
#include <com/text/attack/world/Cell.h>
#endif
#ifndef INCLUDED_com_text_attack_world_CellType
#include <com/text/attack/world/CellType.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Player
#include <com/text/attack/world/Player.h>
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
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace world{

Void Player_obj::__construct(int x,int y)
{
HX_STACK_FRAME("com.text.attack.world.Player","new",0xc3513481,"com.text.attack.world.Player.new","com/text/attack/world/Player.hx",18,0x41bcdb6d)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(19)
	super::__construct(::com::text::attack::world::CellType_obj::Player,x,y);
	HX_STACK_LINE(20)
	this->justShot = false;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int x,int y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(x,y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("com.text.attack.world.Player","update",0x2f4eac88,"com.text.attack.world.Player.update","com/text/attack/world/Player.hx",24,0x41bcdb6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::com::text::attack::world::Cell collision = null();		HX_STACK_VAR(collision,"collision");
		HX_STACK_LINE(26)
		if (((  ((::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)37))) ? bool((this->x > (int)0)) : bool(false) ))){
			HX_STACK_LINE(27)
			this->move((int)-1,(int)0);
			HX_STACK_LINE(28)
			this->justShot = false;
		}
		else{
			HX_STACK_LINE(30)
			if (((  ((::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)39))) ? bool((this->x < (int)29)) : bool(false) ))){
				HX_STACK_LINE(31)
				this->move((int)1,(int)0);
				HX_STACK_LINE(32)
				this->justShot = false;
			}
			else{
				HX_STACK_LINE(34)
				if ((::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)90))){
					HX_STACK_LINE(35)
					::com::text::attack::world::Bullet_obj::shootLeft();
					HX_STACK_LINE(36)
					this->justShot = false;
				}
				else{
					HX_STACK_LINE(38)
					if ((::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)88))){
						HX_STACK_LINE(39)
						::com::text::attack::world::Bullet_obj::shootUp();
						HX_STACK_LINE(40)
						this->justShot = true;
					}
					else{
						HX_STACK_LINE(42)
						if ((::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)67))){
							HX_STACK_LINE(43)
							::com::text::attack::world::Bullet_obj::shootRight();
							HX_STACK_LINE(44)
							this->justShot = false;
						}
						else{
							HX_STACK_LINE(46)
							if ((::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)38))){
								HX_STACK_LINE(48)
								this->justShot = false;
							}
						}
					}
				}
			}
		}
	}
return null();
}



Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"justShot") ) { return justShot; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"justShot") ) { justShot=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("justShot"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Player_obj,justShot),HX_CSTRING("justShot")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("justShot"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
