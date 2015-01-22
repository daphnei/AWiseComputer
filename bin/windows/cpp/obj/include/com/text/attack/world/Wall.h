#ifndef INCLUDED_com_text_attack_world_Wall
#define INCLUDED_com_text_attack_world_Wall

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,world,Wall)
namespace com{
namespace text{
namespace attack{
namespace world{


class Wall_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Wall_obj OBJ_;

	public:
		Wall_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.text.attack.world.Wall"); }
		::String __ToString() const { return HX_CSTRING("Wall.") + tag; }

		static ::com::text::attack::world::Wall BOTTOM;
		static inline ::com::text::attack::world::Wall BOTTOM_dyn() { return BOTTOM; }
		static ::com::text::attack::world::Wall LEFT;
		static inline ::com::text::attack::world::Wall LEFT_dyn() { return LEFT; }
		static ::com::text::attack::world::Wall RIGHT;
		static inline ::com::text::attack::world::Wall RIGHT_dyn() { return RIGHT; }
};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world

#endif /* INCLUDED_com_text_attack_world_Wall */ 
