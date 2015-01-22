#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_utiltiies_Point
#include <com/text/attack/utiltiies/Point.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Bullet
#include <com/text/attack/world/Bullet.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Cell
#include <com/text/attack/world/Cell.h>
#endif
#ifndef INCLUDED_com_text_attack_world_CellType
#include <com/text/attack/world/CellType.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Comet
#include <com/text/attack/world/Comet.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Player
#include <com/text/attack/world/Player.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Wall
#include <com/text/attack/world/Wall.h>
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

Void Bullet_obj::__construct(int x,int y,int dirX,int dirY)
{
HX_STACK_FRAME("com.text.attack.world.Bullet","new",0x291c5fe2,"com.text.attack.world.Bullet.new","com/text/attack/world/Bullet.hx",18,0x5369f72c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(dirX,"dirX")
HX_STACK_ARG(dirY,"dirY")
{
	HX_STACK_LINE(19)
	super::__construct(::com::text::attack::world::CellType_obj::Bullet,x,y);
	HX_STACK_LINE(20)
	this->justAdded = false;
	HX_STACK_LINE(21)
	this->dirX = dirX;
	HX_STACK_LINE(22)
	this->dirY = dirY;
}
;
	return null();
}

//Bullet_obj::~Bullet_obj() { }

Dynamic Bullet_obj::__CreateEmpty() { return  new Bullet_obj; }
hx::ObjectPtr< Bullet_obj > Bullet_obj::__new(int x,int y,int dirX,int dirY)
{  hx::ObjectPtr< Bullet_obj > result = new Bullet_obj();
	result->__construct(x,y,dirX,dirY);
	return result;}

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bullet_obj > result = new Bullet_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Bullet_obj::addCellsInBulletSight( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","addCellsInBulletSight",0xacc4c208,"com.text.attack.world.Bullet.addCellsInBulletSight","com/text/attack/world/Bullet.hx",28,0x5369f72c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::com::text::attack::utiltiies::Point p = ::com::text::attack::utiltiies::Point_obj::__new(this->x,this->y);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			if ((!(p->isInRange((int)30,(int)30)))){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(32)
			::com::text::attack::world::World_obj::instance->grid->markForBullet(p->x,p->y);
			HX_STACK_LINE(34)
			hx::AddEq(p->x,this->dirX);
			HX_STACK_LINE(35)
			hx::AddEq(p->y,this->dirY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,addCellsInBulletSight,(void))

Void Bullet_obj::update( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","update",0xe6ae13c7,"com.text.attack.world.Bullet.update","com/text/attack/world/Bullet.hx",40,0x5369f72c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		if ((this->justAdded)){
			HX_STACK_LINE(42)
			this->justAdded = false;
		}
		else{
			HX_STACK_LINE(46)
			if (((this->dirY == (int)-1))){
				HX_STACK_LINE(47)
				if (((this->y == (int)0))){
					HX_STACK_LINE(48)
					this->destroy();
				}
			}
			else{
				HX_STACK_LINE(51)
				if (((this->dirY == (int)1))){
					HX_STACK_LINE(52)
					if (((this->y == (int)29))){
						HX_STACK_LINE(53)
						this->destroy();
					}
				}
			}
		}
		HX_STACK_LINE(57)
		if (((this->dirX == (int)-1))){
			HX_STACK_LINE(58)
			if (((this->x == (int)0))){
				HX_STACK_LINE(59)
				this->destroy();
			}
		}
		else{
			HX_STACK_LINE(62)
			if (((this->dirX == (int)1))){
				HX_STACK_LINE(63)
				if (((this->x == (int)29))){
					HX_STACK_LINE(64)
					this->destroy();
				}
			}
		}
		HX_STACK_LINE(68)
		this->move(this->dirX,this->dirY);
	}
return null();
}


