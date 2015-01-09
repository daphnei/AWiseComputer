#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level1
#include <com/text/attack/levels/Level1.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level2
#include <com/text/attack/levels/Level2.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level3
#include <com/text/attack/levels/Level3.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level4
#include <com/text/attack/levels/Level4.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level5
#include <com/text/attack/levels/Level5.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level6
#include <com/text/attack/levels/Level6.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level7
#include <com/text/attack/levels/Level7.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level8
#include <com/text/attack/levels/Level8.h>
#endif
#ifndef INCLUDED_com_text_attack_utiltiies_KeyManager
#include <com/text/attack/utiltiies/KeyManager.h>
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
#ifndef INCLUDED_com_text_attack_world_Direction
#include <com/text/attack/world/Direction.h>
#endif
#ifndef INCLUDED_com_text_attack_world_GameState
#include <com/text/attack/world/GameState.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
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
#ifndef INCLUDED_openfl__v2_text_TextFormatAlign
#include <openfl/_v2/text/TextFormatAlign.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace world{

Void World_obj::__construct()
{
HX_STACK_FRAME("com.text.attack.world.World","new",0x64c87456,"com.text.attack.world.World.new","com/text/attack/world/World.hx",76,0x2b0ef83c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(77)
	super::__construct();
	HX_STACK_LINE(79)
	::com::text::attack::world::World_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(81)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

//World_obj::~World_obj() { }

Dynamic World_obj::__CreateEmpty() { return  new World_obj; }
hx::ObjectPtr< World_obj > World_obj::__new()
{  hx::ObjectPtr< World_obj > result = new World_obj();
	result->__construct();
	return result;}

Dynamic World_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< World_obj > result = new World_obj();
	result->__construct();
	return result;}

Void World_obj::added( ::openfl::_v2::events::Event event){
{
		HX_STACK_FRAME("com.text.attack.world.World","added",0x0221e236,"com.text.attack.world.World.added","com/text/attack/world/World.hx",85,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(86)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(88)
		::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("courier"),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		this->textFormat = _g;
		HX_STACK_LINE(96)
		this->textFormat->size = (int)26;
		HX_STACK_LINE(99)
		this->textFormat->color = (int)16777215;
		HX_STACK_LINE(101)
		::openfl::_v2::text::TextField _g1 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(101)
		this->worldVisual = _g1;
		HX_STACK_LINE(102)
		this->worldVisual->set_defaultTextFormat(this->textFormat);
		HX_STACK_LINE(103)
		this->worldVisual->set_width((int)700);
		HX_STACK_LINE(104)
		this->worldVisual->set_height((int)700);
		HX_STACK_LINE(105)
		this->worldVisual->set_wordWrap(true);
		HX_STACK_LINE(109)
		this->addChild(this->worldVisual);
		HX_STACK_LINE(111)
		this->levelIndex = (int)0;
		HX_STACK_LINE(113)
		this->splashScreen();
		HX_STACK_LINE(116)
		::com::text::attack::utiltiies::KeyManager _g2 = ::com::text::attack::utiltiies::KeyManager_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(116)
		this->keyManager = _g2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(World_obj,added,(void))

Void World_obj::splashScreen( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","splashScreen",0xa871e57d,"com.text.attack.world.World.splashScreen","com/text/attack/world/World.hx",120,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		this->levelJumpString = HX_CSTRING("");
		HX_STACK_LINE(123)
		this->worldVisual->appendText(HX_CSTRING("> the\n"));
		HX_STACK_LINE(124)
		this->worldVisual->appendText(HX_CSTRING("> wise\n"));
		HX_STACK_LINE(125)
		this->worldVisual->appendText(HX_CSTRING("> computer\n"));
		HX_STACK_LINE(126)
		this->worldVisual->appendText(HX_CSTRING("> \n"));
		HX_STACK_LINE(127)
		this->worldVisual->appendText(HX_CSTRING("> [PRESS ENTER]\n"));
		HX_STACK_LINE(128)
		this->worldVisual->appendText(HX_CSTRING("> \n"));
		HX_STACK_LINE(129)
		this->worldVisual->appendText(HX_CSTRING("> UTGDDC \n"));
		HX_STACK_LINE(130)
		this->worldVisual->appendText(HX_CSTRING("> Game-Making Deathmatch"));
		HX_STACK_LINE(131)
		this->gameState = ::com::text::attack::world::GameState_obj::DEAD;
		HX_STACK_LINE(133)
		this->centerWorldVisual();
		HX_STACK_LINE(134)
		this->worldVisual->set_y((int)100);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,splashScreen,(void))

Void World_obj::nextLevel( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","nextLevel",0x6d593007,"com.text.attack.world.World.nextLevel","com/text/attack/world/World.hx",139,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		if (((this->levelIndex == (int)7))){
			HX_STACK_LINE(142)
			this->levelIndex = (int)0;
			HX_STACK_LINE(143)
			this->endGame(true);
		}
		else{
			HX_STACK_LINE(146)
			(this->levelIndex)++;
			HX_STACK_LINE(147)
			this->startLevel();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,nextLevel,(void))

Void World_obj::startLevel( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","startLevel",0x75a9548c,"com.text.attack.world.World.startLevel","com/text/attack/world/World.hx",156,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		this->grid = null();
		HX_STACK_LINE(159)
		this->player = null();
		HX_STACK_LINE(160)
		this->comets = null();
		HX_STACK_LINE(161)
		this->bullets = null();
		HX_STACK_LINE(162)
		this->cometsToRemove = null();
		HX_STACK_LINE(163)
		this->bulletsToAdd = null();
		HX_STACK_LINE(165)
		this->textFormat->leading = (int)1;
		HX_STACK_LINE(166)
		this->textFormat->color = (int)16777215;
		HX_STACK_LINE(167)
		this->textFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::LEFT;
		HX_STACK_LINE(168)
		this->worldVisual->set_defaultTextFormat(this->textFormat);
		HX_STACK_LINE(170)
		this->gameState = ::com::text::attack::world::GameState_obj::PREAMBLE;
		HX_STACK_LINE(172)
		::com::text::attack::world::World_obj::LEVELS->__get(this->levelIndex).StaticCast< ::com::text::attack::levels::Level >()->resetPreamble();
		HX_STACK_LINE(173)
		::String _g = ::com::text::attack::world::World_obj::LEVELS->__get(this->levelIndex).StaticCast< ::com::text::attack::levels::Level >()->getSomePreamble();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		this->worldVisual->set_text(_g);
		HX_STACK_LINE(175)
		this->centerWorldVisual();
		HX_STACK_LINE(176)
		this->worldVisual->set_y((int)100);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,startLevel,(void))

Void World_obj::startPlay( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","startPlay",0x56fea7ec,"com.text.attack.world.World.startPlay","com/text/attack/world/World.hx",183,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		::com::text::attack::levels::Level level = ::com::text::attack::world::World_obj::LEVELS->__get(this->levelIndex).StaticCast< ::com::text::attack::levels::Level >();		HX_STACK_VAR(level,"level");
		HX_STACK_LINE(186)
		this->textFormat->leading = (int)-5;
		HX_STACK_LINE(187)
		this->textFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(188)
		this->worldVisual->set_defaultTextFormat(this->textFormat);
		HX_STACK_LINE(191)
		::com::text::attack::world::WorldGrid _g = ::com::text::attack::world::WorldGrid_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(191)
		this->grid = _g;
		HX_STACK_LINE(193)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		this->comets = _g1;
		HX_STACK_LINE(194)
		Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(194)
		this->bullets = _g2;
		HX_STACK_LINE(195)
		Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(195)
		this->cometsToRemove = _g3;
		HX_STACK_LINE(196)
		Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(196)
		this->bulletsToAdd = _g4;
		HX_STACK_LINE(197)
		this->numBulletsAvail = level->availableBullets;
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(199)
			while((true)){
				HX_STACK_LINE(199)
				if ((!(((_g5 < (int)30))))){
					HX_STACK_LINE(199)
					break;
				}
				HX_STACK_LINE(199)
				int y = (_g5)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(200)
				::String row = level->levelString.substr((y * (int)30),(int)30);		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(201)
				{
					HX_STACK_LINE(201)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(201)
					while((true)){
						HX_STACK_LINE(201)
						if ((!(((_g11 < (int)30))))){
							HX_STACK_LINE(201)
							break;
						}
						HX_STACK_LINE(201)
						int x = (_g11)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(202)
						::com::text::attack::world::Cell newCell;		HX_STACK_VAR(newCell,"newCell");
						HX_STACK_LINE(204)
						int _char = row.charCodeAt(x);		HX_STACK_VAR(_char,"char");
						HX_STACK_LINE(208)
						if (((_char == ::com::text::attack::world::CellType_obj::Comet->symbol))){
							HX_STACK_LINE(209)
							::com::text::attack::world::Comet comet = ::com::text::attack::world::Comet_obj::__new(x,y);		HX_STACK_VAR(comet,"comet");
							HX_STACK_LINE(210)
							this->comets->push(comet);
							HX_STACK_LINE(211)
							newCell = comet;
						}
						else{
							HX_STACK_LINE(213)
							if (((_char == ::com::text::attack::world::CellType_obj::Player->symbol))){
								HX_STACK_LINE(214)
								::com::text::attack::world::Player _g51 = ::com::text::attack::world::Player_obj::__new(x,y);		HX_STACK_VAR(_g51,"_g51");
								HX_STACK_LINE(214)
								this->player = _g51;
								HX_STACK_LINE(215)
								newCell = this->player;
							}
							else{
								HX_STACK_LINE(217)
								::com::text::attack::world::Cell _g6 = ::com::text::attack::world::Cell_obj::__new(::com::text::attack::world::CellType_obj::Empty,x,y);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(217)
								newCell = _g6;
							}
						}
						HX_STACK_LINE(220)
						this->grid->set(x,y,newCell);
					}
				}
			}
		}
		HX_STACK_LINE(224)
		this->resetWorldVisual();
		HX_STACK_LINE(225)
		this->grid->addGridToTextField(this->worldVisual,this->textFormat);
		HX_STACK_LINE(227)
		this->centerWorldVisual();
		HX_STACK_LINE(229)
		this->gameState = ::com::text::attack::world::GameState_obj::PLAYING;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,startPlay,(void))

Void World_obj::endGame( bool success){
{
		HX_STACK_FRAME("com.text.attack.world.World","endGame",0xca188463,"com.text.attack.world.World.endGame","com/text/attack/world/World.hx",237,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(success,"success")
		HX_STACK_LINE(238)
		this->textFormat->leading = (int)1;
		HX_STACK_LINE(239)
		this->textFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::LEFT;
		HX_STACK_LINE(240)
		this->textFormat->color = (int)16777215;
		HX_STACK_LINE(241)
		this->worldVisual->set_defaultTextFormat(this->textFormat);
		HX_STACK_LINE(243)
		if ((success)){
			HX_STACK_LINE(244)
			this->worldVisual->set_text(HX_CSTRING("> In the end, \"I hear and I forget. I see and I remember. I do and I understand.\" \n> Press [Enter] to play again."));
		}
		else{
			HX_STACK_LINE(246)
			this->worldVisual->set_text(HX_CSTRING("> I've died.\n> But I will try again. \n> [PRESS ENTER]"));
		}
		HX_STACK_LINE(249)
		this->grid = null();
		HX_STACK_LINE(250)
		this->player = null();
		HX_STACK_LINE(251)
		this->comets = null();
		HX_STACK_LINE(252)
		this->bullets = null();
		HX_STACK_LINE(254)
		this->gameState = ::com::text::attack::world::GameState_obj::DEAD;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(World_obj,endGame,(void))

Void World_obj::centerWorldVisual( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","centerWorldVisual",0x0846e553,"com.text.attack.world.World.centerWorldVisual","com/text/attack/world/World.hx",258,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(259)
		::haxe::Log_obj::trace(HX_CSTRING("Centering world visual"),hx::SourceInfo(HX_CSTRING("World.hx"),259,HX_CSTRING("com.text.attack.world.World"),HX_CSTRING("centerWorldVisual")));
		HX_STACK_LINE(261)
		int _g = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(261)
		Float _g2 = this->worldVisual->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(261)
		Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(261)
		Float _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(261)
		this->worldVisual->set_x(_g4);
		HX_STACK_LINE(262)
		int _g5 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(262)
		Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(262)
		Float _g7 = this->worldVisual->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(262)
		Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(262)
		Float _g9 = (_g6 - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(262)
		this->worldVisual->set_y(_g9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,centerWorldVisual,(void))

Void World_obj::resetWorldVisual( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","resetWorldVisual",0x2f1fe36d,"com.text.attack.world.World.resetWorldVisual","com/text/attack/world/World.hx",266,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(267)
		this->worldVisual->set_text(HX_CSTRING(""));
		HX_STACK_LINE(269)
		this->textFormat->color = (int)16777215;
		HX_STACK_LINE(271)
		this->worldVisual->appendText(HX_CSTRING("Bullets: "));
		HX_STACK_LINE(272)
		this->worldVisual->appendText((this->numBulletsAvail + HX_CSTRING("")));
		HX_STACK_LINE(273)
		this->worldVisual->appendText(HX_CSTRING("\t Level "));
		HX_STACK_LINE(274)
		this->worldVisual->appendText(((this->levelIndex + (int)1) + HX_CSTRING("")));
		HX_STACK_LINE(275)
		this->worldVisual->appendText(HX_CSTRING("\n"));
		HX_STACK_LINE(277)
		this->worldVisual->setTextFormat(this->textFormat,(int)0,this->worldVisual->get_text().length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,resetWorldVisual,(void))

Void World_obj::collideBulletComet( ::com::text::attack::world::Bullet bullet,::com::text::attack::world::Comet comet){
{
		HX_STACK_FRAME("com.text.attack.world.World","collideBulletComet",0x8190173a,"com.text.attack.world.World.collideBulletComet","com/text/attack/world/World.hx",282,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bullet,"bullet")
		HX_STACK_ARG(comet,"comet")
		HX_STACK_LINE(282)
		this->cometsToRemove->push(comet);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(World_obj,collideBulletComet,(void))

Void World_obj::collidePlayerComet( ::com::text::attack::world::Comet comet){
{
		HX_STACK_FRAME("com.text.attack.world.World","collidePlayerComet",0xd5954dbb,"com.text.attack.world.World.collidePlayerComet","com/text/attack/world/World.hx",286,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(comet,"comet")
		HX_STACK_LINE(288)
		int _g = this->cometsToRemove->indexOf(comet,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(288)
		if (((_g == (int)-1))){
			HX_STACK_LINE(289)
			::com::text::attack::world::World_obj::instance->gameState = ::com::text::attack::world::GameState_obj::ENDING;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(World_obj,collidePlayerComet,(void))

bool World_obj::playingKeyDown( ){
	HX_STACK_FRAME("com.text.attack.world.World","playingKeyDown",0x33a8ff9d,"com.text.attack.world.World.playingKeyDown","com/text/attack/world/World.hx",294,0x2b0ef83c)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::text::attack::world::World_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/World.hx",297,0x2b0ef83c)
			{
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::com::text::attack::world::World_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/World.hx",298,0x2b0ef83c)
						{
							struct _Function_3_1{
								inline static bool Block( hx::ObjectPtr< ::com::text::attack::world::World_obj > __this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/World.hx",299,0x2b0ef83c)
									{
										HX_STACK_LINE(299)
										return (  ((__this->keyManager->isKeyDown((int)67))) ? bool((__this->numBulletsAvail > (int)0)) : bool(false) );
									}
									return null();
								}
							};
							HX_STACK_LINE(298)
							return (  ((!(((  ((__this->keyManager->isKeyDown((int)90))) ? bool((__this->numBulletsAvail > (int)0)) : bool(false) ))))) ? bool(_Function_3_1::Block(__this)) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(297)
				return (  (((__this->levelIndex >= (int)2))) ? bool(_Function_2_1::Block(__this)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(294)
	if ((!(((  ((!(((  ((!(((  ((!(((  ((this->keyManager->isKeyDown((int)88))) ? bool((this->numBulletsAvail > (int)0)) : bool(false) ))))) ? bool(this->keyManager->isKeyDown((int)37)) : bool(true) ))))) ? bool(this->keyManager->isKeyDown((int)39)) : bool(true) ))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))))){
		HX_STACK_LINE(300)
		if (((this->levelIndex >= (int)4))){
			HX_STACK_LINE(301)
			return this->keyManager->isKeyDown((int)38);
		}
		else{
			HX_STACK_LINE(300)
			return false;
		}
	}
	else{
		HX_STACK_LINE(294)
		return true;
	}
	HX_STACK_LINE(294)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,playingKeyDown,return )

Void World_obj::updateLevelCheat( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","updateLevelCheat",0xc0ebdca2,"com.text.attack.world.World.updateLevelCheat","com/text/attack/world/World.hx",305,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		int numKey = this->keyManager->getNumberKeyDown();		HX_STACK_VAR(numKey,"numKey");
		HX_STACK_LINE(307)
		if (((numKey != (int)-1))){
			HX_STACK_LINE(308)
			::String _g = ::String::fromCharCode(numKey);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(308)
			hx::AddEq(this->levelJumpString,_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,updateLevelCheat,(void))

bool World_obj::switchToLevelCheat( ){
	HX_STACK_FRAME("com.text.attack.world.World","switchToLevelCheat",0x55fe9928,"com.text.attack.world.World.switchToLevelCheat","com/text/attack/world/World.hx",313,0x2b0ef83c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(314)
	if (((this->levelJumpString.length > (int)0))){
		HX_STACK_LINE(315)
		int num = ::Std_obj::parseInt(this->levelJumpString);		HX_STACK_VAR(num,"num");
		HX_STACK_LINE(317)
		this->levelJumpString = HX_CSTRING("");
		HX_STACK_LINE(319)
		if (((num <= (int)7))){
			HX_STACK_LINE(320)
			this->levelIndex = num;
			HX_STACK_LINE(321)
			return true;
		}
	}
	HX_STACK_LINE(325)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,switchToLevelCheat,return )

Void World_obj::update( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","update",0xc3733fd3,"com.text.attack.world.World.update","com/text/attack/world/World.hx",329,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		{
			HX_STACK_LINE(330)
			::com::text::attack::world::GameState _g = this->gameState;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(330)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(332)
					if ((this->playingKeyDown())){
						HX_STACK_LINE(333)
						if (((::com::text::attack::world::World_obj::instance->comets->length == (int)0))){
							HX_STACK_LINE(334)
							::haxe::Log_obj::trace(HX_CSTRING("ALL COMETS DESTROYED"),hx::SourceInfo(HX_CSTRING("World.hx"),334,HX_CSTRING("com.text.attack.world.World"),HX_CSTRING("update")));
							HX_STACK_LINE(335)
							::com::text::attack::world::World_obj::instance->nextLevel();
						}
						else{
							HX_STACK_LINE(338)
							{
								HX_STACK_LINE(338)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(338)
								Array< ::Dynamic > _g2 = this->bullets;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(338)
								while((true)){
									HX_STACK_LINE(338)
									if ((!(((_g1 < _g2->length))))){
										HX_STACK_LINE(338)
										break;
									}
									HX_STACK_LINE(338)
									::com::text::attack::world::Bullet bullet = _g2->__get(_g1).StaticCast< ::com::text::attack::world::Bullet >();		HX_STACK_VAR(bullet,"bullet");
									HX_STACK_LINE(338)
									++(_g1);
									HX_STACK_LINE(339)
									bullet->update();
								}
							}
							HX_STACK_LINE(343)
							this->player->update();
							HX_STACK_LINE(346)
							{
								HX_STACK_LINE(346)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(346)
								Array< ::Dynamic > _g2 = this->comets;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(346)
								while((true)){
									HX_STACK_LINE(346)
									if ((!(((_g1 < _g2->length))))){
										HX_STACK_LINE(346)
										break;
									}
									HX_STACK_LINE(346)
									::com::text::attack::world::Comet comet = _g2->__get(_g1).StaticCast< ::com::text::attack::world::Comet >();		HX_STACK_VAR(comet,"comet");
									HX_STACK_LINE(346)
									++(_g1);
									HX_STACK_LINE(347)
									comet->update();
								}
							}
							HX_STACK_LINE(350)
							if (((this->gameState == ::com::text::attack::world::GameState_obj::ENDING))){
								HX_STACK_LINE(351)
								this->endGame(false);
							}
							else{
								HX_STACK_LINE(353)
								Array< ::Dynamic > cometsClone = this->comets->copy();		HX_STACK_VAR(cometsClone,"cometsClone");
								HX_STACK_LINE(354)
								{
									HX_STACK_LINE(354)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(354)
									int _g1 = cometsClone->length;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(354)
									while((true)){
										HX_STACK_LINE(354)
										if ((!(((_g2 < _g1))))){
											HX_STACK_LINE(354)
											break;
										}
										HX_STACK_LINE(354)
										int i = (_g2)++;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(355)
										::com::text::attack::world::Comet comet = cometsClone->__get(i).StaticCast< ::com::text::attack::world::Comet >();		HX_STACK_VAR(comet,"comet");
										HX_STACK_LINE(358)
										if (((  ((comet->newPosCollides(this->player))) ? bool(!(this->player->justShot)) : bool(false) ))){
											HX_STACK_LINE(359)
											this->endGame(false);
											HX_STACK_LINE(360)
											return null();
										}
										else{
											HX_STACK_LINE(364)
											bool collidedWithABullet = false;		HX_STACK_VAR(collidedWithABullet,"collidedWithABullet");
											HX_STACK_LINE(365)
											{
												HX_STACK_LINE(365)
												int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(365)
												Array< ::Dynamic > _g4 = this->bullets;		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(365)
												while((true)){
													HX_STACK_LINE(365)
													if ((!(((_g3 < _g4->length))))){
														HX_STACK_LINE(365)
														break;
													}
													HX_STACK_LINE(365)
													::com::text::attack::world::Bullet bullet = _g4->__get(_g3).StaticCast< ::com::text::attack::world::Bullet >();		HX_STACK_VAR(bullet,"bullet");
													HX_STACK_LINE(365)
													++(_g3);
													HX_STACK_LINE(366)
													::com::text::attack::world::Bullet tempBullet = ::com::text::attack::world::Bullet_obj::__new(bullet->newX,(bullet->newY + (int)1),::com::text::attack::world::Direction_obj::UP);		HX_STACK_VAR(tempBullet,"tempBullet");
													HX_STACK_LINE(369)
													if ((comet->newPosCollides(bullet))){
														HX_STACK_LINE(371)
														comet->destroy();
														HX_STACK_LINE(372)
														collidedWithABullet = true;
													}
													else{
														HX_STACK_LINE(374)
														if ((comet->newPosCollides(tempBullet))){
															HX_STACK_LINE(376)
															comet->destroy();
															HX_STACK_LINE(377)
															collidedWithABullet = true;
															HX_STACK_LINE(378)
															this->grid->clear(tempBullet->x,tempBullet->y);
														}
													}
												}
											}
											HX_STACK_LINE(382)
											if ((!(collidedWithABullet))){
												HX_STACK_LINE(384)
												comet->applyMove();
											}
										}
									}
								}
								HX_STACK_LINE(390)
								{
									HX_STACK_LINE(390)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(390)
									Array< ::Dynamic > _g2 = this->bullets;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(390)
									while((true)){
										HX_STACK_LINE(390)
										if ((!(((_g1 < _g2->length))))){
											HX_STACK_LINE(390)
											break;
										}
										HX_STACK_LINE(390)
										::com::text::attack::world::Bullet bullet = _g2->__get(_g1).StaticCast< ::com::text::attack::world::Bullet >();		HX_STACK_VAR(bullet,"bullet");
										HX_STACK_LINE(390)
										++(_g1);
										HX_STACK_LINE(391)
										bullet->applyMove();
									}
								}
								HX_STACK_LINE(395)
								{
									HX_STACK_LINE(395)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(395)
									Array< ::Dynamic > _g2 = this->comets;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(395)
									while((true)){
										HX_STACK_LINE(395)
										if ((!(((_g1 < _g2->length))))){
											HX_STACK_LINE(395)
											break;
										}
										HX_STACK_LINE(395)
										::com::text::attack::world::Comet comet = _g2->__get(_g1).StaticCast< ::com::text::attack::world::Comet >();		HX_STACK_VAR(comet,"comet");
										HX_STACK_LINE(395)
										++(_g1);
										HX_STACK_LINE(396)
										comet->applyMove();
									}
								}
								HX_STACK_LINE(400)
								this->player->applyMove();
								HX_STACK_LINE(403)
								this->resetWorldVisual();
								HX_STACK_LINE(404)
								this->grid->addGridToTextField(this->worldVisual,this->textFormat);
							}
						}
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(409)
					this->updateLevelCheat();
					HX_STACK_LINE(410)
					if ((this->keyManager->isKeyDown((int)13))){
						HX_STACK_LINE(411)
						if ((this->switchToLevelCheat())){
							HX_STACK_LINE(412)
							this->startLevel();
						}
						else{
							HX_STACK_LINE(414)
							::String preambleText = ::com::text::attack::world::World_obj::LEVELS->__get(this->levelIndex).StaticCast< ::com::text::attack::levels::Level >()->getSomePreamble();		HX_STACK_VAR(preambleText,"preambleText");
							HX_STACK_LINE(415)
							if (((preambleText == null()))){
								HX_STACK_LINE(416)
								this->startPlay();
							}
							else{
								HX_STACK_LINE(418)
								this->worldVisual->set_text(preambleText);
							}
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(423)
					this->endGame(false);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(426)
					this->updateLevelCheat();
					HX_STACK_LINE(427)
					if ((this->keyManager->isKeyDown((int)13))){
						HX_STACK_LINE(428)
						this->switchToLevelCheat();
						HX_STACK_LINE(429)
						this->startLevel();
					}
				}
				;break;
				case (int)2: {
				}
				;break;
			}
		}
		HX_STACK_LINE(435)
		this->keyManager->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,update,(void))

Array< ::Dynamic > World_obj::LEVELS;

int World_obj::LEADING_IN_GAME;

int World_obj::LEADING_IN_TEXT;

int World_obj::BEGIN_LEVEL;

int World_obj::END_LEVEL;

::com::text::attack::world::World World_obj::instance;

int World_obj::WIDTH;

int World_obj::HEIGHT;


World_obj::World_obj()
{
}

void World_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(comets,"comets");
	HX_MARK_MEMBER_NAME(bullets,"bullets");
	HX_MARK_MEMBER_NAME(cometsToRemove,"cometsToRemove");
	HX_MARK_MEMBER_NAME(bulletsToAdd,"bulletsToAdd");
	HX_MARK_MEMBER_NAME(grid,"grid");
	HX_MARK_MEMBER_NAME(keyManager,"keyManager");
	HX_MARK_MEMBER_NAME(worldVisual,"worldVisual");
	HX_MARK_MEMBER_NAME(textFormat,"textFormat");
	HX_MARK_MEMBER_NAME(gameState,"gameState");
	HX_MARK_MEMBER_NAME(numBulletsAvail,"numBulletsAvail");
	HX_MARK_MEMBER_NAME(levelIndex,"levelIndex");
	HX_MARK_MEMBER_NAME(levelJumpString,"levelJumpString");
	::openfl::_v2::display::MovieClip_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void World_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(comets,"comets");
	HX_VISIT_MEMBER_NAME(bullets,"bullets");
	HX_VISIT_MEMBER_NAME(cometsToRemove,"cometsToRemove");
	HX_VISIT_MEMBER_NAME(bulletsToAdd,"bulletsToAdd");
	HX_VISIT_MEMBER_NAME(grid,"grid");
	HX_VISIT_MEMBER_NAME(keyManager,"keyManager");
	HX_VISIT_MEMBER_NAME(worldVisual,"worldVisual");
	HX_VISIT_MEMBER_NAME(textFormat,"textFormat");
	HX_VISIT_MEMBER_NAME(gameState,"gameState");
	HX_VISIT_MEMBER_NAME(numBulletsAvail,"numBulletsAvail");
	HX_VISIT_MEMBER_NAME(levelIndex,"levelIndex");
	HX_VISIT_MEMBER_NAME(levelJumpString,"levelJumpString");
	::openfl::_v2::display::MovieClip_obj::__Visit(HX_VISIT_ARG);
}

Dynamic World_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { return grid; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"LEVELS") ) { return LEVELS; }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"comets") ) { return comets; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bullets") ) { return bullets; }
		if (HX_FIELD_EQ(inName,"endGame") ) { return endGame_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameState") ) { return gameState; }
		if (HX_FIELD_EQ(inName,"nextLevel") ) { return nextLevel_dyn(); }
		if (HX_FIELD_EQ(inName,"startPlay") ) { return startPlay_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyManager") ) { return keyManager; }
		if (HX_FIELD_EQ(inName,"textFormat") ) { return textFormat; }
		if (HX_FIELD_EQ(inName,"levelIndex") ) { return levelIndex; }
		if (HX_FIELD_EQ(inName,"startLevel") ) { return startLevel_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldVisual") ) { return worldVisual; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletsToAdd") ) { return bulletsToAdd; }
		if (HX_FIELD_EQ(inName,"splashScreen") ) { return splashScreen_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cometsToRemove") ) { return cometsToRemove; }
		if (HX_FIELD_EQ(inName,"playingKeyDown") ) { return playingKeyDown_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"numBulletsAvail") ) { return numBulletsAvail; }
		if (HX_FIELD_EQ(inName,"levelJumpString") ) { return levelJumpString; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"resetWorldVisual") ) { return resetWorldVisual_dyn(); }
		if (HX_FIELD_EQ(inName,"updateLevelCheat") ) { return updateLevelCheat_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"centerWorldVisual") ) { return centerWorldVisual_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"collideBulletComet") ) { return collideBulletComet_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePlayerComet") ) { return collidePlayerComet_dyn(); }
		if (HX_FIELD_EQ(inName,"switchToLevelCheat") ) { return switchToLevelCheat_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic World_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { grid=inValue.Cast< ::com::text::attack::world::WorldGrid >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"LEVELS") ) { LEVELS=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::com::text::attack::world::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comets") ) { comets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bullets") ) { bullets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::text::attack::world::World >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameState") ) { gameState=inValue.Cast< ::com::text::attack::world::GameState >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyManager") ) { keyManager=inValue.Cast< ::com::text::attack::utiltiies::KeyManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textFormat") ) { textFormat=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"levelIndex") ) { levelIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldVisual") ) { worldVisual=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletsToAdd") ) { bulletsToAdd=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cometsToRemove") ) { cometsToRemove=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"numBulletsAvail") ) { numBulletsAvail=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"levelJumpString") ) { levelJumpString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void World_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("comets"));
	outFields->push(HX_CSTRING("bullets"));
	outFields->push(HX_CSTRING("cometsToRemove"));
	outFields->push(HX_CSTRING("bulletsToAdd"));
	outFields->push(HX_CSTRING("grid"));
	outFields->push(HX_CSTRING("keyManager"));
	outFields->push(HX_CSTRING("worldVisual"));
	outFields->push(HX_CSTRING("textFormat"));
	outFields->push(HX_CSTRING("gameState"));
	outFields->push(HX_CSTRING("numBulletsAvail"));
	outFields->push(HX_CSTRING("levelIndex"));
	outFields->push(HX_CSTRING("levelJumpString"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEVELS"),
	HX_CSTRING("LEADING_IN_GAME"),
	HX_CSTRING("LEADING_IN_TEXT"),
	HX_CSTRING("BEGIN_LEVEL"),
	HX_CSTRING("END_LEVEL"),
	HX_CSTRING("instance"),
	HX_CSTRING("WIDTH"),
	HX_CSTRING("HEIGHT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::text::attack::world::Player*/ ,(int)offsetof(World_obj,player),HX_CSTRING("player")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,comets),HX_CSTRING("comets")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,bullets),HX_CSTRING("bullets")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,cometsToRemove),HX_CSTRING("cometsToRemove")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,bulletsToAdd),HX_CSTRING("bulletsToAdd")},
	{hx::fsObject /*::com::text::attack::world::WorldGrid*/ ,(int)offsetof(World_obj,grid),HX_CSTRING("grid")},
	{hx::fsObject /*::com::text::attack::utiltiies::KeyManager*/ ,(int)offsetof(World_obj,keyManager),HX_CSTRING("keyManager")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(World_obj,worldVisual),HX_CSTRING("worldVisual")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(World_obj,textFormat),HX_CSTRING("textFormat")},
	{hx::fsObject /*::com::text::attack::world::GameState*/ ,(int)offsetof(World_obj,gameState),HX_CSTRING("gameState")},
	{hx::fsInt,(int)offsetof(World_obj,numBulletsAvail),HX_CSTRING("numBulletsAvail")},
	{hx::fsInt,(int)offsetof(World_obj,levelIndex),HX_CSTRING("levelIndex")},
	{hx::fsString,(int)offsetof(World_obj,levelJumpString),HX_CSTRING("levelJumpString")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("player"),
	HX_CSTRING("comets"),
	HX_CSTRING("bullets"),
	HX_CSTRING("cometsToRemove"),
	HX_CSTRING("bulletsToAdd"),
	HX_CSTRING("grid"),
	HX_CSTRING("keyManager"),
	HX_CSTRING("worldVisual"),
	HX_CSTRING("textFormat"),
	HX_CSTRING("gameState"),
	HX_CSTRING("numBulletsAvail"),
	HX_CSTRING("levelIndex"),
	HX_CSTRING("levelJumpString"),
	HX_CSTRING("added"),
	HX_CSTRING("splashScreen"),
	HX_CSTRING("nextLevel"),
	HX_CSTRING("startLevel"),
	HX_CSTRING("startPlay"),
	HX_CSTRING("endGame"),
	HX_CSTRING("centerWorldVisual"),
	HX_CSTRING("resetWorldVisual"),
	HX_CSTRING("collideBulletComet"),
	HX_CSTRING("collidePlayerComet"),
	HX_CSTRING("playingKeyDown"),
	HX_CSTRING("updateLevelCheat"),
	HX_CSTRING("switchToLevelCheat"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(World_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(World_obj::LEVELS,"LEVELS");
	HX_MARK_MEMBER_NAME(World_obj::LEADING_IN_GAME,"LEADING_IN_GAME");
	HX_MARK_MEMBER_NAME(World_obj::LEADING_IN_TEXT,"LEADING_IN_TEXT");
	HX_MARK_MEMBER_NAME(World_obj::BEGIN_LEVEL,"BEGIN_LEVEL");
	HX_MARK_MEMBER_NAME(World_obj::END_LEVEL,"END_LEVEL");
	HX_MARK_MEMBER_NAME(World_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(World_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(World_obj::HEIGHT,"HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(World_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(World_obj::LEVELS,"LEVELS");
	HX_VISIT_MEMBER_NAME(World_obj::LEADING_IN_GAME,"LEADING_IN_GAME");
	HX_VISIT_MEMBER_NAME(World_obj::LEADING_IN_TEXT,"LEADING_IN_TEXT");
	HX_VISIT_MEMBER_NAME(World_obj::BEGIN_LEVEL,"BEGIN_LEVEL");
	HX_VISIT_MEMBER_NAME(World_obj::END_LEVEL,"END_LEVEL");
	HX_VISIT_MEMBER_NAME(World_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(World_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(World_obj::HEIGHT,"HEIGHT");
};

#endif

Class World_obj::__mClass;

void World_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.world.World"), hx::TCanCast< World_obj> ,sStaticFields,sMemberFields,
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

void World_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/World.hx",27,0x2b0ef83c)
		{
			HX_STACK_LINE(28)
			::com::text::attack::levels::Level1 _g = ::com::text::attack::levels::Level1_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(29)
			::com::text::attack::levels::Level2 _g1 = ::com::text::attack::levels::Level2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(30)
			::com::text::attack::levels::Level3 _g2 = ::com::text::attack::levels::Level3_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(31)
			::com::text::attack::levels::Level4 _g3 = ::com::text::attack::levels::Level4_obj::__new();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(32)
			::com::text::attack::levels::Level5 _g4 = ::com::text::attack::levels::Level5_obj::__new();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(33)
			::com::text::attack::levels::Level6 _g5 = ::com::text::attack::levels::Level6_obj::__new();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(34)
			::com::text::attack::levels::Level7 _g6 = ::com::text::attack::levels::Level7_obj::__new();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(35)
			::com::text::attack::levels::Level8 _g7 = ::com::text::attack::levels::Level8_obj::__new();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(27)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5).Add(_g6).Add(_g7);
		}
		return null();
	}
};
	LEVELS= _Function_0_1::Block();
	LEADING_IN_GAME= (int)-5;
	LEADING_IN_TEXT= (int)1;
	BEGIN_LEVEL= (int)0;
	END_LEVEL= (int)7;
	WIDTH= (int)30;
	HEIGHT= (int)30;
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
