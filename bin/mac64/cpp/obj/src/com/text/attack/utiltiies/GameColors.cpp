#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_utiltiies_GameColors
#include <com/text/attack/utiltiies/GameColors.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace utiltiies{

Void GameColors_obj::__construct()
{
	return null();
}

//GameColors_obj::~GameColors_obj() { }

Dynamic GameColors_obj::__CreateEmpty() { return  new GameColors_obj; }
hx::ObjectPtr< GameColors_obj > GameColors_obj::__new()
{  hx::ObjectPtr< GameColors_obj > result = new GameColors_obj();
	result->__construct();
	return result;}

Dynamic GameColors_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameColors_obj > result = new GameColors_obj();
	result->__construct();
	return result;}

int GameColors_obj::PINK;

int GameColors_obj::GREEN;

int GameColors_obj::BLUE;

int GameColors_obj::YELLOW;

int GameColors_obj::RED;

int GameColors_obj::WHITE;


GameColors_obj::GameColors_obj()
{
}

Dynamic GameColors_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GameColors_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GameColors_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PINK"),
	HX_CSTRING("GREEN"),
	HX_CSTRING("BLUE"),
	HX_CSTRING("YELLOW"),
	HX_CSTRING("RED"),
	HX_CSTRING("WHITE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameColors_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameColors_obj::PINK,"PINK");
	HX_MARK_MEMBER_NAME(GameColors_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(GameColors_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(GameColors_obj::YELLOW,"YELLOW");
	HX_MARK_MEMBER_NAME(GameColors_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(GameColors_obj::WHITE,"WHITE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameColors_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameColors_obj::PINK,"PINK");
	HX_VISIT_MEMBER_NAME(GameColors_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(GameColors_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(GameColors_obj::YELLOW,"YELLOW");
	HX_VISIT_MEMBER_NAME(GameColors_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(GameColors_obj::WHITE,"WHITE");
};

#endif

Class GameColors_obj::__mClass;

void GameColors_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.utiltiies.GameColors"), hx::TCanCast< GameColors_obj> ,sStaticFields,sMemberFields,
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

void GameColors_obj::__boot()
{
	PINK= (int)16750284;
	GREEN= (int)9895836;
	BLUE= (int)13434878;
	YELLOW= (int)15662960;
	RED= (int)16732004;
	WHITE= (int)16777215;
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace utiltiies