Void Bullet_obj::destroy( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","destroy",0x7859a57c,"com.text.attack.world.Bullet.destroy","com/text/attack/world/Bullet.hx",72,0x5369f72c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::com::text::attack::world::World_obj::instance->bullets->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(74)
		::com::text::attack::world::World_obj::instance->grid->clear(this->x,this->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,destroy,(void))

int Bullet_obj::getSymbol( ){
	HX_STACK_FRAME("com.text.attack.world.Bullet","getSymbol",0xf5385590,"com.text.attack.world.Bullet.getSymbol","com/text/attack/world/Bullet.hx",99,0x5369f72c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	if (((this->dirX == (int)0))){
		HX_STACK_LINE(100)
		return HX_CSTRING("|").charCodeAt((int)0);
	}
	else{
		HX_STACK_LINE(101)
		if (((this->dirY == (int)0))){
			HX_STACK_LINE(102)
			return HX_CSTRING("-").charCodeAt((int)0);
		}
		else{
			HX_STACK_LINE(103)
			if ((((this->dirY * this->dirX) > (int)0))){
				HX_STACK_LINE(104)
				return HX_CSTRING("\\").charCodeAt((int)0);
			}
			else{
				HX_STACK_LINE(106)
				return HX_CSTRING("/").charCodeAt((int)0);
			}
		}
	}
	HX_STACK_LINE(99)
	return (int)0;
}


Void Bullet_obj::shoot( int dirX,int dirY){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","shoot",0xd3d475e1,"com.text.attack.world.Bullet.shoot","com/text/attack/world/Bullet.hx",78,0x5369f72c)
		HX_STACK_ARG(dirX,"dirX")
		HX_STACK_ARG(dirY,"dirY")
		HX_STACK_LINE(79)
		::com::text::attack::world::Player player = ::com::text::attack::world::World_obj::instance->player;		HX_STACK_VAR(player,"player");
		HX_STACK_LINE(80)
		::com::text::attack::world::WorldGrid grid = ::com::text::attack::world::World_obj::instance->grid;		HX_STACK_VAR(grid,"grid");
		HX_STACK_LINE(82)
		if (((::com::text::attack::world::World_obj::instance->numBulletsAvail > (int)0))){
			HX_STACK_LINE(83)
			::com::text::attack::world::Bullet b = ::com::text::attack::world::Bullet_obj::__new((player->x + dirX),(player->y + dirY),dirX,dirY);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(85)
			::com::text::attack::world::Cell oldCell = grid->set(b->x,b->y,b);		HX_STACK_VAR(oldCell,"oldCell");
			HX_STACK_LINE(87)
			if ((::com::text::attack::world::Comet_obj::isCometType(oldCell->cellType))){
				HX_STACK_LINE(88)
				::com::text::attack::world::Comet _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(88)
				_g = hx::TCast< com::text::attack::world::Comet >::cast(oldCell);
				HX_STACK_LINE(88)
				::com::text::attack::world::World_obj::instance->cometsToRemove->push(_g);
			}
			HX_STACK_LINE(91)
			::com::text::attack::world::World_obj::instance->bullets->push(b);
			HX_STACK_LINE(92)
			::com::text::attack::world::World_obj::instance->bulletsToAdd->push(b);
			HX_STACK_LINE(93)
			(::com::text::attack::world::World_obj::instance->numBulletsAvail)--;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bullet_obj,shoot,(void))

Void Bullet_obj::shootUpLeft( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","shootUpLeft",0xf2376cc3,"com.text.attack.world.Bullet.shootUpLeft","com/text/attack/world/Bullet.hx",110,0x5369f72c)
		HX_STACK_LINE(111)
		::com::text::attack::world::Wall wall = ::com::text::attack::world::World_obj::instance->player->wall;		HX_STACK_VAR(wall,"wall");
		HX_STACK_LINE(112)
		switch( (int)(wall->__Index())){
			case (int)1: {
				HX_STACK_LINE(114)
				::com::text::attack::world::Bullet_obj::shoot((int)-1,(int)-1);
			}
			;break;
			case (int)0: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,shootUpLeft,(void))

Void Bullet_obj::shootUpRight( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","shootUpRight",0x7554cba0,"com.text.attack.world.Bullet.shootUpRight","com/text/attack/world/Bullet.hx",123,0x5369f72c)
		HX_STACK_LINE(124)
		::com::text::attack::world::Wall wall = ::com::text::attack::world::World_obj::instance->player->wall;		HX_STACK_VAR(wall,"wall");
		HX_STACK_LINE(125)
		switch( (int)(wall->__Index())){
			case (int)1: {
				HX_STACK_LINE(127)
				::com::text::attack::world::Bullet_obj::shoot((int)1,(int)-1);
			}
			;break;
			case (int)0: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,shootUpRight,(void))

Void Bullet_obj::shootUp( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","shootUp",0xca46ba9c,"com.text.attack.world.Bullet.shootUp","com/text/attack/world/Bullet.hx",136,0x5369f72c)
		HX_STACK_LINE(137)
		::com::text::attack::world::Wall wall = ::com::text::attack::world::World_obj::instance->player->wall;		HX_STACK_VAR(wall,"wall");
		HX_STACK_LINE(138)
		switch( (int)(wall->__Index())){
			case (int)1: {
				HX_STACK_LINE(140)
				::com::text::attack::world::Bullet_obj::shoot((int)0,(int)-1);
			}
			;break;
			case (int)0: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,shootUp,(void))

Void Bullet_obj::shootLeft( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","shootLeft",0xef64ae88,"com.text.attack.world.Bullet.shootLeft","com/text/attack/world/Bullet.hx",149,0x5369f72c)
		HX_STACK_LINE(150)
		::com::text::attack::world::Wall wall = ::com::text::attack::world::World_obj::instance->player->wall;		HX_STACK_VAR(wall,"wall");
		HX_STACK_LINE(151)
		switch( (int)(wall->__Index())){
			case (int)1: {
				HX_STACK_LINE(153)
				::com::text::attack::world::Bullet_obj::shoot((int)-1,(int)0);
			}
			;break;
			case (int)0: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,shootLeft,(void))

Void Bullet_obj::shootRight( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","shootRight",0xffc1163b,"com.text.attack.world.Bullet.shootRight","com/text/attack/world/Bullet.hx",162,0x5369f72c)
		HX_STACK_LINE(163)
		::com::text::attack::world::Wall wall = ::com::text::attack::world::World_obj::instance->player->wall;		HX_STACK_VAR(wall,"wall");
		HX_STACK_LINE(164)
		switch( (int)(wall->__Index())){
			case (int)1: {
				HX_STACK_LINE(166)
				::com::text::attack::world::Bullet_obj::shoot((int)1,(int)0);
			}
			;break;
			case (int)0: {
			}
			;break;
			case (int)2: {
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,shootRight,(void))


Bullet_obj::Bullet_obj()
{
}

Dynamic Bullet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dirX") ) { return dirX; }
		if (HX_FIELD_EQ(inName,"dirY") ) { return dirY; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shootUp") ) { return shootUp_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shootLeft") ) { return shootLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"justAdded") ) { return justAdded; }
		if (HX_FIELD_EQ(inName,"getSymbol") ) { return getSymbol_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shootRight") ) { return shootRight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shootUpLeft") ) { return shootUpLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shootUpRight") ) { return shootUpRight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addCellsInBulletSight") ) { return addCellsInBulletSight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dirX") ) { dirX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirY") ) { dirY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"justAdded") ) { justAdded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("justAdded"));
	outFields->push(HX_CSTRING("dirX"));
	outFields->push(HX_CSTRING("dirY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("shoot"),
	HX_CSTRING("shootUpLeft"),
	HX_CSTRING("shootUpRight"),
	HX_CSTRING("shootUp"),
	HX_CSTRING("shootLeft"),
	HX_CSTRING("shootRight"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Bullet_obj,justAdded),HX_CSTRING("justAdded")},
	{hx::fsInt,(int)offsetof(Bullet_obj,dirX),HX_CSTRING("dirX")},
	{hx::fsInt,(int)offsetof(Bullet_obj,dirY),HX_CSTRING("dirY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("justAdded"),
	HX_CSTRING("dirX"),
	HX_CSTRING("dirY"),
	HX_CSTRING("addCellsInBulletSight"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getSymbol"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#endif

Class Bullet_obj::__mClass;

void Bullet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.Bullet"), hx::TCanCast< Bullet_obj> ,sStaticFields,sMemberFields,
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

void Bullet_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
