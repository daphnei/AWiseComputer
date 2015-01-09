#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level1
#include <com/text/attack/levels/Level1.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace levels{

Void Level1_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.levels.Level1","new",0x464c8e2c,"com.text.attack.levels.Level1.new","com/text/attack/levels/Level1.hx",42,0x1bc9d444)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	::String p1 = HX_CSTRING("He told me \"the firm, the enduring, the simple, and the modest are near to virtue.\"");		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(44)
	::String p2 = HX_CSTRING("I believed him.");		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(45)
	::String p3 = HX_CSTRING("\n> I begin with simple actions.");		HX_STACK_VAR(p3,"p3");
	HX_STACK_LINE(46)
	::String p4 = HX_CSTRING("Arrow keys to move left and right.");		HX_STACK_VAR(p4,"p4");
	HX_STACK_LINE(47)
	::String p5 = HX_CSTRING("The letter X to shoot.");		HX_STACK_VAR(p5,"p5");
	HX_STACK_LINE(48)
	::String p6 = HX_CSTRING("What is more enduring than that?");		HX_STACK_VAR(p6,"p6");
	HX_STACK_LINE(49)
	Array< ::String > preamble = Array_obj< ::String >::__new().Add(p1).Add(p2).Add(p3).Add(p4).Add(p5).Add(p6);		HX_STACK_VAR(preamble,"preamble");
	HX_STACK_LINE(51)
	super::__construct(HX_CSTRING("..................................................................................................................................................................................................................................................................................................................................................V....V...............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................P............................"),preamble,(int)3);
}
;
	return null();
}

//Level1_obj::~Level1_obj() { }

Dynamic Level1_obj::__CreateEmpty() { return  new Level1_obj; }
hx::ObjectPtr< Level1_obj > Level1_obj::__new()
{  hx::ObjectPtr< Level1_obj > result = new Level1_obj();
	result->__construct();
	return result;}

Dynamic Level1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level1_obj > result = new Level1_obj();
	result->__construct();
	return result;}

::String Level1_obj::LEVEL_STRING;


Level1_obj::Level1_obj()
{
}

Dynamic Level1_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Level1_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level1_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Level1_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Level1_obj::LEVEL_STRING,"LEVEL_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level1_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Level1_obj::LEVEL_STRING,"LEVEL_STRING");
};

#endif

Class Level1_obj::__mClass;

void Level1_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.levels.Level1"), hx::TCanCast< Level1_obj> ,sStaticFields,sMemberFields,
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

void Level1_obj::__boot()
{
	LEVEL_STRING= HX_CSTRING("..................................................................................................................................................................................................................................................................................................................................................V....V...............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................P............................");
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels
