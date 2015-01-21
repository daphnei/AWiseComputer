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
#ifndef INCLUDED_com_text_attack_world_Wall
#include <com/text/attack/world/Wall.h>
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
HX_STACK_FRAME("com.text.attack.world.Player","new",0xc3513481,"com.text.attack.world.Player.new","com/text/attack/world/Player.hx",25,0x41bcdb6d)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(26)
	super::__construct(::com::text::attack::world::CellType_obj::Player,x,y);
	HX_STACK_LINE(27)
	this->justShot = false;
	HX_STACK_LINE(28)
	this->wall = ::com::text::attack::world::Wall_obj::BOTTOM;
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
		HX_STACK_FRAME("com.text.attack.world.Player","update",0x2f4eac88,"com.text.attack.world.Player.update","com/text/attack/world/Player.hx",32,0x41bcdb6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::com::text::attack::world::Cell collision = null();		HX_STACK_VAR(collision,"collision");
		HX_STACK_LINE(35)
		bool zDown = ::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)90);		HX_STACK_VAR(zDown,"zDown");
		HX_STACK_LINE(36)
		bool xDown = ::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)88);		HX_STACK_VAR(xDown,"xDown");
		HX_STACK_LINE(37)
		bool cDown = ::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)67);		HX_STACK_VAR(cDown,"cDown");
		HX_STACK_LINE(39)
		if ((::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)37))){
			HX_STACK_LINE(40)
			this->moveClockwise();
			HX_STACK_LINE(41)
			this->justShot = false;
		}
		else{
			HX_STACK_LINE(43)
			if ((::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)39))){
				HX_STACK_LINE(44)
				this->moveCounterClockwise();
				HX_STACK_LINE(45)
				this->justShot = false;
			}
			else{
				HX_STACK_LINE(47)
				if (((bool(zDown) && bool(xDown)))){
					HX_STACK_LINE(48)
					::com::text::attack::world::Bullet_obj::shootUpLeft();
					HX_STACK_LINE(49)
					this->justShot = false;
				}
				else{
					HX_STACK_LINE(51)
					if (((bool(xDown) && bool(cDown)))){
						HX_STACK_LINE(52)
						::com::text::attack::world::Bullet_obj::shootUpRight();
						HX_STACK_LINE(53)
						this->justShot = false;
					}
					else{
						HX_STACK_LINE(55)
						if ((zDown)){
							HX_STACK_LINE(56)
							::com::text::attack::world::Bullet_obj::shootLeft();
							HX_STACK_LINE(57)
							this->justShot = true;
						}
						else{
							HX_STACK_LINE(59)
							if ((xDown)){
								HX_STACK_LINE(60)
								::com::text::attack::world::Bullet_obj::shootUp();
								HX_STACK_LINE(61)
								this->justShot = true;
							}
							else{
								HX_STACK_LINE(63)
								if ((cDown)){
									HX_STACK_LINE(64)
									::com::text::attack::world::Bullet_obj::shootRight();
									HX_STACK_LINE(65)
									this->justShot = false;
								}
								else{
									HX_STACK_LINE(67)
									if ((::com::text::attack::world::World_obj::instance->keyManager->isKeyDown((int)38))){
										HX_STACK_LINE(69)
										this->justShot = false;
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


Void Player_obj::moveClockwise( ){
{
		HX_STACK_FRAME("com.text.attack.world.Player","moveClockwise",0x171d4802,"com.text.attack.world.Player.moveClockwise","com/text/attack/world/Player.hx",75,0x41bcdb6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		if (((this->x == (int)0))){
			HX_STACK_LINE(76)
			if ((::com::text::attack::world::World_obj::instance->okToWallWalk())){
				HX_STACK_LINE(77)
				this->move((int)0,(int)-1);
				HX_STACK_LINE(78)
				this->wall = ::com::text::attack::world::Wall_obj::LEFT;
			}
		}
		else{
			HX_STACK_LINE(82)
			if (((this->x == (int)29))){
				HX_STACK_LINE(83)
				if (((this->y == (int)29))){
					HX_STACK_LINE(84)
					this->move((int)-1,(int)0);
					HX_STACK_LINE(85)
					this->wall = ::com::text::attack::world::Wall_obj::BOTTOM;
				}
				else{
					HX_STACK_LINE(87)
					this->move((int)0,(int)1);
				}
			}
			else{
				HX_STACK_LINE(90)
				this->move((int)-1,(int)0);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,moveClockwise,(void))

Void Player_obj::moveCounterClockwise( ){
{
		HX_STACK_FRAME("com.text.attack.world.Player","moveCounterClockwise",0x35178746,"com.text.attack.world.Player.moveCounterClockwise","com/text/attack/world/Player.hx",96,0x41bcdb6d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		if (((this->x == (int)29))){
			HX_STACK_LINE(97)
			if ((::com::text::attack::world::World_obj::instance->okToWallWalk())){
				HX_STACK_LINE(98)
				this->move((int)0,(int)-1);
				HX_STACK_LINE(99)
				this->wall = ::com::text::attack::world::Wall_obj::RIGHT;
			}
		}
		else{
			HX_STACK_LINE(103)
			if (((this->x == (int)0))){
				HX_STACK_LINE(104)
				if (((this->y == (int)29))){
					HX_STACK_LINE(105)
					this->move((int)1,(int)0);
					HX_STACK_LINE(106)
					this->wall = ::com::text::attack::world::Wall_obj::BOTTOM;
				}
				else{
					HX_STACK_LINE(108)
					this->move((int)0,(int)1);
				}
			}
			else{
				HX_STACK_LINE(111)
				this->move((int)1,(int)0);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,moveCounterClockwise,(void))

int Player_obj::getSymbol( ){
	HX_STACK_FRAME("com.text.attack.world.Player","getSymbol",0xc898eb6f,"com.text.attack.world.Player.getSymbol","com/text/attack/world/Player.hx",117,0x41bcdb6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	return HX_CSTRING("O").charCodeAt((int)0);
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(justShot,"justShot");
	HX_MARK_MEMBER_NAME(wall,"wall");
	::com::text::attack::world::Cell_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(justShot,"justShot");
	HX_VISIT_MEMBER_NAME(wall,"wall");
	::com::text::attack::world::Cell_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wall") ) { return wall; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"justShot") ) { return justShot; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getSymbol") ) { return getSymbol_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"moveClockwise") ) { return moveClockwise_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"moveCounterClockwise") ) { return moveCounterClockwise_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wall") ) { wall=inValue.Cast< ::com::text::attack::world::Wall >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"justShot") ) { justShot=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("justShot"));
	outFields->push(HX_CSTRING("wall"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Player_obj,justShot),HX_CSTRING("justShot")},
	{hx::fsObject /*::com::text::attack::world::Wall*/ ,(int)offsetof(Player_obj,wall),HX_CSTRING("wall")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("justShot"),
	HX_CSTRING("wall"),
	HX_CSTRING("update"),
	HX_CSTRING("moveClockwise"),
	HX_CSTRING("moveCounterClockwise"),
	HX_CSTRING("getSymbol"),
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
