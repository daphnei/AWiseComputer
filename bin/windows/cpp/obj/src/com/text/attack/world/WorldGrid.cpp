#include <hxcpp.h>

#ifndef INCLUDED_com_text_attack_utiltiies_Assert
#include <com/text/attack/utiltiies/Assert.h>
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
#ifndef INCLUDED_com_text_attack_world_Empty
#include <com/text/attack/world/Empty.h>
#endif
#ifndef INCLUDED_com_text_attack_world_WorldGrid
#include <com/text/attack/world/WorldGrid.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace world{

Void WorldGrid_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.world.WorldGrid","new",0x6c57643c,"com.text.attack.world.WorldGrid.new","com/text/attack/world/WorldGrid.hx",24,0x6459e016)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	::haxe::Log_obj::trace(HX_CSTRING("HERE!"),hx::SourceInfo(HX_CSTRING("WorldGrid.hx"),25,HX_CSTRING("com.text.attack.world.WorldGrid"),HX_CSTRING("new")));
	HX_STACK_LINE(28)
	Array< ::Dynamic > _g1;		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/WorldGrid.hx",28,0x6459e016)
			{
				HX_STACK_LINE(28)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(28)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact((int)30);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(28)
				this1 = _g;
				HX_STACK_LINE(28)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(28)
	_g1 = _Function_1_1::Block();
	HX_STACK_LINE(28)
	this->grid = _g1;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		while((true)){
			HX_STACK_LINE(29)
			if ((!(((_g < (int)30))))){
				HX_STACK_LINE(29)
				break;
			}
			HX_STACK_LINE(29)
			int y = (_g)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				Array< ::Dynamic > val;		HX_STACK_VAR(val,"val");
				struct _Function_4_1{
					inline static Array< ::Dynamic > Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/WorldGrid.hx",30,0x6459e016)
						{
							HX_STACK_LINE(30)
							Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(30)
							Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new()->__SetSizeExact((int)30);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(30)
							this1 = _g2;
							HX_STACK_LINE(30)
							return this1;
						}
						return null();
					}
				};
				HX_STACK_LINE(30)
				val = _Function_4_1::Block();
				HX_STACK_LINE(30)
				this->grid->__unsafe_set(y,val);
			}
			HX_STACK_LINE(31)
			{
				HX_STACK_LINE(31)
				Array< bool > val;		HX_STACK_VAR(val,"val");
				struct _Function_4_1{
					inline static Array< bool > Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/WorldGrid.hx",31,0x6459e016)
						{
							HX_STACK_LINE(31)
							Array< bool > this1;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(31)
							Array< bool > _g3 = Array_obj< bool >::__new()->__SetSizeExact((int)30);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(31)
							this1 = _g3;
							HX_STACK_LINE(31)
							return this1;
						}
						return null();
					}
				};
				HX_STACK_LINE(31)
				val = _Function_4_1::Block();
				HX_STACK_LINE(31)
				this->inBulletsWay->__unsafe_set(y,val);
			}
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(33)
				while((true)){
					HX_STACK_LINE(33)
					if ((!(((_g11 < (int)30))))){
						HX_STACK_LINE(33)
						break;
					}
					HX_STACK_LINE(33)
					int x = (_g11)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(34)
					::com::text::attack::world::Empty _g4 = ::com::text::attack::world::Empty_obj::__new(x,y);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(34)
					this->set(x,y,_g4);
					HX_STACK_LINE(35)
					{
						HX_STACK_LINE(35)
						Array< bool > this1 = this->inBulletsWay->__unsafe_get(y);		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(35)
						this1->__unsafe_set(x,false);
					}
				}
			}
		}
	}
}
;
	return null();
}

//WorldGrid_obj::~WorldGrid_obj() { }

Dynamic WorldGrid_obj::__CreateEmpty() { return  new WorldGrid_obj; }
hx::ObjectPtr< WorldGrid_obj > WorldGrid_obj::__new()
{  hx::ObjectPtr< WorldGrid_obj > result = new WorldGrid_obj();
	result->__construct();
	return result;}

Dynamic WorldGrid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WorldGrid_obj > result = new WorldGrid_obj();
	result->__construct();
	return result;}

