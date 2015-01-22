#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level9
#include <com/text/attack/levels/Level9.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace levels{

Void Level9_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.levels.Level9","new",0xe1813234,"com.text.attack.levels.Level9.new","com/text/attack/levels/Level9.hx",42,0x2113893c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(48)
	::String p1 = HX_CSTRING("He said, \"Learning without thought is labor lost; thought without learning is perilous.\"");		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(49)
	::String p2 = HX_CSTRING("If I am to triumph over him...");		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(50)
	::String p3 = HX_CSTRING("I must continue to study his lessons.");		HX_STACK_VAR(p3,"p3");
	HX_STACK_LINE(51)
	::String p4 = HX_CSTRING("\n> And I must learn to shoot diagonally by pressing two buttons at once.");		HX_STACK_VAR(p4,"p4");
	HX_STACK_LINE(53)
	Array< ::String > preamble = Array_obj< ::String >::__new().Add(p1).Add(p2).Add(p3).Add(p4);		HX_STACK_VAR(preamble,"preamble");
	HX_STACK_LINE(55)
	super::__construct(HX_CSTRING("............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................VV.V.VV................................................................................................................................................................................P..............."),preamble,(int)100);
}
;
	return null();
}

//Level9_obj::~Level9_obj() { }

Dynamic Level9_obj::__CreateEmpty() { return  new Level9_obj; }
hx::ObjectPtr< Level9_obj > Level9_obj::__new()
{  hx::ObjectPtr< Level9_obj > result = new Level9_obj();
	result->__construct();
	return result;}

Dynamic Level9_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level9_obj > result = new Level9_obj();
	result->__construct();
	return result;}

::String Level9_obj::LEVEL_STRING;


Level9_obj::Level9_obj()
{
}

Dynamic Level9_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Level9_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level9_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Level9_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Level9_obj::LEVEL_STRING,"LEVEL_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level9_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Level9_obj::LEVEL_STRING,"LEVEL_STRING");
};

#endif

Class Level9_obj::__mClass;

void Level9_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.levels.Level9"), hx::TCanCast< Level9_obj> ,sStaticFields,sMemberFields,
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

void Level9_obj::__boot()
{
	LEVEL_STRING= HX_CSTRING("............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................VV.V.VV................................................................................................................................................................................P...............");
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels
