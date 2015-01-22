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
#ifndef INCLUDED_com_text_attack_levels_Level9
#include <com/text/attack/levels/Level9.h>
#endif
#ifndef INCLUDED_com_text_attack_utiltiies_KeyManager
#include <com/text/attack/utiltiies/KeyManager.h>
#endif
#ifndef INCLUDED_com_text_attack_utiltiies_SoundManager
#include <com/text/attack/utiltiies/SoundManager.h>
#endif
#ifndef INCLUDED_com_text_attack_world_Bouncer
#include <com/text/attack/world/Bouncer.h>
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
#ifndef INCLUDED_com_text_attack_world_Empty
#include <com/text/attack/world/Empty.h>
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
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
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
HX_STACK_FRAME("com.text.attack.world.World","new",0x64c87456,"com.text.attack.world.World.new","com/text/attack/world/World.hx",85,0x2b0ef83c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(86)
	super::__construct();
	HX_STACK_LINE(88)
	::com::text::attack::world::World_obj::instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(90)
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
		HX_STACK_FRAME("com.text.attack.world.World","added",0x0221e236,"com.text.attack.world.World.added","com/text/attack/world/World.hx",94,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(95)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(97)
		::openfl::_v2::text::Font font = ::openfl::_v2::Assets_obj::getFont(HX_CSTRING("fonts/me2.ttf"),null());		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(98)
		::openfl::_v2::text::TextFormat _g = ::openfl::_v2::text::TextFormat_obj::__new(font->fontName,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		this->textFormat = _g;
		HX_STACK_LINE(107)
		this->textFormat->size = (int)26;
		HX_STACK_LINE(110)
		::openfl::_v2::text::TextField _g1 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(110)
		this->worldVisual = _g1;
		HX_STACK_LINE(111)
		this->worldVisual->set_defaultTextFormat(this->textFormat);
		HX_STACK_LINE(112)
		this->worldVisual->set_width((int)700);
		HX_STACK_LINE(113)
		this->worldVisual->set_height((int)700);
		HX_STACK_LINE(114)
		this->worldVisual->set_wordWrap(true);
		HX_STACK_LINE(115)
		this->worldVisual->set_selectable(false);
		HX_STACK_LINE(116)
		this->worldVisual->set_embedFonts(true);
		HX_STACK_LINE(118)
		::openfl::_v2::text::TextField _g2 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(118)
		this->helpText = _g2;
		HX_STACK_LINE(119)
		this->helpText->set_defaultTextFormat(this->textFormat);
		HX_STACK_LINE(120)
		this->helpText->set_width((int)400);
		HX_STACK_LINE(121)
		this->helpText->set_height((int)700);
		HX_STACK_LINE(122)
		this->helpText->set_selectable(false);
		HX_STACK_LINE(123)
		this->helpText->set_embedFonts(true);
		HX_STACK_LINE(128)
		this->addChild(this->worldVisual);
		HX_STACK_LINE(130)
		this->levelIndex = (int)8;
		HX_STACK_LINE(132)
		this->splashScreen();
		HX_STACK_LINE(135)
		::com::text::attack::utiltiies::KeyManager _g3 = ::com::text::attack::utiltiies::KeyManager_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(135)
		this->keyManager = _g3;
		HX_STACK_LINE(136)
		::com::text::attack::utiltiies::SoundManager _g4 = ::com::text::attack::utiltiies::SoundManager_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(136)
		this->soundManager = _g4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(World_obj,added,(void))

Void World_obj::splashScreen( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","splashScreen",0xa871e57d,"com.text.attack.world.World.splashScreen","com/text/attack/world/World.hx",140,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		this->setWorldVisualFormat(true);
		HX_STACK_LINE(143)
		this->levelJumpString = HX_CSTRING("");
		HX_STACK_LINE(145)
		this->worldVisual->appendText(HX_CSTRING("> the\n"));
		HX_STACK_LINE(146)
		this->worldVisual->appendText(HX_CSTRING("> wise\n"));
		HX_STACK_LINE(147)
		this->worldVisual->appendText(HX_CSTRING("> computer\n"));
		HX_STACK_LINE(148)
		this->worldVisual->appendText(HX_CSTRING("> \n"));
		HX_STACK_LINE(149)
		this->worldVisual->appendText(HX_CSTRING("> [PRESS ENTER]\n"));
		HX_STACK_LINE(150)
		this->worldVisual->appendText(HX_CSTRING("> \n"));
		HX_STACK_LINE(151)
		this->worldVisual->appendText(HX_CSTRING("> UTGDDC \n"));
		HX_STACK_LINE(152)
		this->worldVisual->appendText(HX_CSTRING("> Game-Making Deathmatch"));
		HX_STACK_LINE(153)
		this->gameState = ::com::text::attack::world::GameState_obj::DEAD;
		HX_STACK_LINE(155)
		this->centerWorldVisual();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,splashScreen,(void))

Void World_obj::nextLevel( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","nextLevel",0x6d593007,"com.text.attack.world.World.nextLevel","com/text/attack/world/World.hx",160,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		if (((this->levelIndex == (int)8))){
			HX_STACK_LINE(163)
			this->levelIndex = (int)8;
			HX_STACK_LINE(164)
			this->endGame(true);
		}
		else{
			HX_STACK_LINE(167)
			(this->levelIndex)++;
			HX_STACK_LINE(168)
			this->startLevel();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,nextLevel,(void))

Void World_obj::startLevel( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","startLevel",0x75a9548c,"com.text.attack.world.World.startLevel","com/text/attack/world/World.hx",177,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		this->grid = null();
		HX_STACK_LINE(180)
		this->player = null();
		HX_STACK_LINE(181)
		this->comets = null();
		HX_STACK_LINE(182)
		this->bullets = null();
		HX_STACK_LINE(183)
		this->bouncers = null();
		HX_STACK_LINE(184)
		this->cometsToRemove = null();
		HX_STACK_LINE(185)
		this->bulletsToAdd = null();
		HX_STACK_LINE(187)
		this->setWorldVisualFormat(true);
		HX_STACK_LINE(189)
		this->gameState = ::com::text::attack::world::GameState_obj::PREAMBLE;
		HX_STACK_LINE(191)
		::com::text::attack::world::World_obj::LEVELS->__get(this->levelIndex).StaticCast< ::com::text::attack::levels::Level >()->resetPreamble();
		HX_STACK_LINE(192)
		::String _g = ::com::text::attack::world::World_obj::LEVELS->__get(this->levelIndex).StaticCast< ::com::text::attack::levels::Level >()->getSomePreamble();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(192)
		this->worldVisual->set_text(_g);
		HX_STACK_LINE(194)
		this->centerWorldVisual();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,startLevel,(void))

Void World_obj::startPlay( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","startPlay",0x56fea7ec,"com.text.attack.world.World.startPlay","com/text/attack/world/World.hx",201,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(202)
		::haxe::Log_obj::trace(HX_CSTRING("Starting the level"),hx::SourceInfo(HX_CSTRING("World.hx"),202,HX_CSTRING("com.text.attack.world.World"),HX_CSTRING("startPlay")));
		HX_STACK_LINE(204)
		::com::text::attack::levels::Level level = ::com::text::attack::world::World_obj::LEVELS->__get(this->levelIndex).StaticCast< ::com::text::attack::levels::Level >();		HX_STACK_VAR(level,"level");
		HX_STACK_LINE(206)
		this->setWorldVisualFormat(false);
		HX_STACK_LINE(209)
		::com::text::attack::world::WorldGrid _g = ::com::text::attack::world::WorldGrid_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(209)
		this->grid = _g;
		HX_STACK_LINE(211)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(211)
		this->comets = _g1;
		HX_STACK_LINE(212)
		Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(212)
		this->bullets = _g2;
		HX_STACK_LINE(213)
		Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(213)
		this->bouncers = _g3;
		HX_STACK_LINE(214)
		Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(214)
		this->cometsToRemove = _g4;
		HX_STACK_LINE(215)
		Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(215)
		this->bulletsToAdd = _g5;
		HX_STACK_LINE(216)
		this->numBulletsAvail = level->availableBullets;
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(218)
			while((true)){
				HX_STACK_LINE(218)
				if ((!(((_g6 < (int)30))))){
					HX_STACK_LINE(218)
					break;
				}
				HX_STACK_LINE(218)
				int y = (_g6)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(219)
				::String row = level->levelString.substr((y * (int)30),(int)30);		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(220)
				{
					HX_STACK_LINE(220)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(220)
					while((true)){
						HX_STACK_LINE(220)
						if ((!(((_g11 < (int)30))))){
							HX_STACK_LINE(220)
							break;
						}
						HX_STACK_LINE(220)
						int x = (_g11)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(221)
						::com::text::attack::world::Cell newCell;		HX_STACK_VAR(newCell,"newCell");
						HX_STACK_LINE(223)
						int _char = row.charCodeAt(x);		HX_STACK_VAR(_char,"char");
						HX_STACK_LINE(227)
						if (((_char == ::com::text::attack::world::CellType_obj::CometDown->symbol))){
							HX_STACK_LINE(228)
							::com::text::attack::world::Comet comet = ::com::text::attack::world::Comet_obj::__new(x,y,::com::text::attack::world::CellType_obj::CometDown);		HX_STACK_VAR(comet,"comet");
							HX_STACK_LINE(229)
							this->comets->push(comet);
							HX_STACK_LINE(230)
							newCell = comet;
						}
						else{
							HX_STACK_LINE(232)
							if (((_char == ::com::text::attack::world::CellType_obj::CometLeft->symbol))){
								HX_STACK_LINE(233)
								::com::text::attack::world::Comet comet = ::com::text::attack::world::Comet_obj::__new(x,y,::com::text::attack::world::CellType_obj::CometLeft);		HX_STACK_VAR(comet,"comet");
								HX_STACK_LINE(234)
								this->comets->push(comet);
								HX_STACK_LINE(235)
								newCell = comet;
							}
							else{
								HX_STACK_LINE(237)
								if (((_char == ::com::text::attack::world::CellType_obj::CometRight->symbol))){
									HX_STACK_LINE(238)
									::com::text::attack::world::Comet comet = ::com::text::attack::world::Comet_obj::__new(x,y,::com::text::attack::world::CellType_obj::CometRight);		HX_STACK_VAR(comet,"comet");
									HX_STACK_LINE(239)
									this->comets->push(comet);
									HX_STACK_LINE(240)
									newCell = comet;
								}
								else{
									HX_STACK_LINE(242)
									if (((_char == ::com::text::attack::world::CellType_obj::Bouncer->symbol))){
										HX_STACK_LINE(243)
										::com::text::attack::world::Bouncer bouncer = ::com::text::attack::world::Bouncer_obj::__new(x,y);		HX_STACK_VAR(bouncer,"bouncer");
										HX_STACK_LINE(244)
										this->bouncers->push(bouncer);
										HX_STACK_LINE(245)
										newCell = bouncer;
									}
									else{
										HX_STACK_LINE(247)
										if (((_char == ::com::text::attack::world::CellType_obj::Player->symbol))){
											HX_STACK_LINE(248)
											::com::text::attack::world::Player _g61 = ::com::text::attack::world::Player_obj::__new(x,y);		HX_STACK_VAR(_g61,"_g61");
											HX_STACK_LINE(248)
											this->player = _g61;
											HX_STACK_LINE(249)
											newCell = this->player;
										}
										else{
											HX_STACK_LINE(251)
											::com::text::attack::world::Empty _g7 = ::com::text::attack::world::Empty_obj::__new(x,y);		HX_STACK_VAR(_g7,"_g7");
											HX_STACK_LINE(251)
											newCell = _g7;
										}
									}
								}
							}
						}
						HX_STACK_LINE(254)
						this->grid->set(x,y,newCell);
					}
				}
			}
		}
		HX_STACK_LINE(258)
		this->resetWorldVisual();
		HX_STACK_LINE(259)
		this->grid->addGridToTextField(this->worldVisual,this->textFormat);
		HX_STACK_LINE(261)
		this->centerWorldVisual();
		HX_STACK_LINE(263)
		this->gameState = ::com::text::attack::world::GameState_obj::PLAYING;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,startPlay,(void))

Void World_obj::endGame( bool success){
{
		HX_STACK_FRAME("com.text.attack.world.World","endGame",0xca188463,"com.text.attack.world.World.endGame","com/text/attack/world/World.hx",271,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(success,"success")
		HX_STACK_LINE(272)
		this->setWorldVisualFormat(true);
		HX_STACK_LINE(274)
		if ((success)){
			HX_STACK_LINE(275)
			this->worldVisual->set_text(HX_CSTRING("> In the end, \"I hear and I forget. I see and I remember. I do and I understand.\" \n> Press [Enter] to play again."));
		}
		else{
			HX_STACK_LINE(277)
			this->worldVisual->set_text(HX_CSTRING("> I've died.\n> But I will try again. \n> [PRESS ENTER]"));
			HX_STACK_LINE(278)
			this->soundManager->playEndSound();
		}
		HX_STACK_LINE(281)
		this->grid = null();
		HX_STACK_LINE(282)
		this->player = null();
		HX_STACK_LINE(283)
		this->comets = null();
		HX_STACK_LINE(284)
		this->bullets = null();
		HX_STACK_LINE(286)
		this->gameState = ::com::text::attack::world::GameState_obj::DEAD;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(World_obj,endGame,(void))

Void World_obj::setWorldVisualFormat( bool forText){
{
		HX_STACK_FRAME("com.text.attack.world.World","setWorldVisualFormat",0xb48e40d1,"com.text.attack.world.World.setWorldVisualFormat","com/text/attack/world/World.hx",290,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(forText,"forText")
		HX_STACK_LINE(291)
		::haxe::Log_obj::trace(HX_CSTRING("Updating text leading"),hx::SourceInfo(HX_CSTRING("World.hx"),291,HX_CSTRING("com.text.attack.world.World"),HX_CSTRING("setWorldVisualFormat")));
		HX_STACK_LINE(292)
		if ((forText)){
			HX_STACK_LINE(293)
			this->textFormat->leading = (int)3;
			HX_STACK_LINE(294)
			this->textFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::LEFT;
			HX_STACK_LINE(295)
			this->textFormat->color = (int)16777215;
			HX_STACK_LINE(296)
			this->worldVisual->set_width((int)800);
		}
		else{
			HX_STACK_LINE(298)
			this->textFormat->leading = (int)-5;
			HX_STACK_LINE(299)
			this->textFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
			HX_STACK_LINE(300)
			this->worldVisual->set_width((int)700);
		}
		HX_STACK_LINE(303)
		this->rotate((int)0);
		HX_STACK_LINE(305)
		this->worldVisual->set_defaultTextFormat(this->textFormat);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(World_obj,setWorldVisualFormat,(void))

Void World_obj::centerWorldVisual( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","centerWorldVisual",0x0846e553,"com.text.attack.world.World.centerWorldVisual","com/text/attack/world/World.hx",310,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(311)
		::haxe::Log_obj::trace(HX_CSTRING("Centering world visual"),hx::SourceInfo(HX_CSTRING("World.hx"),311,HX_CSTRING("com.text.attack.world.World"),HX_CSTRING("centerWorldVisual")));
		HX_STACK_LINE(313)
		Float _g = -(this->worldVisual->get_width());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(313)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(313)
		this->worldVisual->set_x(_g1);
		HX_STACK_LINE(314)
		Float _g2 = -(this->worldVisual->get_height());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(314)
		Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(314)
		this->worldVisual->set_y(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,centerWorldVisual,(void))

Void World_obj::resetWorldVisual( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","resetWorldVisual",0x2f1fe36d,"com.text.attack.world.World.resetWorldVisual","com/text/attack/world/World.hx",318,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(319)
		this->worldVisual->set_text(HX_CSTRING(""));
		HX_STACK_LINE(321)
		this->textFormat->color = (int)16777215;
		HX_STACK_LINE(323)
		this->worldVisual->appendText(HX_CSTRING("Bullets: "));
		HX_STACK_LINE(324)
		this->worldVisual->appendText((this->numBulletsAvail + HX_CSTRING("")));
		HX_STACK_LINE(325)
		this->worldVisual->appendText(HX_CSTRING("\t Level "));
		HX_STACK_LINE(326)
		this->worldVisual->appendText(((this->levelIndex + (int)1) + HX_CSTRING("")));
		HX_STACK_LINE(327)
		this->worldVisual->appendText(HX_CSTRING("\n"));
		HX_STACK_LINE(329)
		this->worldVisual->setTextFormat(this->textFormat,(int)0,this->worldVisual->get_text().length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,resetWorldVisual,(void))

bool World_obj::okToWallWalk( ){
	HX_STACK_FRAME("com.text.attack.world.World","okToWallWalk",0x56655554,"com.text.attack.world.World.okToWallWalk","com/text/attack/world/World.hx",334,0x2b0ef83c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(334)
	return (this->levelIndex >= (int)1000);
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,okToWallWalk,return )

bool World_obj::playingKeyDown( ){
	HX_STACK_FRAME("com.text.attack.world.World","playingKeyDown",0x33a8ff9d,"com.text.attack.world.World.playingKeyDown","com/text/attack/world/World.hx",339,0x2b0ef83c)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::com::text::attack::world::World_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/World.hx",342,0x2b0ef83c)
			{
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::com::text::attack::world::World_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/World.hx",343,0x2b0ef83c)
						{
							struct _Function_3_1{
								inline static bool Block( hx::ObjectPtr< ::com::text::attack::world::World_obj > __this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/World.hx",344,0x2b0ef83c)
									{
										HX_STACK_LINE(344)
										return (  ((__this->keyManager->isKeyDown((int)67))) ? bool((__this->numBulletsAvail > (int)0)) : bool(false) );
									}
									return null();
								}
							};
							HX_STACK_LINE(343)
							return (  ((!(((  ((__this->keyManager->isKeyDown((int)90))) ? bool((__this->numBulletsAvail > (int)0)) : bool(false) ))))) ? bool(_Function_3_1::Block(__this)) : bool(true) );
						}
						return null();
					}
				};
				HX_STACK_LINE(342)
				return (  (((__this->levelIndex >= (int)2))) ? bool(_Function_2_1::Block(__this)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(339)
	if ((!(((  ((!(((  ((!(((  ((!(((  ((this->keyManager->isKeyDown((int)88))) ? bool((this->numBulletsAvail > (int)0)) : bool(false) ))))) ? bool(this->keyManager->isKeyDown((int)37)) : bool(true) ))))) ? bool(this->keyManager->isKeyDown((int)39)) : bool(true) ))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))))){
		HX_STACK_LINE(345)
		if (((this->levelIndex >= (int)4))){
			HX_STACK_LINE(346)
			return this->keyManager->isKeyDown((int)38);
		}
		else{
			HX_STACK_LINE(345)
			return false;
		}
	}
	else{
		HX_STACK_LINE(339)
		return true;
	}
	HX_STACK_LINE(339)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,playingKeyDown,return )

Void World_obj::updateLevelCheat( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","updateLevelCheat",0xc0ebdca2,"com.text.attack.world.World.updateLevelCheat","com/text/attack/world/World.hx",350,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(351)
		int numKey = this->keyManager->getNumberKeyDown();		HX_STACK_VAR(numKey,"numKey");
		HX_STACK_LINE(352)
		if (((numKey != (int)-1))){
			HX_STACK_LINE(353)
			::String _g = ::String::fromCharCode(numKey);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(353)
			hx::AddEq(this->levelJumpString,_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,updateLevelCheat,(void))

bool World_obj::switchToLevelCheat( ){
	HX_STACK_FRAME("com.text.attack.world.World","switchToLevelCheat",0x55fe9928,"com.text.attack.world.World.switchToLevelCheat","com/text/attack/world/World.hx",358,0x2b0ef83c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(359)
	if (((this->levelJumpString.length > (int)0))){
		HX_STACK_LINE(360)
		int num = ::Std_obj::parseInt(this->levelJumpString);		HX_STACK_VAR(num,"num");
		HX_STACK_LINE(362)
		this->levelJumpString = HX_CSTRING("");
		HX_STACK_LINE(364)
		if (((num <= (int)8))){
			HX_STACK_LINE(365)
			this->levelIndex = num;
			HX_STACK_LINE(366)
			return true;
		}
	}
	HX_STACK_LINE(370)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,switchToLevelCheat,return )

Void World_obj::splitComet( ::com::text::attack::world::Comet comet,::com::text::attack::world::Bouncer bouncer){
{
		HX_STACK_FRAME("com.text.attack.world.World","splitComet",0x00c78080,"com.text.attack.world.World.splitComet","com/text/attack/world/World.hx",374,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(comet,"comet")
		HX_STACK_ARG(bouncer,"bouncer")
		HX_STACK_LINE(375)
		int x1 = bouncer->x;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(376)
		int y1 = bouncer->y;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(377)
		int x2 = bouncer->x;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(378)
		int y2 = bouncer->y;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(379)
		::com::text::attack::world::CellType dir1;		HX_STACK_VAR(dir1,"dir1");
		HX_STACK_LINE(380)
		::com::text::attack::world::CellType dir2;		HX_STACK_VAR(dir2,"dir2");
		HX_STACK_LINE(382)
		if (((bool((comet->cellType == ::com::text::attack::world::CellType_obj::CometLeft)) || bool((comet->cellType == ::com::text::attack::world::CellType_obj::CometRight))))){
			HX_STACK_LINE(384)
			y1 = (bouncer->y - (int)1);
			HX_STACK_LINE(385)
			y2 = (bouncer->y + (int)1);
			HX_STACK_LINE(386)
			dir1 = ::com::text::attack::world::CellType_obj::CometUp;
			HX_STACK_LINE(387)
			dir2 = ::com::text::attack::world::CellType_obj::CometDown;
		}
		else{
			HX_STACK_LINE(389)
			x1 = (bouncer->x - (int)1);
			HX_STACK_LINE(390)
			x2 = (bouncer->x + (int)1);
			HX_STACK_LINE(391)
			dir1 = ::com::text::attack::world::CellType_obj::CometLeft;
			HX_STACK_LINE(392)
			dir2 = ::com::text::attack::world::CellType_obj::CometRight;
		}
		HX_STACK_LINE(395)
		::haxe::Log_obj::trace(HX_CSTRING("Creating the two new comets."),hx::SourceInfo(HX_CSTRING("World.hx"),395,HX_CSTRING("com.text.attack.world.World"),HX_CSTRING("splitComet")));
		HX_STACK_LINE(396)
		::com::text::attack::world::Comet newComet1 = ::com::text::attack::world::Comet_obj::__new(x1,y1,dir1);		HX_STACK_VAR(newComet1,"newComet1");
		HX_STACK_LINE(397)
		::com::text::attack::world::Comet newComet2 = ::com::text::attack::world::Comet_obj::__new(x2,y2,dir2);		HX_STACK_VAR(newComet2,"newComet2");
		HX_STACK_LINE(398)
		this->comets->push(newComet1);
		HX_STACK_LINE(399)
		this->comets->push(newComet2);
		HX_STACK_LINE(401)
		this->grid->set(x1,y1,newComet1);
		HX_STACK_LINE(402)
		this->grid->set(x2,y2,newComet2);
		HX_STACK_LINE(404)
		::haxe::Log_obj::trace(HX_CSTRING("Done creating the two new comets."),hx::SourceInfo(HX_CSTRING("World.hx"),404,HX_CSTRING("com.text.attack.world.World"),HX_CSTRING("splitComet")));
		HX_STACK_LINE(405)
		comet->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(World_obj,splitComet,(void))

Void World_obj::rotate( int amount){
{
		HX_STACK_FRAME("com.text.attack.world.World","rotate",0x078e0025,"com.text.attack.world.World.rotate","com/text/attack/world/World.hx",410,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(410)
		this->set_rotation(amount);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(World_obj,rotate,(void))

Void World_obj::update( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","update",0xc3733fd3,"com.text.attack.world.World.update","com/text/attack/world/World.hx",414,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(415)
		{
			HX_STACK_LINE(415)
			::com::text::attack::world::GameState _g = this->gameState;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(415)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(417)
					if ((this->playingKeyDown())){
						HX_STACK_LINE(418)
						if (((::com::text::attack::world::World_obj::instance->comets->length == (int)0))){
							HX_STACK_LINE(419)
							::haxe::Log_obj::trace(HX_CSTRING("ALL COMETS DESTROYED"),hx::SourceInfo(HX_CSTRING("World.hx"),419,HX_CSTRING("com.text.attack.world.World"),HX_CSTRING("update")));
							HX_STACK_LINE(420)
							::com::text::attack::world::World_obj::instance->nextLevel();
						}
						else{
							HX_STACK_LINE(423)
							{
								HX_STACK_LINE(423)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(423)
								Array< ::Dynamic > _g2 = this->bullets;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(423)
								while((true)){
									HX_STACK_LINE(423)
									if ((!(((_g1 < _g2->length))))){
										HX_STACK_LINE(423)
										break;
									}
									HX_STACK_LINE(423)
									::com::text::attack::world::Bullet bullet = _g2->__get(_g1).StaticCast< ::com::text::attack::world::Bullet >();		HX_STACK_VAR(bullet,"bullet");
									HX_STACK_LINE(423)
									++(_g1);
									HX_STACK_LINE(424)
									bullet->update();
								}
							}
							HX_STACK_LINE(428)
							this->player->update();
							HX_STACK_LINE(431)
							{
								HX_STACK_LINE(431)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(431)
								Array< ::Dynamic > _g2 = this->comets;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(431)
								while((true)){
									HX_STACK_LINE(431)
									if ((!(((_g1 < _g2->length))))){
										HX_STACK_LINE(431)
										break;
									}
									HX_STACK_LINE(431)
									::com::text::attack::world::Comet comet = _g2->__get(_g1).StaticCast< ::com::text::attack::world::Comet >();		HX_STACK_VAR(comet,"comet");
									HX_STACK_LINE(431)
									++(_g1);
									HX_STACK_LINE(432)
									comet->update();
								}
							}
							HX_STACK_LINE(435)
							if (((this->gameState == ::com::text::attack::world::GameState_obj::ENDING))){
								HX_STACK_LINE(436)
								this->endGame(false);
							}
							else{
								HX_STACK_LINE(438)
								this->resolveBulletCollision();
								HX_STACK_LINE(439)
								this->resolveCometCollision();
								HX_STACK_LINE(442)
								{
									HX_STACK_LINE(442)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(442)
									Array< ::Dynamic > _g2 = this->bullets;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(442)
									while((true)){
										HX_STACK_LINE(442)
										if ((!(((_g1 < _g2->length))))){
											HX_STACK_LINE(442)
											break;
										}
										HX_STACK_LINE(442)
										::com::text::attack::world::Bullet bullet = _g2->__get(_g1).StaticCast< ::com::text::attack::world::Bullet >();		HX_STACK_VAR(bullet,"bullet");
										HX_STACK_LINE(442)
										++(_g1);
										HX_STACK_LINE(443)
										bullet->applyMove();
									}
								}
								HX_STACK_LINE(447)
								{
									HX_STACK_LINE(447)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(447)
									Array< ::Dynamic > _g2 = this->comets;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(447)
									while((true)){
										HX_STACK_LINE(447)
										if ((!(((_g1 < _g2->length))))){
											HX_STACK_LINE(447)
											break;
										}
										HX_STACK_LINE(447)
										::com::text::attack::world::Comet comet = _g2->__get(_g1).StaticCast< ::com::text::attack::world::Comet >();		HX_STACK_VAR(comet,"comet");
										HX_STACK_LINE(447)
										++(_g1);
										HX_STACK_LINE(448)
										comet->applyMove();
									}
								}
								HX_STACK_LINE(452)
								this->player->applyMove();
								HX_STACK_LINE(455)
								this->resetWorldVisual();
								HX_STACK_LINE(456)
								this->grid->addGridToTextField(this->worldVisual,this->textFormat);
							}
						}
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(461)
					this->updateLevelCheat();
					HX_STACK_LINE(462)
					if ((this->keyManager->isKeyDown((int)13))){
						HX_STACK_LINE(463)
						if ((this->switchToLevelCheat())){
							HX_STACK_LINE(464)
							this->startLevel();
						}
						else{
							HX_STACK_LINE(466)
							::String preambleText = ::com::text::attack::world::World_obj::LEVELS->__get(this->levelIndex).StaticCast< ::com::text::attack::levels::Level >()->getSomePreamble();		HX_STACK_VAR(preambleText,"preambleText");
							HX_STACK_LINE(467)
							if (((preambleText == null()))){
								HX_STACK_LINE(468)
								this->startPlay();
							}
							else{
								HX_STACK_LINE(470)
								this->worldVisual->set_text(preambleText);
							}
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(475)
					this->endGame(false);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(478)
					this->updateLevelCheat();
					HX_STACK_LINE(479)
					if ((this->keyManager->isKeyDown((int)13))){
						HX_STACK_LINE(480)
						this->switchToLevelCheat();
						HX_STACK_LINE(481)
						this->startLevel();
					}
				}
				;break;
				case (int)2: {
				}
				;break;
			}
		}
		HX_STACK_LINE(487)
		this->keyManager->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,update,(void))

Void World_obj::resolveBulletCollision( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","resolveBulletCollision",0x18172a0e,"com.text.attack.world.World.resolveBulletCollision","com/text/attack/world/World.hx",491,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(492)
		Array< ::Dynamic > bulletsClone = this->bullets->copy();		HX_STACK_VAR(bulletsClone,"bulletsClone");
		HX_STACK_LINE(493)
		{
			HX_STACK_LINE(493)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(493)
			int _g = bulletsClone->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(493)
			while((true)){
				HX_STACK_LINE(493)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(493)
					break;
				}
				HX_STACK_LINE(493)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(494)
				::com::text::attack::world::Bullet bullet = bulletsClone->__get(i).StaticCast< ::com::text::attack::world::Bullet >();		HX_STACK_VAR(bullet,"bullet");
				HX_STACK_LINE(495)
				{
					HX_STACK_LINE(495)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(495)
					Array< ::Dynamic > _g3 = this->bouncers;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(495)
					while((true)){
						HX_STACK_LINE(495)
						if ((!(((_g2 < _g3->length))))){
							HX_STACK_LINE(495)
							break;
						}
						HX_STACK_LINE(495)
						::com::text::attack::world::Bouncer bouncer = _g3->__get(_g2).StaticCast< ::com::text::attack::world::Bouncer >();		HX_STACK_VAR(bouncer,"bouncer");
						HX_STACK_LINE(495)
						++(_g2);
						HX_STACK_LINE(496)
						if ((bullet->newPosCollides(bouncer))){
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,resolveBulletCollision,(void))

Void World_obj::resolveCometCollision( ){
{
		HX_STACK_FRAME("com.text.attack.world.World","resolveCometCollision",0xff5ec4e4,"com.text.attack.world.World.resolveCometCollision","com/text/attack/world/World.hx",504,0x2b0ef83c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(505)
		Array< ::Dynamic > cometsClone = this->comets->copy();		HX_STACK_VAR(cometsClone,"cometsClone");
		HX_STACK_LINE(506)
		{
			HX_STACK_LINE(506)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(506)
			int _g = cometsClone->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(506)
			while((true)){
				HX_STACK_LINE(506)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(506)
					break;
				}
				HX_STACK_LINE(506)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(507)
				::com::text::attack::world::Comet comet = cometsClone->__get(i).StaticCast< ::com::text::attack::world::Comet >();		HX_STACK_VAR(comet,"comet");
				HX_STACK_LINE(510)
				if (((  ((comet->newPosCollides(this->player))) ? bool(!(this->player->justShot)) : bool(false) ))){
					HX_STACK_LINE(511)
					this->endGame(false);
					HX_STACK_LINE(512)
					return null();
				}
				else{
					HX_STACK_LINE(516)
					bool collidedWithABullet = false;		HX_STACK_VAR(collidedWithABullet,"collidedWithABullet");
					HX_STACK_LINE(517)
					{
						HX_STACK_LINE(517)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(517)
						Array< ::Dynamic > _g3 = this->bullets;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(517)
						while((true)){
							HX_STACK_LINE(517)
							if ((!(((_g2 < _g3->length))))){
								HX_STACK_LINE(517)
								break;
							}
							HX_STACK_LINE(517)
							::com::text::attack::world::Bullet bullet = _g3->__get(_g2).StaticCast< ::com::text::attack::world::Bullet >();		HX_STACK_VAR(bullet,"bullet");
							HX_STACK_LINE(517)
							++(_g2);
							HX_STACK_LINE(518)
							::com::text::attack::world::Bullet tempBullet = ::com::text::attack::world::Bullet_obj::__new(bullet->newX,(bullet->newY + (int)1),(int)0,(int)0);		HX_STACK_VAR(tempBullet,"tempBullet");
							HX_STACK_LINE(521)
							if ((comet->newPosCollides(bullet))){
								HX_STACK_LINE(523)
								comet->destroy();
								HX_STACK_LINE(524)
								collidedWithABullet = true;
							}
							else{
								HX_STACK_LINE(526)
								if ((comet->newPosCollides(tempBullet))){
									HX_STACK_LINE(528)
									comet->destroy();
									HX_STACK_LINE(529)
									collidedWithABullet = true;
									HX_STACK_LINE(530)
									this->grid->clear(tempBullet->x,tempBullet->y);
								}
							}
						}
					}
					HX_STACK_LINE(534)
					bool collidedWithABouncer = false;		HX_STACK_VAR(collidedWithABouncer,"collidedWithABouncer");
					HX_STACK_LINE(536)
					if ((!(collidedWithABullet))){
						HX_STACK_LINE(538)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(538)
						Array< ::Dynamic > _g3 = this->bouncers;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(538)
						while((true)){
							HX_STACK_LINE(538)
							if ((!(((_g2 < _g3->length))))){
								HX_STACK_LINE(538)
								break;
							}
							HX_STACK_LINE(538)
							::com::text::attack::world::Bouncer bouncer = _g3->__get(_g2).StaticCast< ::com::text::attack::world::Bouncer >();		HX_STACK_VAR(bouncer,"bouncer");
							HX_STACK_LINE(538)
							++(_g2);
							HX_STACK_LINE(539)
							if ((comet->newPosCollides(bouncer))){
								HX_STACK_LINE(541)
								this->splitComet(comet,bouncer);
								HX_STACK_LINE(542)
								collidedWithABouncer = true;
							}
						}
					}
					HX_STACK_LINE(547)
					if (((bool(!(collidedWithABullet)) && bool(!(collidedWithABouncer))))){
						HX_STACK_LINE(548)
						comet->applyMove();
					}
				}
			}
		}
		HX_STACK_LINE(553)
		if (((this->comets->length == cometsClone->length))){
			HX_STACK_LINE(554)
			this->soundManager->playRandomNote();
		}
		else{
			HX_STACK_LINE(556)
			this->soundManager->playRandomChord();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,resolveCometCollision,(void))

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
	HX_MARK_MEMBER_NAME(bouncers,"bouncers");
	HX_MARK_MEMBER_NAME(cometsToRemove,"cometsToRemove");
	HX_MARK_MEMBER_NAME(bulletsToAdd,"bulletsToAdd");
	HX_MARK_MEMBER_NAME(grid,"grid");
	HX_MARK_MEMBER_NAME(keyManager,"keyManager");
	HX_MARK_MEMBER_NAME(soundManager,"soundManager");
	HX_MARK_MEMBER_NAME(worldVisual,"worldVisual");
	HX_MARK_MEMBER_NAME(textFormat,"textFormat");
	HX_MARK_MEMBER_NAME(helpText,"helpText");
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
	HX_VISIT_MEMBER_NAME(bouncers,"bouncers");
	HX_VISIT_MEMBER_NAME(cometsToRemove,"cometsToRemove");
	HX_VISIT_MEMBER_NAME(bulletsToAdd,"bulletsToAdd");
	HX_VISIT_MEMBER_NAME(grid,"grid");
	HX_VISIT_MEMBER_NAME(keyManager,"keyManager");
	HX_VISIT_MEMBER_NAME(soundManager,"soundManager");
	HX_VISIT_MEMBER_NAME(worldVisual,"worldVisual");
	HX_VISIT_MEMBER_NAME(textFormat,"textFormat");
	HX_VISIT_MEMBER_NAME(helpText,"helpText");
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
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bullets") ) { return bullets; }
		if (HX_FIELD_EQ(inName,"endGame") ) { return endGame_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"bouncers") ) { return bouncers; }
		if (HX_FIELD_EQ(inName,"helpText") ) { return helpText; }
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
		if (HX_FIELD_EQ(inName,"splitComet") ) { return splitComet_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldVisual") ) { return worldVisual; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletsToAdd") ) { return bulletsToAdd; }
		if (HX_FIELD_EQ(inName,"soundManager") ) { return soundManager; }
		if (HX_FIELD_EQ(inName,"splashScreen") ) { return splashScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"okToWallWalk") ) { return okToWallWalk_dyn(); }
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
		if (HX_FIELD_EQ(inName,"switchToLevelCheat") ) { return switchToLevelCheat_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setWorldVisualFormat") ) { return setWorldVisualFormat_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"resolveCometCollision") ) { return resolveCometCollision_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"resolveBulletCollision") ) { return resolveBulletCollision_dyn(); }
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
		if (HX_FIELD_EQ(inName,"bouncers") ) { bouncers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"helpText") ) { helpText=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"soundManager") ) { soundManager=inValue.Cast< ::com::text::attack::utiltiies::SoundManager >(); return inValue; }
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
	outFields->push(HX_CSTRING("bouncers"));
	outFields->push(HX_CSTRING("cometsToRemove"));
	outFields->push(HX_CSTRING("bulletsToAdd"));
	outFields->push(HX_CSTRING("grid"));
	outFields->push(HX_CSTRING("keyManager"));
	outFields->push(HX_CSTRING("soundManager"));
	outFields->push(HX_CSTRING("worldVisual"));
	outFields->push(HX_CSTRING("textFormat"));
	outFields->push(HX_CSTRING("helpText"));
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
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,bouncers),HX_CSTRING("bouncers")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,cometsToRemove),HX_CSTRING("cometsToRemove")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(World_obj,bulletsToAdd),HX_CSTRING("bulletsToAdd")},
	{hx::fsObject /*::com::text::attack::world::WorldGrid*/ ,(int)offsetof(World_obj,grid),HX_CSTRING("grid")},
	{hx::fsObject /*::com::text::attack::utiltiies::KeyManager*/ ,(int)offsetof(World_obj,keyManager),HX_CSTRING("keyManager")},
	{hx::fsObject /*::com::text::attack::utiltiies::SoundManager*/ ,(int)offsetof(World_obj,soundManager),HX_CSTRING("soundManager")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(World_obj,worldVisual),HX_CSTRING("worldVisual")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(World_obj,textFormat),HX_CSTRING("textFormat")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(World_obj,helpText),HX_CSTRING("helpText")},
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
	HX_CSTRING("bouncers"),
	HX_CSTRING("cometsToRemove"),
	HX_CSTRING("bulletsToAdd"),
	HX_CSTRING("grid"),
	HX_CSTRING("keyManager"),
	HX_CSTRING("soundManager"),
	HX_CSTRING("worldVisual"),
	HX_CSTRING("textFormat"),
	HX_CSTRING("helpText"),
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
	HX_CSTRING("setWorldVisualFormat"),
	HX_CSTRING("centerWorldVisual"),
	HX_CSTRING("resetWorldVisual"),
	HX_CSTRING("okToWallWalk"),
	HX_CSTRING("playingKeyDown"),
	HX_CSTRING("updateLevelCheat"),
	HX_CSTRING("switchToLevelCheat"),
	HX_CSTRING("splitComet"),
	HX_CSTRING("rotate"),
	HX_CSTRING("update"),
	HX_CSTRING("resolveBulletCollision"),
	HX_CSTRING("resolveCometCollision"),
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
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/text/attack/world/World.hx",31,0x2b0ef83c)
		{
			HX_STACK_LINE(32)
			::com::text::attack::levels::Level1 _g = ::com::text::attack::levels::Level1_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			::com::text::attack::levels::Level2 _g1 = ::com::text::attack::levels::Level2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(34)
			::com::text::attack::levels::Level3 _g2 = ::com::text::attack::levels::Level3_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(35)
			::com::text::attack::levels::Level4 _g3 = ::com::text::attack::levels::Level4_obj::__new();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(36)
			::com::text::attack::levels::Level5 _g4 = ::com::text::attack::levels::Level5_obj::__new();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(37)
			::com::text::attack::levels::Level6 _g5 = ::com::text::attack::levels::Level6_obj::__new();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(38)
			::com::text::attack::levels::Level7 _g6 = ::com::text::attack::levels::Level7_obj::__new();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(39)
			::com::text::attack::levels::Level8 _g7 = ::com::text::attack::levels::Level8_obj::__new();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(40)
			::com::text::attack::levels::Level9 _g8 = ::com::text::attack::levels::Level9_obj::__new();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(31)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5).Add(_g6).Add(_g7).Add(_g8);
		}
		return null();
	}
};
	LEVELS= _Function_0_1::Block();
	LEADING_IN_GAME= (int)-5;
	LEADING_IN_TEXT= (int)3;
	BEGIN_LEVEL= (int)8;
	END_LEVEL= (int)8;
	WIDTH= (int)30;
	HEIGHT= (int)30;
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world
