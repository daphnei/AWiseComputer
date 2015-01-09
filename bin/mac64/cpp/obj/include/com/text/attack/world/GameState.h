#ifndef INCLUDED_com_text_attack_world_GameState
#define INCLUDED_com_text_attack_world_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,world,GameState)
namespace com{
namespace text{
namespace attack{
namespace world{


class GameState_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GameState_obj OBJ_;

	public:
		GameState_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.text.attack.world.GameState"); }
		::String __ToString() const { return HX_CSTRING("GameState.") + tag; }

		static ::com::text::attack::world::GameState DEAD;
		static inline ::com::text::attack::world::GameState DEAD_dyn() { return DEAD; }
		static ::com::text::attack::world::GameState ENDING;
		static inline ::com::text::attack::world::GameState ENDING_dyn() { return ENDING; }
		static ::com::text::attack::world::GameState PAUSED;
		static inline ::com::text::attack::world::GameState PAUSED_dyn() { return PAUSED; }
		static ::com::text::attack::world::GameState PLAYING;
		static inline ::com::text::attack::world::GameState PLAYING_dyn() { return PLAYING; }
		static ::com::text::attack::world::GameState PREAMBLE;
		static inline ::com::text::attack::world::GameState PREAMBLE_dyn() { return PREAMBLE; }
};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world

#endif /* INCLUDED_com_text_attack_world_GameState */ 
