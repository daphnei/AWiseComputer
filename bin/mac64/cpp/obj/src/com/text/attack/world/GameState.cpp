#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_world_GameState
#include <com/text/attack/world/GameState.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace world{

::com::text::attack::world::GameState GameState_obj::DEAD;

::com::text::attack::world::GameState GameState_obj::ENDING;

::com::text::attack::world::GameState GameState_obj::PAUSED;

::com::text::attack::world::GameState GameState_obj::PLAYING;

::com::text::attack::world::GameState GameState_obj::PREAMBLE;

HX_DEFINE_CREATE_ENUM(GameState_obj)

int GameState_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DEAD")) return 4;
	if (inName==HX_CSTRING("ENDING")) return 3;
	if (inName==HX_CSTRING("PAUSED")) return 2;
	if (inName==HX_CSTRING("PLAYING")) return 1;
	if (inName==HX_CSTRING("PREAMBLE")) return 0;
	return super::__FindIndex(inName);
}

int GameState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DEAD")) return 0;
	if (inName==HX_CSTRING("ENDING")) return 0;
	if (inName==HX_CSTRING("PAUSED")) return 0;
	if (inName==HX_CSTRING("PLAYING")) return 0;
	if (inName==HX_CSTRING("PREAMBLE")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GameState_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DEAD")) return DEAD;
	if (inName==HX_CSTRING("ENDING")) return ENDING;
	if (inName==HX_CSTRING("PAUSED")) return PAUSED;
	if (inName==HX_CSTRING("PLAYING")) return PLAYING;
	if (inName==HX_CSTRING("PREAMBLE")) return PREAMBLE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("PREAMBLE"),
	HX_CSTRING("PLAYING"),
	HX_CSTRING("PAUSED"),
	HX_CSTRING("ENDING"),
	HX_CSTRING("DEAD"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameState_obj::DEAD,"DEAD");
	HX_MARK_MEMBER_NAME(GameState_obj::ENDING,"ENDING");
	HX_MARK_MEMBER_NAME(GameState_obj::PAUSED,"PAUSED");
	HX_MARK_MEMBER_NAME(GameState_obj::PLAYING,"PLAYING");
	HX_MARK_MEMBER_NAME(GameState_obj::PREAMBLE,"PREAMBLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameState_obj::DEAD,"DEAD");
	HX_VISIT_MEMBER_NAME(GameState_obj::ENDING,"ENDING");
	HX_VISIT_MEMBER_NAME(GameState_obj::PAUSED,"PAUSED");
	HX_VISIT_MEMBER_NAME(GameState_obj::PLAYING,"PLAYING");
	HX_VISIT_MEMBER_NAME(GameState_obj::PREAMBLE,"PREAMBLE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class GameState_obj::__mClass;

Dynamic __Create_GameState_obj() { return new GameState_obj; }

void GameState_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.GameState"), hx::TCanCast< GameState_obj >,sStaticFields,sMemberFields,
	&__Create_GameState_obj, &__Create,
	&super::__SGetClass(), &CreateGameState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GameState_obj::__boot()
{
hx::Static(DEAD) = hx::CreateEnum< GameState_obj >(HX_CSTRING("DEAD"),4);
hx::Static(ENDING) = hx::CreateEnum< GameState_obj >(HX_CSTRING("ENDING"),3);
hx::Static(PAUSED) = hx::CreateEnum< GameState_obj >(HX_CSTRING("PAUSED"),2);
hx::Static(PLAYING) = hx::CreateEnum< GameState_obj >(HX_CSTRING("PLAYING"),1);
hx::Static(PREAMBLE) = hx::CreateEnum< GameState_obj >(HX_CSTRING("PREAMBLE"),0);
}


} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
