#ifndef INCLUDED_com_text_attack_world_World
#define INCLUDED_com_text_attack_world_World

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/MovieClip.h>
HX_DECLARE_CLASS4(com,text,attack,levels,Level)
HX_DECLARE_CLASS4(com,text,attack,utiltiies,KeyManager)
HX_DECLARE_CLASS4(com,text,attack,world,Bullet)
HX_DECLARE_CLASS4(com,text,attack,world,Cell)
HX_DECLARE_CLASS4(com,text,attack,world,Comet)
HX_DECLARE_CLASS4(com,text,attack,world,GameState)
HX_DECLARE_CLASS4(com,text,attack,world,Player)
HX_DECLARE_CLASS4(com,text,attack,world,World)
HX_DECLARE_CLASS4(com,text,attack,world,WorldGrid)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,MovieClip)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)
namespace com{
namespace text{
namespace attack{
namespace world{


class HXCPP_CLASS_ATTRIBUTES  World_obj : public ::openfl::_v2::display::MovieClip_obj{
	public:
		typedef ::openfl::_v2::display::MovieClip_obj super;
		typedef World_obj OBJ_;
		World_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< World_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~World_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("World"); }

		::com::text::attack::world::Player player;
		Array< ::Dynamic > comets;
		Array< ::Dynamic > bullets;
		Array< ::Dynamic > cometsToRemove;
		Array< ::Dynamic > bulletsToAdd;
		::com::text::attack::world::WorldGrid grid;
		::com::text::attack::utiltiies::KeyManager keyManager;
		::openfl::_v2::text::TextField worldVisual;
		::openfl::_v2::text::TextFormat textFormat;
		::com::text::attack::world::GameState gameState;
		int numBulletsAvail;
		int levelIndex;
		::String levelJumpString;
		virtual Void added( ::openfl::_v2::events::Event event);
		Dynamic added_dyn();

		virtual Void splashScreen( );
		Dynamic splashScreen_dyn();

		virtual Void nextLevel( );
		Dynamic nextLevel_dyn();

		virtual Void startLevel( );
		Dynamic startLevel_dyn();

		virtual Void startPlay( );
		Dynamic startPlay_dyn();

		virtual Void endGame( bool success);
		Dynamic endGame_dyn();

		virtual Void centerWorldVisual( );
		Dynamic centerWorldVisual_dyn();

		virtual Void resetWorldVisual( );
		Dynamic resetWorldVisual_dyn();

		virtual Void collideBulletComet( ::com::text::attack::world::Bullet bullet,::com::text::attack::world::Comet comet);
		Dynamic collideBulletComet_dyn();

		virtual Void collidePlayerComet( ::com::text::attack::world::Comet comet);
		Dynamic collidePlayerComet_dyn();

		virtual bool playingKeyDown( );
		Dynamic playingKeyDown_dyn();

		virtual Void updateLevelCheat( );
		Dynamic updateLevelCheat_dyn();

		virtual bool switchToLevelCheat( );
		Dynamic switchToLevelCheat_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		static Array< ::Dynamic > LEVELS;
		static int LEADING_IN_GAME;
		static int LEADING_IN_TEXT;
		static int BEGIN_LEVEL;
		static int END_LEVEL;
		static ::com::text::attack::world::World instance;
		static int WIDTH;
		static int HEIGHT;
};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world

#endif /* INCLUDED_com_text_attack_world_World */ 
