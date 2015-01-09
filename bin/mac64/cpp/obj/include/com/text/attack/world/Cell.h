#ifndef INCLUDED_com_text_attack_world_Cell
#define INCLUDED_com_text_attack_world_Cell

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/events/EventDispatcher.h>
HX_DECLARE_CLASS4(com,text,attack,world,Cell)
HX_DECLARE_CLASS4(com,text,attack,world,CellType)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace text{
namespace attack{
namespace world{


class HXCPP_CLASS_ATTRIBUTES  Cell_obj : public ::openfl::_v2::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_v2::events::EventDispatcher_obj super;
		typedef Cell_obj OBJ_;
		Cell_obj();
		Void __construct(::com::text::attack::world::CellType cellType,int x,int y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Cell_obj > __new(::com::text::attack::world::CellType cellType,int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cell_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Cell"); }

		::com::text::attack::world::CellType cellType;
		int x;
		int y;
		int newY;
		int newX;
		virtual Void move( int xOffset,int yOffset);
		Dynamic move_dyn();

		virtual Void applyMove( );
		Dynamic applyMove_dyn();

		virtual int getSymbol( );
		Dynamic getSymbol_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool newPosCollides( ::com::text::attack::world::Cell cell);
		Dynamic newPosCollides_dyn();

		virtual ::String toString( );

};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world

#endif /* INCLUDED_com_text_attack_world_Cell */ 
