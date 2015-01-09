#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level4
#include <com/text/attack/levels/Level4.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace levels{

Void Level4_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.levels.Level4","new",0x00804baf,"com.text.attack.levels.Level4.new","com/text/attack/levels/Level4.hx",42,0x1dc57821)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	::String p1 = HX_CSTRING("Is it true that if \"a man lives without conflicts, it is as if he never lives at all?\"");		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(45)
	Array< ::String > preamble = Array_obj< ::String >::__new().Add(p1);		HX_STACK_VAR(preamble,"preamble");
	HX_STACK_LINE(47)
	super::__construct(HX_CSTRING("..............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................V..........................................................................................V.................V............V...........................................................................................................................................................................................................P..............."),preamble,(int)4);
}
;
	return null();
}

//Level4_obj::~Level4_obj() { }

Dynamic Level4_obj::__CreateEmpty() { return  new Level4_obj; }
hx::ObjectPtr< Level4_obj > Level4_obj::__new()
{  hx::ObjectPtr< Level4_obj > result = new Level4_obj();
	result->__construct();
	return result;}

Dynamic Level4_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level4_obj > result = new Level4_obj();
	result->__construct();
	return result;}

::String Level4_obj::LEVEL_STRING;


Level4_obj::Level4_obj()
{
}

Dynamic Level4_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Level4_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level4_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Level4_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Level4_obj::LEVEL_STRING,"LEVEL_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level4_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Level4_obj::LEVEL_STRING,"LEVEL_STRING");
};

#endif

Class Level4_obj::__mClass;

void Level4_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.levels.Level4"), hx::TCanCast< Level4_obj> ,sStaticFields,sMemberFields,
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

void Level4_obj::__boot()
{
	LEVEL_STRING= HX_CSTRING("..............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................V..........................................................................................V.................V............V...........................................................................................................................................................................................................P...............");
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels
