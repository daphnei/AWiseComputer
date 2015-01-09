#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level8
#include <com/text/attack/levels/Level8.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace levels{

Void Level8_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.levels.Level8","new",0x4e1a9db3,"com.text.attack.levels.Level8.new","com/text/attack/levels/Level8.hx",42,0x206a529d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	::String p1 = HX_CSTRING("Something important.");		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(45)
	Array< ::String > preamble = Array_obj< ::String >::__new().Add(p1);		HX_STACK_VAR(preamble,"preamble");
	HX_STACK_LINE(47)
	super::__construct(HX_CSTRING("..................................................................................................................................................................................................................................................................................................................................................................................................................................................VV...........................V..V..................................................................................V..........V...................V........V.....................V......V.......................V....V............................................................................................................................................................................................................................................P..............."),preamble,(int)5);
}
;
	return null();
}

//Level8_obj::~Level8_obj() { }

Dynamic Level8_obj::__CreateEmpty() { return  new Level8_obj; }
hx::ObjectPtr< Level8_obj > Level8_obj::__new()
{  hx::ObjectPtr< Level8_obj > result = new Level8_obj();
	result->__construct();
	return result;}

Dynamic Level8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level8_obj > result = new Level8_obj();
	result->__construct();
	return result;}

::String Level8_obj::LEVEL_STRING;


Level8_obj::Level8_obj()
{
}

Dynamic Level8_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Level8_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level8_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Level8_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Level8_obj::LEVEL_STRING,"LEVEL_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level8_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Level8_obj::LEVEL_STRING,"LEVEL_STRING");
};

#endif

Class Level8_obj::__mClass;

void Level8_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.levels.Level8"), hx::TCanCast< Level8_obj> ,sStaticFields,sMemberFields,
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

void Level8_obj::__boot()
{
	LEVEL_STRING= HX_CSTRING("..................................................................................................................................................................................................................................................................................................................................................................................................................................................VV...........................V..V..................................................................................V..........V...................V........V.....................V......V.......................V....V............................................................................................................................................................................................................................................P...............");
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels
