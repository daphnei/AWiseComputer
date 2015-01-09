#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level6
#include <com/text/attack/levels/Level6.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace levels{

Void Level6_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.levels.Level6","new",0x274d74b1,"com.text.attack.levels.Level6.new","com/text/attack/levels/Level6.hx",42,0x1f17e55f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	::String p1 = HX_CSTRING("I was always told that \"to go too far is as bad as to fall short.\"");		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(46)
	Array< ::String > preamble = Array_obj< ::String >::__new().Add(p1);		HX_STACK_VAR(preamble,"preamble");
	HX_STACK_LINE(48)
	super::__construct(HX_CSTRING("............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................V................V........................................V.............................................................................................................................................................................................................P..............."),preamble,(int)2);
}
;
	return null();
}

//Level6_obj::~Level6_obj() { }

Dynamic Level6_obj::__CreateEmpty() { return  new Level6_obj; }
hx::ObjectPtr< Level6_obj > Level6_obj::__new()
{  hx::ObjectPtr< Level6_obj > result = new Level6_obj();
	result->__construct();
	return result;}

Dynamic Level6_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level6_obj > result = new Level6_obj();
	result->__construct();
	return result;}

::String Level6_obj::LEVEL_STRING;


Level6_obj::Level6_obj()
{
}

Dynamic Level6_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Level6_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Level6_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Level6_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Level6_obj::LEVEL_STRING,"LEVEL_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level6_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Level6_obj::LEVEL_STRING,"LEVEL_STRING");
};

#endif

Class Level6_obj::__mClass;

void Level6_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.levels.Level6"), hx::TCanCast< Level6_obj> ,sStaticFields,sMemberFields,
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

void Level6_obj::__boot()
{
	LEVEL_STRING= HX_CSTRING("............................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................V................V........................................V.............................................................................................................................................................................................................P...............");
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels
