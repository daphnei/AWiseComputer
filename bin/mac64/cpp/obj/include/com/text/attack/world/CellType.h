#ifndef INCLUDED_com_text_attack_world_CellType
#define INCLUDED_com_text_attack_world_CellType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,world,CellType)
namespace com{
namespace text{
namespace attack{
namespace world{


class HXCPP_CLASS_ATTRIBUTES  CellType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CellType_obj OBJ_;
		CellType_obj();
		Void __construct(::String symbol);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CellType_obj > __new(::String symbol);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CellType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CellType"); }

		int symbol;
		static ::com::text::attack::world::CellType Player;
		static ::com::text::attack::world::CellType Empty;
		static ::com::text::attack::world::CellType Block;
		static ::com::text::attack::world::CellType CometDown;
		static ::com::text::attack::world::CellType CometLeft;
		static ::com::text::attack::world::CellType CometRight;
		static ::com::text::attack::world::CellType CometUp;
		static ::com::text::attack::world::CellType Bouncer;
		static ::com::text::attack::world::CellType Bullet;
};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world

#endif /* INCLUDED_com_text_attack_world_CellType */ 
