#ifndef INCLUDED_com_text_attack_world_Direction
#define INCLUDED_com_text_attack_world_Direction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,world,Direction)
namespace com{
namespace text{
namespace attack{
namespace world{


class Direction_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Direction_obj OBJ_;

	public:
		Direction_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.text.attack.world.Direction"); }
		::String __ToString() const { return HX_CSTRING("Direction.") + tag; }

		static ::com::text::attack::world::Direction LEFT;
		static inline ::com::text::attack::world::Direction LEFT_dyn() { return LEFT; }
		static ::com::text::attack::world::Direction RIGHT;
		static inline ::com::text::attack::world::Direction RIGHT_dyn() { return RIGHT; }
		static ::com::text::attack::world::Direction UP;
		static inline ::com::text::attack::world::Direction UP_dyn() { return UP; }
};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world

#endif /* INCLUDED_com_text_attack_world_Direction */ 
