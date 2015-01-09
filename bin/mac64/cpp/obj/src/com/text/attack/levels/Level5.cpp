#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level5
#include <com/text/attack/levels/Level5.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace levels{

Void Level5_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.levels.Level5","new",0x93e6e030,"com.text.attack.levels.Level5.new","com/text/attack/levels/Level5.hx",42,0x1e6eaec0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	::String p1 = HX_CSTRING("He declared that \"only the wisest and stupidest of men never change.\"");		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(44)
	::String p2 = HX_CSTRING("I am fearful of change.");		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(45)
	::String p3 = HX_CSTRING("I move in small increments.");		HX_STACK_VAR(p3,"p3");
	HX_STACK_LINE(46)
	::String p4 = HX_CSTRING("\n> And by pressing UP I stay right where I am.");		HX_STACK_VAR(p4,"p4");
	HX_STACK_LINE(48)
	Array< ::String > preamble = Array_obj< ::String >::__new().Add(p1).Add(p2).Add(p3).Add(p4);		HX_STACK_VAR(preamble,"preamble");
	HX_STACK_LINE(50)
	super::__construct(HX_CSTRING("...........................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................V..............................V................................V............................V............................P.............."),preamble,(int)2);
}
;
	return null();
}

//Level5_obj::~Level5_obj() { }

Dynamic Level5_obj::__CreateEmpty() { return  new Level5_obj; }
hx::ObjectPtr< Level5_obj > Level5_obj::__new()
{  hx::ObjectPtr< Level5_obj > result = new Level5_obj();
	result->__construct();
	return result;}

Dynamic Level5_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level5_obj > result = new Level5_obj();
	result->__construct();
	return result;}

::String Level5_obj::LEVEL_STRING;


Level5_obj::Level5_obj()
{
}

Dynamic Level5_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Level5_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level5_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Level5_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Level5_obj::LEVEL_STRING,"LEVEL_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level5_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Level5_obj::LEVEL_STRING,"LEVEL_STRING");
};

#endif

Class Level5_obj::__mClass;

void Level5_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.levels.Level5"), hx::TCanCast< Level5_obj> ,sStaticFields,sMemberFields,
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

void Level5_obj::__boot()
{
	LEVEL_STRING= HX_CSTRING("...........................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................V..............................V................................V............................V............................P..............");
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels
