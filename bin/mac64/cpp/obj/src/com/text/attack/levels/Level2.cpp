#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level2
#include <com/text/attack/levels/Level2.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace levels{

Void Level2_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.levels.Level2","new",0xd9b322ad,"com.text.attack.levels.Level2.new","com/text/attack/levels/Level2.hx",42,0x1c730ae3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	::String p1 = HX_CSTRING("He declared, \"I hear and I forget. I see and I remember. I do and I understand.\"");		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(44)
	::String p2 = HX_CSTRING("The enemy is numerous.");		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(45)
	::String p3 = HX_CSTRING("If he reaches the edge of our world, I will die.");		HX_STACK_VAR(p3,"p3");
	HX_STACK_LINE(46)
	Array< ::String > preamble = Array_obj< ::String >::__new().Add(p1).Add(p2).Add(p3);		HX_STACK_VAR(preamble,"preamble");
	HX_STACK_LINE(48)
	super::__construct(HX_CSTRING(".........V.........................................................................................................................................................V........................................................................................................................................................................................V..........................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................P............................"),preamble,(int)3);
}
;
	return null();
}

//Level2_obj::~Level2_obj() { }

Dynamic Level2_obj::__CreateEmpty() { return  new Level2_obj; }
hx::ObjectPtr< Level2_obj > Level2_obj::__new()
{  hx::ObjectPtr< Level2_obj > result = new Level2_obj();
	result->__construct();
	return result;}

Dynamic Level2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level2_obj > result = new Level2_obj();
	result->__construct();
	return result;}

::String Level2_obj::LEVEL_STRING;


Level2_obj::Level2_obj()
{
}

Dynamic Level2_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Level2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level2_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEVEL_STRING"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level2_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Level2_obj::LEVEL_STRING,"LEVEL_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level2_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Level2_obj::LEVEL_STRING,"LEVEL_STRING");
};

#endif

Class Level2_obj::__mClass;

void Level2_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.levels.Level2"), hx::TCanCast< Level2_obj> ,sStaticFields,sMemberFields,
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

void Level2_obj::__boot()
{
	LEVEL_STRING= HX_CSTRING(".........V.........................................................................................................................................................V........................................................................................................................................................................................V..........................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................P............................");
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels
