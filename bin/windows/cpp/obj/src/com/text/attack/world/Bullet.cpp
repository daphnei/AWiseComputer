#include <hxcpp.h>

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
#ifndef INCLUDED_com_text_attack_world_Direction
#include <com/text/attack/world/Direction.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Player
#include <com/text/attack/world/Player.h>
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

Void Bullet_obj::__construct(int x,int y,::com::text::attack::world::Direction direction)
{
HX_STACK_FRAME("com.text.attack.world.Bullet","new",0x291c5fe2,"com.text.attack.world.Bullet.new","com/text/attack/world/Bullet.hx",21,0x5369f72c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(direction,"direction")
{
	HX_STACK_LINE(22)
	super::__construct(::com::text::attack::world::CellType_obj::Bullet,x,y);
	HX_STACK_LINE(23)
	this->justAdded = false;
	HX_STACK_LINE(24)
	this->direction = direction;
}
;
	return null();
}

//Bullet_obj::~Bullet_obj() { }

Dynamic Bullet_obj::__CreateEmpty() { return  new Bullet_obj; }
hx::ObjectPtr< Bullet_obj > Bullet_obj::__new(int x,int y,::com::text::attack::world::Direction direction)
{  hx::ObjectPtr< Bullet_obj > result = new Bullet_obj();
	result->__construct(x,y,direction);
	return result;}

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bullet_obj > result = new Bullet_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Bullet_obj::update( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","update",0xe6ae13c7,"com.text.attack.world.Bullet.update","com/text/attack/world/Bullet.hx",29,0x5369f72c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		if ((this->justAdded)){
			HX_STACK_LINE(30)
			this->justAdded = false;
		}
		else{
			HX_STACK_LINE(32)
			if (((this->direction == ::com::text::attack::world::Direction_obj::UP))){
				HX_STACK_LINE(33)
				if (((this->y == (int)0))){
					HX_STACK_LINE(34)
					this->remove();
				}
				else{
					HX_STACK_LINE(36)
					this->move((int)0,(int)-1);
				}
			}
			else{
				HX_STACK_LINE(48)
				if (((this->direction == ::com::text::attack::world::Direction_obj::LEFT))){
					HX_STACK_LINE(49)
					if (((this->x == (int)0))){
						HX_STACK_LINE(50)
						this->remove();
					}
					else{
						HX_STACK_LINE(52)
						this->move((int)-1,(int)0);
					}
				}
				else{
					HX_STACK_LINE(56)
					if (((this->direction == ::com::text::attack::world::Direction_obj::RIGHT))){
						HX_STACK_LINE(57)
						if (((this->x == (int)29))){
							HX_STACK_LINE(58)
							this->remove();
						}
						else{
							HX_STACK_LINE(60)
							this->move((int)1,(int)0);
						}
					}
				}
			}
		}
	}
return null();
}


Void Bullet_obj::remove( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","remove",0x64312a02,"com.text.attack.world.Bullet.remove","com/text/attack/world/Bullet.hx",66,0x5369f72c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		::com::text::attack::world::World_obj::instance->bullets->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(68)
		::com::text::attack::world::World_obj::instance->grid->clear(this->x,this->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,remove,(void))

int Bullet_obj::getSymbol( ){
	HX_STACK_FRAME("com.text.attack.world.Bullet","getSymbol",0xf5385590,"com.text.attack.world.Bullet.getSymbol","com/text/attack/world/Bullet.hx",100,0x5369f72c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	::com::text::attack::world::Direction _g = this->direction;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(100)
	switch( (int)(_g->__Index())){
		case (int)2: {
			HX_STACK_LINE(102)
			return HX_CSTRING("|").charCodeAt((int)0);
		}
		;break;
		default: {
			HX_STACK_LINE(104)
			return HX_CSTRING("-").charCodeAt((int)0);
		}
	}
	HX_STACK_LINE(100)
	return (int)0;
}


Void Bullet_obj::shoot( ::com::text::attack::world::Direction dir){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","shoot",0xd3d475e1,"com.text.attack.world.Bullet.shoot","com/text/attack/world/Bullet.hx",72,0x5369f72c)
		HX_STACK_ARG(dir,"dir")
		HX_STACK_LINE(73)
		::com::text::attack::world::Player player = ::com::text::attack::world::World_obj::instance->player;		HX_STACK_VAR(player,"player");
		HX_STACK_LINE(74)
		::com::text::attack::world::WorldGrid grid = ::com::text::attack::world::World_obj::instance->grid;		HX_STACK_VAR(grid,"grid");
		HX_STACK_LINE(76)
		if (((::com::text::attack::world::World_obj::instance->numBulletsAvail > (int)0))){
			HX_STACK_LINE(77)
			::com::text::attack::world::Bullet b = null();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(78)
			switch( (int)(dir->__Index())){
				case (int)0: {
					HX_STACK_LINE(80)
					::com::text::attack::world::Bullet _g = ::com::text::attack::world::Bullet_obj::__new((player->x - (int)1),player->y,dir);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(80)
					b = _g;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(82)
					::com::text::attack::world::Bullet _g1 = ::com::text::attack::world::Bullet_obj::__new((player->x + (int)1),player->y,dir);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(82)
					b = _g1;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(84)
					::com::text::attack::world::Bullet _g2 = ::com::text::attack::world::Bullet_obj::__new(player->x,(player->y - (int)1),dir);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(84)
					b = _g2;
				}
				;break;
			}
			HX_STACK_LINE(86)
			::com::text::attack::world::Cell oldCell = grid->set(b->x,b->y,b);		HX_STACK_VAR(oldCell,"oldCell");
			HX_STACK_LINE(88)
			if (((oldCell->cellType == ::com::text::attack::world::CellType_obj::Comet))){
				HX_STACK_LINE(89)
				::com::text::attack::world::Comet _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(89)
				_g3 = hx::TCast< com::text::attack::world::Comet >::cast(oldCell);
				HX_STACK_LINE(89)
				::com::text::attack::world::World_obj::instance->collideBulletComet(b,_g3);
			}
			HX_STACK_LINE(92)
			::com::text::attack::world::World_obj::instance->bullets->push(b);
			HX_STACK_LINE(93)
			::com::text::attack::world::World_obj::instance->bulletsToAdd->push(b);
			HX_STACK_LINE(94)
			(::com::text::attack::world::World_obj::instance->numBulletsAvail)--;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bullet_obj,shoot,(void))

Void Bullet_obj::shootUp( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","shootUp",0xca46ba9c,"com.text.attack.world.Bullet.shootUp","com/text/attack/world/Bullet.hx",110,0x5369f72c)
		HX_STACK_LINE(110)
		::com::text::attack::world::Bullet_obj::shoot(::com::text::attack::world::Direction_obj::UP);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,shootUp,(void))

Void Bullet_obj::shootLeft( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","shootLeft",0xef64ae88,"com.text.attack.world.Bullet.shootLeft","com/text/attack/world/Bullet.hx",115,0x5369f72c)
		HX_STACK_LINE(115)
		::com::text::attack::world::Bullet_obj::shoot(::com::text::attack::world::Direction_obj::LEFT);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,shootLeft,(void))

Void Bullet_obj::shootRight( ){
{
		HX_STACK_FRAME("com.text.attack.world.Bullet","shootRight",0xffc1163b,"com.text.attack.world.Bullet.shootRight","com/text/attack/world/Bullet.hx",120,0x5369f72c)
		HX_STACK_LINE(120)
		::com::text::attack::world::Bullet_obj::shoot(::com::text::attack::world::Direction_obj::RIGHT);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,shootRight,(void))


Bullet_obj::Bullet_obj()
{
}

void Bullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bullet);
	HX_MARK_MEMBER_NAME(justAdded,"justAdded");
	HX_MARK_MEMBER_NAME(direction,"direction");
	::com::text::attack::world::Cell_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(justAdded,"justAdded");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	::com::text::attack::world::Cell_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bullet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shootUp") ) { return shootUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shootLeft") ) { return shootLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"justAdded") ) { return justAdded; }
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		if (HX_FIELD_EQ(inName,"getSymbol") ) { return getSymbol_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shootRight") ) { return shootRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"justAdded") ) { justAdded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::com::text::attack::world::Direction >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("justAdded"));
	outFields->push(HX_CSTRING("direction"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("shoot"),
	HX_CSTRING("shootUp"),
	HX_CSTRING("shootLeft"),
	HX_CSTRING("shootRight"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Bullet_obj,justAdded),HX_CSTRING("justAdded")},
	{hx::fsObject /*::com::text::attack::world::Direction*/ ,(int)offsetof(Bullet_obj,direction),HX_CSTRING("direction")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("justAdded"),
	HX_CSTRING("direction"),
	HX_CSTRING("update"),
	HX_CSTRING("remove"),
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
