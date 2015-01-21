#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_world_Cell
#include <com/text/attack/world/Cell.h>
#endif
#ifndef INCLUDED_com_text_attack_world_CellType
#include <com/text/attack/world/CellType.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Empty
#include <com/text/attack/world/Empty.h>
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

Void Empty_obj::__construct(int x,int y)
{
HX_STACK_FRAME("com.text.attack.world.Empty","new",0x14845211,"com.text.attack.world.Empty.new","com/text/attack/world/Empty.hx",14,0xaeb76ae1)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(14)
	super::__construct(::com::text::attack::world::CellType_obj::Empty,x,y);
}
;
	return null();
}

//Empty_obj::~Empty_obj() { }

Dynamic Empty_obj::__CreateEmpty() { return  new Empty_obj; }
hx::ObjectPtr< Empty_obj > Empty_obj::__new(int x,int y)
{  hx::ObjectPtr< Empty_obj > result = new Empty_obj();
	result->__construct(x,y);
	return result;}

Dynamic Empty_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Empty_obj > result = new Empty_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Empty_obj::getSymbol( ){
	HX_STACK_FRAME("com.text.attack.world.Empty","getSymbol",0xd49294ff,"com.text.attack.world.Empty.getSymbol","com/text/attack/world/Empty.hx",19,0xaeb76ae1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	return HX_CSTRING("\xe2""\x80""\xa2""").charCodeAt((int)0);
}



Empty_obj::Empty_obj()
{
}

Dynamic Empty_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getSymbol") ) { return getSymbol_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Empty_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Empty_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Empty_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Empty_obj::__mClass,"__mClass");
};

#endif

Class Empty_obj::__mClass;

void Empty_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.Empty"), hx::TCanCast< Empty_obj> ,sStaticFields,sMemberFields,
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

void Empty_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
