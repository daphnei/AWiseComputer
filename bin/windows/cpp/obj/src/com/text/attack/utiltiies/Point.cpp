#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_utiltiies_Point
#include <com/text/attack/utiltiies/Point.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace utiltiies{

Void Point_obj::__construct(int x,int y)
{
HX_STACK_FRAME("com.text.attack.utiltiies.Point","new",0xcb252f02,"com.text.attack.utiltiies.Point.new","com/text/attack/utiltiies/Point.hx",13,0x3366fb90)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(14)
	this->x = x;
	HX_STACK_LINE(15)
	this->y = y;
}
;
	return null();
}

//Point_obj::~Point_obj() { }

Dynamic Point_obj::__CreateEmpty() { return  new Point_obj; }
hx::ObjectPtr< Point_obj > Point_obj::__new(int x,int y)
{  hx::ObjectPtr< Point_obj > result = new Point_obj();
	result->__construct(x,y);
	return result;}

Dynamic Point_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Point_obj > result = new Point_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool Point_obj::isInRange( int xMax,int yMax){
	HX_STACK_FRAME("com.text.attack.utiltiies.Point","isInRange",0xf49bfcf0,"com.text.attack.utiltiies.Point.isInRange","com/text/attack/utiltiies/Point.hx",20,0x3366fb90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xMax,"xMax")
	HX_STACK_ARG(yMax,"yMax")
	HX_STACK_LINE(20)
	return (bool((bool((bool((this->x >= (int)0)) && bool((this->x < xMax)))) && bool((this->y >= (int)0)))) && bool((this->y < yMax)));
}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,isInRange,return )


Point_obj::Point_obj()
{
}

Dynamic Point_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isInRange") ) { return isInRange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Point_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Point_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(Point_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("isInRange"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::__mClass,"__mClass");
};

#endif

Class Point_obj::__mClass;

void Point_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.utiltiies.Point"), hx::TCanCast< Point_obj> ,sStaticFields,sMemberFields,
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

void Point_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace utiltiies
