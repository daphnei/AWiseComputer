#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_world_CellType
#include <com/text/attack/world/CellType.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace world{

Void CellType_obj::__construct(::String symbol)
{
HX_STACK_FRAME("com.text.attack.world.CellType","new",0x38d9739c,"com.text.attack.world.CellType.new","com/text/attack/world/CellType.hx",24,0x3288cc32)
HX_STACK_THIS(this)
HX_STACK_ARG(symbol,"symbol")
{
	HX_STACK_LINE(25)
	Dynamic _g = symbol.charCodeAt((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	this->symbol = _g;
}
;
	return null();
}

//CellType_obj::~CellType_obj() { }

Dynamic CellType_obj::__CreateEmpty() { return  new CellType_obj; }
hx::ObjectPtr< CellType_obj > CellType_obj::__new(::String symbol)
{  hx::ObjectPtr< CellType_obj > result = new CellType_obj();
	result->__construct(symbol);
	return result;}

Dynamic CellType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CellType_obj > result = new CellType_obj();
	result->__construct(inArgs[0]);
	return result;}

::com::text::attack::world::CellType CellType_obj::Player;

::com::text::attack::world::CellType CellType_obj::Empty;

::com::text::attack::world::CellType CellType_obj::Block;

::com::text::attack::world::CellType CellType_obj::CometDown;

::com::text::attack::world::CellType CellType_obj::CometLeft;

::com::text::attack::world::CellType CellType_obj::CometRight;

::com::text::attack::world::CellType CellType_obj::CometUp;

::com::text::attack::world::CellType CellType_obj::Bouncer;

::com::text::attack::world::CellType CellType_obj::Bullet;


CellType_obj::CellType_obj()
{
}

Dynamic CellType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Empty") ) { return Empty; }
		if (HX_FIELD_EQ(inName,"Block") ) { return Block; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Player") ) { return Player; }
		if (HX_FIELD_EQ(inName,"Bullet") ) { return Bullet; }
		if (HX_FIELD_EQ(inName,"symbol") ) { return symbol; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CometUp") ) { return CometUp; }
		if (HX_FIELD_EQ(inName,"Bouncer") ) { return Bouncer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CometDown") ) { return CometDown; }
		if (HX_FIELD_EQ(inName,"CometLeft") ) { return CometLeft; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CometRight") ) { return CometRight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CellType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Empty") ) { Empty=inValue.Cast< ::com::text::attack::world::CellType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Block") ) { Block=inValue.Cast< ::com::text::attack::world::CellType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Player") ) { Player=inValue.Cast< ::com::text::attack::world::CellType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Bullet") ) { Bullet=inValue.Cast< ::com::text::attack::world::CellType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"symbol") ) { symbol=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CometUp") ) { CometUp=inValue.Cast< ::com::text::attack::world::CellType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Bouncer") ) { Bouncer=inValue.Cast< ::com::text::attack::world::CellType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"CometDown") ) { CometDown=inValue.Cast< ::com::text::attack::world::CellType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CometLeft") ) { CometLeft=inValue.Cast< ::com::text::attack::world::CellType >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"CometRight") ) { CometRight=inValue.Cast< ::com::text::attack::world::CellType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CellType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("symbol"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Player"),
	HX_CSTRING("Empty"),
	HX_CSTRING("Block"),
	HX_CSTRING("CometDown"),
	HX_CSTRING("CometLeft"),
	HX_CSTRING("CometRight"),
	HX_CSTRING("CometUp"),
	HX_CSTRING("Bouncer"),
	HX_CSTRING("Bullet"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CellType_obj,symbol),HX_CSTRING("symbol")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("symbol"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CellType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CellType_obj::Player,"Player");
	HX_MARK_MEMBER_NAME(CellType_obj::Empty,"Empty");
	HX_MARK_MEMBER_NAME(CellType_obj::Block,"Block");
	HX_MARK_MEMBER_NAME(CellType_obj::CometDown,"CometDown");
	HX_MARK_MEMBER_NAME(CellType_obj::CometLeft,"CometLeft");
	HX_MARK_MEMBER_NAME(CellType_obj::CometRight,"CometRight");
	HX_MARK_MEMBER_NAME(CellType_obj::CometUp,"CometUp");
	HX_MARK_MEMBER_NAME(CellType_obj::Bouncer,"Bouncer");
	HX_MARK_MEMBER_NAME(CellType_obj::Bullet,"Bullet");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CellType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CellType_obj::Player,"Player");
	HX_VISIT_MEMBER_NAME(CellType_obj::Empty,"Empty");
	HX_VISIT_MEMBER_NAME(CellType_obj::Block,"Block");
	HX_VISIT_MEMBER_NAME(CellType_obj::CometDown,"CometDown");
	HX_VISIT_MEMBER_NAME(CellType_obj::CometLeft,"CometLeft");
	HX_VISIT_MEMBER_NAME(CellType_obj::CometRight,"CometRight");
	HX_VISIT_MEMBER_NAME(CellType_obj::CometUp,"CometUp");
	HX_VISIT_MEMBER_NAME(CellType_obj::Bouncer,"Bouncer");
	HX_VISIT_MEMBER_NAME(CellType_obj::Bullet,"Bullet");
};

#endif

Class CellType_obj::__mClass;

void CellType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.CellType"), hx::TCanCast< CellType_obj> ,sStaticFields,sMemberFields,
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

void CellType_obj::__boot()
{
	Player= ::com::text::attack::world::CellType_obj::__new(HX_CSTRING("P"));
	Empty= ::com::text::attack::world::CellType_obj::__new(HX_CSTRING("."));
	Block= ::com::text::attack::world::CellType_obj::__new(HX_CSTRING("#"));
	CometDown= ::com::text::attack::world::CellType_obj::__new(HX_CSTRING("V"));
	CometLeft= ::com::text::attack::world::CellType_obj::__new(HX_CSTRING("<"));
	CometRight= ::com::text::attack::world::CellType_obj::__new(HX_CSTRING(">"));
	CometUp= ::com::text::attack::world::CellType_obj::__new(HX_CSTRING("\xe2""\x88""\xa7"""));
	Bouncer= ::com::text::attack::world::CellType_obj::__new(HX_CSTRING("-"));
	Bullet= ::com::text::attack::world::CellType_obj::__new(HX_CSTRING("|"));
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
