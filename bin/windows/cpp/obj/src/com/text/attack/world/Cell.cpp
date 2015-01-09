#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_world_Cell
#include <com/text/attack/world/Cell.h>
#endif
#ifndef INCLUDED_com_text_attack_world_CellType
#include <com/text/attack/world/CellType.h>
#endif
#ifndef INCLUDED_com_text_attack_world_World
#include <com/text/attack/world/World.h>
#endif
#ifndef INCLUDED_com_text_attack_world_WorldGrid
#include <com/text/attack/world/WorldGrid.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace world{

Void Cell_obj::__construct(::com::text::attack::world::CellType cellType,int x,int y)
{
HX_STACK_FRAME("com.text.attack.world.Cell","new",0x17da37c2,"com.text.attack.world.Cell.new","com/text/attack/world/Cell.hx",18,0xf64907cc)
HX_STACK_THIS(this)
HX_STACK_ARG(cellType,"cellType")
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(19)
	super::__construct(null());
	HX_STACK_LINE(20)
	this->cellType = cellType;
	HX_STACK_LINE(21)
	this->x = x;
	HX_STACK_LINE(22)
	this->y = y;
	HX_STACK_LINE(23)
	this->newX = x;
	HX_STACK_LINE(24)
	this->newY = y;
}
;
	return null();
}

//Cell_obj::~Cell_obj() { }

Dynamic Cell_obj::__CreateEmpty() { return  new Cell_obj; }
hx::ObjectPtr< Cell_obj > Cell_obj::__new(::com::text::attack::world::CellType cellType,int x,int y)
{  hx::ObjectPtr< Cell_obj > result = new Cell_obj();
	result->__construct(cellType,x,y);
	return result;}

Dynamic Cell_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cell_obj > result = new Cell_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Cell_obj::move( int xOffset,int yOffset){
{
		HX_STACK_FRAME("com.text.attack.world.Cell","move",0xc674f16f,"com.text.attack.world.Cell.move","com/text/attack/world/Cell.hx",36,0xf64907cc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xOffset,"xOffset")
		HX_STACK_ARG(yOffset,"yOffset")
		HX_STACK_LINE(38)
		this->newX = (this->x + xOffset);
		HX_STACK_LINE(39)
		this->newY = (this->y + yOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cell_obj,move,(void))

Void Cell_obj::applyMove( ){
{
		HX_STACK_FRAME("com.text.attack.world.Cell","applyMove",0xc0350081,"com.text.attack.world.Cell.applyMove","com/text/attack/world/Cell.hx",43,0xf64907cc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::com::text::attack::world::WorldGrid grid = ::com::text::attack::world::World_obj::instance->grid;		HX_STACK_VAR(grid,"grid");
		HX_STACK_LINE(46)
		::com::text::attack::world::Cell _g = grid->get(this->x,this->y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		if (((_g == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(47)
			grid->clear(this->x,this->y);
		}
		HX_STACK_LINE(50)
		this->x = this->newX;
		HX_STACK_LINE(51)
		this->y = this->newY;
		HX_STACK_LINE(53)
		grid->set(this->x,this->y,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cell_obj,applyMove,(void))

int Cell_obj::getSymbol( ){
	HX_STACK_FRAME("com.text.attack.world.Cell","getSymbol",0xf9395570,"com.text.attack.world.Cell.getSymbol","com/text/attack/world/Cell.hx",58,0xf64907cc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return this->cellType->symbol;
}


HX_DEFINE_DYNAMIC_FUNC0(Cell_obj,getSymbol,return )

Void Cell_obj::update( ){
{
		HX_STACK_FRAME("com.text.attack.world.Cell","update",0xbd0067e7,"com.text.attack.world.Cell.update","com/text/attack/world/Cell.hx",62,0xf64907cc)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Cell_obj,update,(void))

bool Cell_obj::newPosCollides( ::com::text::attack::world::Cell cell){
	HX_STACK_FRAME("com.text.attack.world.Cell","newPosCollides",0xa1c98047,"com.text.attack.world.Cell.newPosCollides","com/text/attack/world/Cell.hx",67,0xf64907cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cell,"cell")
	HX_STACK_LINE(67)
	return (bool((this->newX == cell->newX)) && bool((this->newY == cell->newY)));
}


HX_DEFINE_DYNAMIC_FUNC1(Cell_obj,newPosCollides,return )

::String Cell_obj::toString( ){
	HX_STACK_FRAME("com.text.attack.world.Cell","toString",0x0c4c660a,"com.text.attack.world.Cell.toString","com/text/attack/world/Cell.hx",71,0xf64907cc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	::String _g = ::String::fromCharCode(this->cellType->symbol);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(72)
	::String _g1 = (HX_CSTRING("[Cell = ") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(72)
	return (_g1 + HX_CSTRING("]"));
}



Cell_obj::Cell_obj()
{
}

void Cell_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cell);
	HX_MARK_MEMBER_NAME(cellType,"cellType");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(newY,"newY");
	HX_MARK_MEMBER_NAME(newX,"newX");
	::openfl::_v2::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Cell_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cellType,"cellType");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(newY,"newY");
	HX_VISIT_MEMBER_NAME(newX,"newX");
	::openfl::_v2::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Cell_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"newY") ) { return newY; }
		if (HX_FIELD_EQ(inName,"newX") ) { return newX; }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cellType") ) { return cellType; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"applyMove") ) { return applyMove_dyn(); }
		if (HX_FIELD_EQ(inName,"getSymbol") ) { return getSymbol_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"newPosCollides") ) { return newPosCollides_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Cell_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"newY") ) { newY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newX") ) { newX=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cellType") ) { cellType=inValue.Cast< ::com::text::attack::world::CellType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Cell_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cellType"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("newY"));
	outFields->push(HX_CSTRING("newX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::text::attack::world::CellType*/ ,(int)offsetof(Cell_obj,cellType),HX_CSTRING("cellType")},
	{hx::fsInt,(int)offsetof(Cell_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(Cell_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(Cell_obj,newY),HX_CSTRING("newY")},
	{hx::fsInt,(int)offsetof(Cell_obj,newX),HX_CSTRING("newX")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cellType"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("newY"),
	HX_CSTRING("newX"),
	HX_CSTRING("move"),
	HX_CSTRING("applyMove"),
	HX_CSTRING("getSymbol"),
	HX_CSTRING("update"),
	HX_CSTRING("newPosCollides"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cell_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cell_obj::__mClass,"__mClass");
};

#endif

Class Cell_obj::__mClass;

void Cell_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.Cell"), hx::TCanCast< Cell_obj> ,sStaticFields,sMemberFields,
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

void Cell_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
