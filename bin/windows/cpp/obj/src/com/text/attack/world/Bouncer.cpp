#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_world_Bouncer
#include <com/text/attack/world/Bouncer.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Cell
#include <com/text/attack/world/Cell.h>
#endif
#ifndef INCLUDED_com_text_attack_world_CellType
#include <com/text/attack/world/CellType.h>
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

Void Bouncer_obj::__construct(int x,int y)
{
HX_STACK_FRAME("com.text.attack.world.Bouncer","new",0xd54d846e,"com.text.attack.world.Bouncer.new","com/text/attack/world/Bouncer.hx",14,0xcaa3cfa4)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(14)
	super::__construct(::com::text::attack::world::CellType_obj::Bouncer,x,y);
}
;
	return null();
}

//Bouncer_obj::~Bouncer_obj() { }

Dynamic Bouncer_obj::__CreateEmpty() { return  new Bouncer_obj; }
hx::ObjectPtr< Bouncer_obj > Bouncer_obj::__new(int x,int y)
{  hx::ObjectPtr< Bouncer_obj > result = new Bouncer_obj();
	result->__construct(x,y);
	return result;}

Dynamic Bouncer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bouncer_obj > result = new Bouncer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Bouncer_obj::getSymbol( ){
	HX_STACK_FRAME("com.text.attack.world.Bouncer","getSymbol",0x1e996b1c,"com.text.attack.world.Bouncer.getSymbol","com/text/attack/world/Bouncer.hx",19,0xcaa3cfa4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	return HX_CSTRING("\xe2""\x80""\xa2""").charCodeAt((int)0);
}



Bouncer_obj::Bouncer_obj()
{
}

Dynamic Bouncer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getSymbol") ) { return getSymbol_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bouncer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Bouncer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getSymbol"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bouncer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bouncer_obj::__mClass,"__mClass");
};

#endif

Class Bouncer_obj::__mClass;

void Bouncer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.Bouncer"), hx::TCanCast< Bouncer_obj> ,sStaticFields,sMemberFields,
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

void Bouncer_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
