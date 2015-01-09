#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_world_Direction
#include <com/text/attack/world/Direction.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace world{

::com::text::attack::world::Direction Direction_obj::DOWN;

::com::text::attack::world::Direction Direction_obj::LEFT;

::com::text::attack::world::Direction Direction_obj::RIGHT;

::com::text::attack::world::Direction Direction_obj::UP;

HX_DEFINE_CREATE_ENUM(Direction_obj)

int Direction_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DOWN")) return 3;
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 1;
	if (inName==HX_CSTRING("UP")) return 2;
	return super::__FindIndex(inName);
}

int Direction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DOWN")) return 0;
	if (inName==HX_CSTRING("LEFT")) return 0;
	if (inName==HX_CSTRING("RIGHT")) return 0;
	if (inName==HX_CSTRING("UP")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Direction_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DOWN")) return DOWN;
	if (inName==HX_CSTRING("LEFT")) return LEFT;
	if (inName==HX_CSTRING("RIGHT")) return RIGHT;
	if (inName==HX_CSTRING("UP")) return UP;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Direction_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Direction_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Direction_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Direction_obj::UP,"UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Direction_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Direction_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Direction_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Direction_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Direction_obj::UP,"UP");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Direction_obj::__mClass;

Dynamic __Create_Direction_obj() { return new Direction_obj; }

void Direction_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.Direction"), hx::TCanCast< Direction_obj >,sStaticFields,sMemberFields,
	&__Create_Direction_obj, &__Create,
	&super::__SGetClass(), &CreateDirection_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Direction_obj::__boot()
{
hx::Static(DOWN) = hx::CreateEnum< Direction_obj >(HX_CSTRING("DOWN"),3);
hx::Static(LEFT) = hx::CreateEnum< Direction_obj >(HX_CSTRING("LEFT"),0);
hx::Static(RIGHT) = hx::CreateEnum< Direction_obj >(HX_CSTRING("RIGHT"),1);
hx::Static(UP) = hx::CreateEnum< Direction_obj >(HX_CSTRING("UP"),2);
}


} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
