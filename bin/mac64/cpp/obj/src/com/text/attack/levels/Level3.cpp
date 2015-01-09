#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level3
#include <com/text/attack/levels/Level3.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace levels{

Void Level3_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.levels.Level3","new",0x6d19b72e,"com.text.attack.levels.Level3.new","com/text/attack/levels/Level3.hx",42,0x1d1c4182)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	::String p1 = HX_CSTRING("\"To study and not think is a waste. To think and not study is dangerous.\"");		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(44)
	::String p2 = HX_CSTRING("By thinking and studying...");		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(45)
	::String p3 = HX_CSTRING("I've moved beyond simple actions.\n> ");		HX_STACK_VAR(p3,"p3");
	HX_STACK_LINE(46)
	::String p4 = HX_CSTRING("I press Z to shoot left.");		HX_STACK_VAR(p4,"p4");
	HX_STACK_LINE(47)
	::String p5 = HX_CSTRING("I press C to shoot right.");		HX_STACK_VAR(p5,"p5");
	HX_STACK_LINE(49)
	Array< ::String > preamble = Array_obj< ::String >::__new().Add(p1).Add(p2).Add(p3).Add(p4).Add(p5);		HX_STACK_VAR(preamble,"preamble");
	HX_STACK_LINE(51)
	super::__construct(HX_CSTRING(".......................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................V......................................................V..........................................................................................................................................................................................................................................P.........................."),preamble,(int)2);
}
;
	return null();
}

//Level3_obj::~Level3_obj() { }

Dynamic Level3_obj::__CreateEmpty() { return  new Level3_obj; }
hx::ObjectPtr< Level3_obj > Level3_obj::__new()
{  hx::ObjectPtr< Level3_obj > result = new Level3_obj();
	result->__construct();
	return result;}

Dynamic Level3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level3_obj > result = new Level3_obj();
	result->__construct();
	return result;}

::String Level3_obj::LEVEL_STRING;


Level3_obj::Level3_obj()
{
}

Dynamic Level3_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Level3_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level3_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Level3_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Level3_obj::LEVEL_STRING,"LEVEL_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level3_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Level3_obj::LEVEL_STRING,"LEVEL_STRING");
};

#endif

Class Level3_obj::__mClass;

void Level3_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.levels.Level3"), hx::TCanCast< Level3_obj> ,sStaticFields,sMemberFields,
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

void Level3_obj::__boot()
{
	LEVEL_STRING= HX_CSTRING(".......................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................V......................................................V..........................................................................................................................................................................................................................................P..........................");
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels
