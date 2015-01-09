#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_utiltiies_Assert
#include <com/text/attack/utiltiies/Assert.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__v2_system_System
#include <openfl/_v2/system/System.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace utiltiies{

Void Assert_obj::__construct()
{
	return null();
}

//Assert_obj::~Assert_obj() { }

Dynamic Assert_obj::__CreateEmpty() { return  new Assert_obj; }
hx::ObjectPtr< Assert_obj > Assert_obj::__new()
{  hx::ObjectPtr< Assert_obj > result = new Assert_obj();
	result->__construct();
	return result;}

Dynamic Assert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assert_obj > result = new Assert_obj();
	result->__construct();
	return result;}

Void Assert_obj::_assert( bool cond,Dynamic pos){
{
		HX_STACK_FRAME("com.text.attack.utiltiies.Assert","assert",0xf251ad2e,"com.text.attack.utiltiies.Assert.assert","com/text/attack/utiltiies/Assert.hx",11,0x5d45de56)
		HX_STACK_ARG(cond,"cond")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(11)
		if ((!(cond))){
			HX_STACK_LINE(12)
			::haxe::Log_obj::trace((((HX_CSTRING("Assert in ") + pos->__Field(HX_CSTRING("className"),true)) + HX_CSTRING("::")) + pos->__Field(HX_CSTRING("methodName"),true)),pos);
			HX_STACK_LINE(13)
			::openfl::_v2::system::System_obj::exit((int)1);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,_assert,(void))


Assert_obj::Assert_obj()
{
}

Dynamic Assert_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assert") ) { return _assert_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Assert_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("assert"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assert_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assert_obj::__mClass,"__mClass");
};

#endif

Class Assert_obj::__mClass;

void Assert_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.utiltiies.Assert"), hx::TCanCast< Assert_obj> ,sStaticFields,sMemberFields,
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

void Assert_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace utiltiies