Void WorldGrid_obj::clear( int x,int y){
{
		HX_STACK_FRAME("com.text.attack.world.WorldGrid","clear",0x6b50b469,"com.text.attack.world.WorldGrid.clear","com/text/attack/world/WorldGrid.hx",41,0x6459e016)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(42)
		::com::text::attack::world::Empty _g = ::com::text::attack::world::Empty_obj::__new(x,y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->set(x,y,_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WorldGrid_obj,clear,(void))

::com::text::attack::world::Cell WorldGrid_obj::set( int x,int y,::com::text::attack::world::Cell cell){
	HX_STACK_FRAME("com.text.attack.world.WorldGrid","set",0x6c5b2f7e,"com.text.attack.world.WorldGrid.set","com/text/attack/world/WorldGrid.hx",53,0x6459e016)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(cell,"cell")
	HX_STACK_LINE(55)
	::com::text::attack::utiltiies::Assert_obj::_assert((y < (int)30),hx::SourceInfo(HX_CSTRING("WorldGrid.hx"),55,HX_CSTRING("com.text.attack.world.WorldGrid"),HX_CSTRING("set")));
	HX_STACK_LINE(56)
	::com::text::attack::utiltiies::Assert_obj::_assert((this->grid != null()),hx::SourceInfo(HX_CSTRING("WorldGrid.hx"),56,HX_CSTRING("com.text.attack.world.WorldGrid"),HX_CSTRING("set")));
	HX_STACK_LINE(57)
	Array< ::Dynamic > _g = this->grid->__unsafe_get(y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(57)
	bool _g1 = (_g != null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(57)
	::com::text::attack::utiltiies::Assert_obj::_assert(_g1,hx::SourceInfo(HX_CSTRING("WorldGrid.hx"),57,HX_CSTRING("com.text.attack.world.WorldGrid"),HX_CSTRING("set")));
	HX_STACK_LINE(59)
	::com::text::attack::world::Cell oldCell;		HX_STACK_VAR(oldCell,"oldCell");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		Array< ::Dynamic > this1 = this->grid->__unsafe_get(y);		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(59)
		oldCell = this1->__unsafe_get(x);
	}
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		Array< ::Dynamic > this1 = this->grid->__unsafe_get(y);		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(61)
		this1->__unsafe_set(x,cell);
	}
	HX_STACK_LINE(63)
	return oldCell;
}


HX_DEFINE_DYNAMIC_FUNC3(WorldGrid_obj,set,return )

::com::text::attack::world::Cell WorldGrid_obj::get( int x,int y){
	HX_STACK_FRAME("com.text.attack.world.WorldGrid","get",0x6c521472,"com.text.attack.world.WorldGrid.get","com/text/attack/world/WorldGrid.hx",68,0x6459e016)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(68)
	Array< ::Dynamic > this1 = this->grid->__unsafe_get(y);		HX_STACK_VAR(this1,"this1");
	HX_STACK_LINE(68)
	return this1->__unsafe_get(x);
}


HX_DEFINE_DYNAMIC_FUNC2(WorldGrid_obj,get,return )

Void WorldGrid_obj::move( int oldX,int oldY,int xOffset,int yOffset){
{
		HX_STACK_FRAME("com.text.attack.world.WorldGrid","move",0x5f7eafb5,"com.text.attack.world.WorldGrid.move","com/text/attack/world/WorldGrid.hx",72,0x6459e016)
		HX_STACK_THIS(this)
		HX_STACK_ARG(oldX,"oldX")
		HX_STACK_ARG(oldY,"oldY")
		HX_STACK_ARG(xOffset,"xOffset")
		HX_STACK_ARG(yOffset,"yOffset")
		HX_STACK_LINE(73)
		::com::text::attack::world::Cell cell;		HX_STACK_VAR(cell,"cell");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Array< ::Dynamic > this1 = this->grid->__unsafe_get(oldY);		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(73)
			cell = this1->__unsafe_get(oldX);
		}
		HX_STACK_LINE(75)
		this->clear(oldX,oldY);
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			Array< ::Dynamic > this1 = this->grid->__unsafe_get((oldY + yOffset));		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(77)
			this1->__unsafe_set((oldX + xOffset),cell);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(WorldGrid_obj,move,(void))

Void WorldGrid_obj::addGridToTextField( ::openfl::_v2::text::TextField textField,::openfl::_v2::text::TextFormat textFormat){
{
		HX_STACK_FRAME("com.text.attack.world.WorldGrid","addGridToTextField",0x8494a92f,"com.text.attack.world.WorldGrid.addGridToTextField","com/text/attack/world/WorldGrid.hx",82,0x6459e016)
		HX_STACK_THIS(this)
		HX_STACK_ARG(textField,"textField")
		HX_STACK_ARG(textFormat,"textFormat")
		HX_STACK_LINE(82)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		while((true)){
			HX_STACK_LINE(82)
			if ((!(((_g < (int)30))))){
				HX_STACK_LINE(82)
				break;
			}
			HX_STACK_LINE(82)
			int y = (_g)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(83)
				while((true)){
					HX_STACK_LINE(83)
					if ((!(((_g1 < (int)30))))){
						HX_STACK_LINE(83)
						break;
					}
					HX_STACK_LINE(83)
					int x = (_g1)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(84)
					::com::text::attack::world::Cell cell;		HX_STACK_VAR(cell,"cell");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						Array< ::Dynamic > this1 = this->grid->__unsafe_get(y);		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(84)
						cell = this1->__unsafe_get(x);
					}
					HX_STACK_LINE(86)
					int color = (int)16711680;		HX_STACK_VAR(color,"color");
					HX_STACK_LINE(87)
					if ((::com::text::attack::world::Comet_obj::isCometType(cell->cellType))){
						HX_STACK_LINE(88)
						color = (int)16732004;
					}
					else{
						HX_STACK_LINE(89)
						if (((cell->cellType == ::com::text::attack::world::CellType_obj::Player))){
							HX_STACK_LINE(90)
							color = (int)16777215;
						}
						else{
							HX_STACK_LINE(91)
							if (((cell->cellType == ::com::text::attack::world::CellType_obj::Bullet))){
								HX_STACK_LINE(92)
								color = (int)15662960;
							}
							else{
								HX_STACK_LINE(93)
								if (((cell->cellType == ::com::text::attack::world::CellType_obj::Bouncer))){
									HX_STACK_LINE(94)
									color = (int)9895836;
								}
								else{
									HX_STACK_LINE(96)
									color = (int)3355443;
								}
							}
						}
					}
					HX_STACK_LINE(102)
					textFormat->color = color;
					HX_STACK_LINE(103)
					int _g2 = cell->getSymbol();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(103)
					::String _g11 = ::String::fromCharCode(_g2);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(103)
					textField->appendText(_g11);
					HX_STACK_LINE(104)
					textField->setTextFormat(textFormat,(textField->get_text().length - (int)1),textField->get_text().length);
				}
			}
			HX_STACK_LINE(106)
			textField->appendText(HX_CSTRING("\n"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WorldGrid_obj,addGridToTextField,(void))

Void WorldGrid_obj::printCell( int x,int y){
{
		HX_STACK_FRAME("com.text.attack.world.WorldGrid","printCell",0x229ba14b,"com.text.attack.world.WorldGrid.printCell","com/text/attack/world/WorldGrid.hx",111,0x6459e016)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		struct _Function_1_1{
			inline static ::com::text::attack::world::Cell Block( hx::ObjectPtr< ::com::text::attack::world::WorldGrid_obj > __this,int &x,int &y){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/WorldGrid.hx",112,0x6459e016)
				{
					HX_STACK_LINE(112)
					Array< ::Dynamic > this1 = __this->grid->__unsafe_get(y);		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(112)
					return this1->__unsafe_get(x);
				}
				return null();
			}
		};
		HX_STACK_LINE(112)
		::String _g = (_Function_1_1::Block(this,x,y))->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		::haxe::Log_obj::trace(_g,hx::SourceInfo(HX_CSTRING("WorldGrid.hx"),112,HX_CSTRING("com.text.attack.world.WorldGrid"),HX_CSTRING("printCell")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WorldGrid_obj,printCell,(void))

Void WorldGrid_obj::markForBullet( int x,int y){
{
		HX_STACK_FRAME("com.text.attack.world.WorldGrid","markForBullet",0x8bbd6f3a,"com.text.attack.world.WorldGrid.markForBullet","com/text/attack/world/WorldGrid.hx",117,0x6459e016)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(117)
		Array< bool > this1 = this->inBulletsWay->__unsafe_get(y);		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(117)
		this1->__unsafe_set(x,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WorldGrid_obj,markForBullet,(void))


WorldGrid_obj::WorldGrid_obj()
{
}

void WorldGrid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WorldGrid);
	HX_MARK_MEMBER_NAME(grid,"grid");
	HX_MARK_MEMBER_NAME(inBulletsWay,"inBulletsWay");
	HX_MARK_END_CLASS();
}

void WorldGrid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grid,"grid");
	HX_VISIT_MEMBER_NAME(inBulletsWay,"inBulletsWay");
}

Dynamic WorldGrid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { return grid; }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printCell") ) { return printCell_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inBulletsWay") ) { return inBulletsWay; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"markForBullet") ) { return markForBullet_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addGridToTextField") ) { return addGridToTextField_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WorldGrid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { grid=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inBulletsWay") ) { inBulletsWay=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WorldGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("grid"));
	outFields->push(HX_CSTRING("inBulletsWay"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(WorldGrid_obj,grid),HX_CSTRING("grid")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(WorldGrid_obj,inBulletsWay),HX_CSTRING("inBulletsWay")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("grid"),
	HX_CSTRING("inBulletsWay"),
	HX_CSTRING("clear"),
	HX_CSTRING("set"),
	HX_CSTRING("get"),
	HX_CSTRING("move"),
	HX_CSTRING("addGridToTextField"),
	HX_CSTRING("printCell"),
	HX_CSTRING("markForBullet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WorldGrid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WorldGrid_obj::__mClass,"__mClass");
};

#endif

Class WorldGrid_obj::__mClass;

void WorldGrid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.WorldGrid"), hx::TCanCast< WorldGrid_obj> ,sStaticFields,sMemberFields,
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

void WorldGrid_obj::__boot()
{
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
