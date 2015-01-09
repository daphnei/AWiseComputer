#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_world_Wall
#include <com/text/attack/world/Wall.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace world{

::com::text::attack::world::Wall Wall_obj::BOTTOM;

::com::text::attack::world::Wall Wall_obj::LEFT;

::com::text::attack::world::Wall Wall_obj::RIGHT;

HX_DEFINE_CREATE_ENUM(Wall_obj)

int Wall_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BOTTOM")) return 1;
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 2;
	return super::__FindIndex(inName);
}

int Wall_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BOTTOM")) return 0;
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Wall_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BOTTOM")) return BOTTOM;
	if (inName==HX_CSTRING("LEFT")) return LEFT;
	if (inName==HX_CSTRING("RIGHT")) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("BOTTOM"),
	HX_CSTRING("RIGHT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Wall_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(Wall_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Wall_obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Wall_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Wall_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(Wall_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Wall_obj::RIGHT,"RIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Wall_obj::__mClass;

Dynamic __Create_Wall_obj() { return new Wall_obj; }

void Wall_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.Wall"), hx::TCanCast< Wall_obj >,sStaticFields,sMemberFields,
	&__Create_Wall_obj, &__Create,
	&super::__SGetClass(), &CreateWall_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Wall_obj::__boot()
{
hx::Static(BOTTOM) = hx::CreateEnum< Wall_obj >(HX_CSTRING("BOTTOM"),1);
hx::Static(LEFT) = hx::CreateEnum< Wall_obj >(HX_CSTRING("LEFT"),0);
hx::Static(RIGHT) = hx::CreateEnum< Wall_obj >(HX_CSTRING("RIGHT"),2);
}


} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
