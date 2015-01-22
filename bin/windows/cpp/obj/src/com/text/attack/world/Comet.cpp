#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_utiltiies_Assert
#include <com/text/attack/utiltiies/Assert.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Cell
#include <com/text/attack/world/Cell.h>
#endif
#ifndef INCLUDED_com_text_attack_world_CellType
#include <com/text/attack/world/CellType.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Comet
#include <com/text/attack/world/Comet.h>
#endif
#ifndef INCLUDED_com_text_attack_world_GameState
#include <com/text/attack/world/GameState.h>
#endif
#ifndef INCLUDED_com_text_attack_world_World
#include <com/text/attack/world/World.h>
#endif
#ifndef INCLUDED_com_text_attack_world_WorldGrid
#include <com/text/attack/world/WorldGrid.h>
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

Void Comet_obj::__construct(int x,int y,::com::text::attack::world::CellType cellType)
{
HX_STACK_FRAME("com.text.attack.world.Comet","new",0x83eaaff4,"com.text.attack.world.Comet.new","com/text/attack/world/Comet.hx",15,0xb61a9a5e)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(cellType,"cellType")
{
	HX_STACK_LINE(16)
	super::__construct(cellType,x,y);
	HX_STACK_LINE(18)
	bool _g = ::com::text::attack::world::Comet_obj::isCometType(cellType);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	::com::text::attack::utiltiies::Assert_obj::_assert(_g,hx::SourceInfo(HX_CSTRING("Comet.hx"),18,HX_CSTRING("com.text.attack.world.Comet"),HX_CSTRING("new")));
}
;
	return null();
}

//Comet_obj::~Comet_obj() { }

Dynamic Comet_obj::__CreateEmpty() { return  new Comet_obj; }
hx::ObjectPtr< Comet_obj > Comet_obj::__new(int x,int y,::com::text::attack::world::CellType cellType)
{  hx::ObjectPtr< Comet_obj > result = new Comet_obj();
	result->__construct(x,y,cellType);
	return result;}

Dynamic Comet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Comet_obj > result = new Comet_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Comet_obj::update( ){
{
		HX_STACK_FRAME("com.text.attack.world.Comet","update",0xad979af5,"com.text.attack.world.Comet.update","com/text/attack/world/Comet.hx",22,0xb61a9a5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		::com::text::attack::world::Cell collision = null();		HX_STACK_VAR(collision,"collision");
		HX_STACK_LINE(25)
		if (((this->cellType == ::com::text::attack::world::CellType_obj::CometLeft))){
			HX_STACK_LINE(26)
			if (((this->x > (int)0))){
				HX_STACK_LINE(27)
				this->move((int)-1,(int)0);
			}
			else{
				HX_STACK_LINE(29)
				::com::text::attack::world::World_obj::instance->gameState = ::com::text::attack::world::GameState_obj::ENDING;
			}
		}
		else{
			HX_STACK_LINE(32)
			if (((this->cellType == ::com::text::attack::world::CellType_obj::CometDown))){
				HX_STACK_LINE(33)
				if (((this->y < (int)29))){
					HX_STACK_LINE(34)
					this->move((int)0,(int)1);
				}
				else{
					HX_STACK_LINE(36)
					::com::text::attack::world::World_obj::instance->gameState = ::com::text::attack::world::GameState_obj::ENDING;
				}
			}
			else{
				HX_STACK_LINE(39)
				if (((this->cellType == ::com::text::attack::world::CellType_obj::CometUp))){
					HX_STACK_LINE(40)
					if (((this->x > (int)0))){
						HX_STACK_LINE(41)
						this->move((int)-1,(int)0);
					}
					else{
						HX_STACK_LINE(43)
						::com::text::attack::world::World_obj::instance->gameState = ::com::text::attack::world::GameState_obj::ENDING;
					}
				}
				else{
					HX_STACK_LINE(46)
					if (((this->cellType == ::com::text::attack::world::CellType_obj::CometRight))){
						HX_STACK_LINE(47)
						if (((this->x < (int)29))){
							HX_STACK_LINE(48)
							this->move((int)1,(int)0);
						}
						else{
							HX_STACK_LINE(50)
							::com::text::attack::world::World_obj::instance->gameState = ::com::text::attack::world::GameState_obj::ENDING;
						}
					}
				}
			}
		}
	}
return null();
}


Void Comet_obj::destroy( ){
{
		HX_STACK_FRAME("com.text.attack.world.Comet","destroy",0xbdc6668e,"com.text.attack.world.Comet.destroy","com/text/attack/world/Comet.hx",56,0xb61a9a5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		::com::text::attack::world::World_obj::instance->comets->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(58)
		::com::text::attack::world::World_obj::instance->grid->clear(this->x,this->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Comet_obj,destroy,(void))

bool Comet_obj::isCometType( ::com::text::attack::world::CellType cellType){
	HX_STACK_FRAME("com.text.attack.world.Comet","isCometType",0x9f66cc14,"com.text.attack.world.Comet.isCometType","com/text/attack/world/Comet.hx",63,0xb61a9a5e)
	HX_STACK_ARG(cellType,"cellType")
	HX_STACK_LINE(63)
	return (bool((bool((bool((cellType == ::com::text::attack::world::CellType_obj::CometDown)) || bool((cellType == ::com::text::attack::world::CellType_obj::CometLeft)))) || bool((cellType == ::com::text::attack::world::CellType_obj::CometRight)))) || bool((cellType == ::com::text::attack::world::CellType_obj::CometDown)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Comet_obj,isCometType,return )


Comet_obj::Comet_obj()
{
}

Dynamic Comet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isCometType") ) { return isCometType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Comet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Comet_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isCometType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Comet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Comet_obj::__mClass,"__mClass");
};

#endif

Class Comet_obj::__mClass;

void Comet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.Comet"), hx::TCanCast< Comet_obj> ,sStaticFields,sMemberFields,
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

void Comet_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
