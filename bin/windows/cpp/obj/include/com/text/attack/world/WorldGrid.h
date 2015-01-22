#ifndef INCLUDED_com_text_attack_world_WorldGrid
#define INCLUDED_com_text_attack_world_WorldGrid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,world,Cell)
HX_DECLARE_CLASS4(com,text,attack,world,WorldGrid)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)
namespace com{
namespace text{
namespace attack{
namespace world{


class HXCPP_CLASS_ATTRIBUTES  WorldGrid_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WorldGrid_obj OBJ_;
		WorldGrid_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WorldGrid_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WorldGrid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WorldGrid"); }

		Array< ::Dynamic > grid;
		Array< ::Dynamic > inBulletsWay;
		virtual Void clear( int x,int y);
		Dynamic clear_dyn();

		virtual ::com::text::attack::world::Cell set( int x,int y,::com::text::attack::world::Cell cell);
		Dynamic set_dyn();

		virtual ::com::text::attack::world::Cell get( int x,int y);
		Dynamic get_dyn();

		virtual Void move( int oldX,int oldY,int xOffset,int yOffset);
		Dynamic move_dyn();

		virtual Void addGridToTextField( ::openfl::_v2::text::TextField textField,::openfl::_v2::text::TextFormat textFormat);
		Dynamic addGridToTextField_dyn();

		virtual Void printCell( int x,int y);
		Dynamic printCell_dyn();

		virtual Void markForBullet( int x,int y);
		Dynamic markForBullet_dyn();

};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world

#endif /* INCLUDED_com_text_attack_world_WorldGrid */ 
