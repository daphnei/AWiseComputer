#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level7
#include <com/text/attack/levels/Level7.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace levels{

Void Level7_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.levels.Level7","new",0xbab40932,"com.text.attack.levels.Level7.new","com/text/attack/levels/Level7.hx",42,0x1fc11bfe)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	::String p1 = HX_CSTRING("He believed that \"the more man meditates upon good thoughts, the better will be his world and the world at large.\"");		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(44)
	::String p2 = HX_CSTRING("He contemplated symmetry and concluded that its goodness improved the world");		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(45)
	::String p3 = HX_CSTRING("I believe in no such thing.");		HX_STACK_VAR(p3,"p3");
	HX_STACK_LINE(47)
	Array< ::String > preamble = Array_obj< ::String >::__new().Add(p1).Add(p2);		HX_STACK_VAR(preamble,"preamble");
	HX_STACK_LINE(49)
	super::__construct(HX_CSTRING("............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................V............................V.V..........................V...V.......................................................V...V..........................V.V............................V...................................................................................................................................................................................P..............."),preamble,(int)6);
}
;
	return null();
}

//Level7_obj::~Level7_obj() { }

Dynamic Level7_obj::__CreateEmpty() { return  new Level7_obj; }
hx::ObjectPtr< Level7_obj > Level7_obj::__new()
{  hx::ObjectPtr< Level7_obj > result = new Level7_obj();
	result->__construct();
	return result;}

Dynamic Level7_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level7_obj > result = new Level7_obj();
	result->__construct();
	return result;}

::String Level7_obj::LEVEL_STRING;


Level7_obj::Level7_obj()
{
}

Dynamic Level7_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Level7_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level7_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Level7_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Level7_obj::LEVEL_STRING,"LEVEL_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level7_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Level7_obj::LEVEL_STRING,"LEVEL_STRING");
};

#endif

Class Level7_obj::__mClass;

void Level7_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.levels.Level7"), hx::TCanCast< Level7_obj> ,sStaticFields,sMemberFields,
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

void Level7_obj::__boot()
{
	LEVEL_STRING= HX_CSTRING("............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................V............................V.V..........................V...V.......................................................V...V..........................V.V............................V...................................................................................................................................................................................P...............");
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels
