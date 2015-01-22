#ifndef INCLUDED_com_text_attack_world_Player
#define INCLUDED_com_text_attack_world_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/text/attack/world/Cell.h>
HX_DECLARE_CLASS4(com,text,attack,world,Cell)
HX_DECLARE_CLASS4(com,text,attack,world,Player)
HX_DECLARE_CLASS4(com,text,attack,world,Wall)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace text{
namespace attack{
namespace world{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::com::text::attack::world::Cell_obj{
	public:
		typedef ::com::text::attack::world::Cell_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(int x,int y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Player_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Player"); }

		bool justShot;
		::com::text::attack::world::Wall wall;
		virtual Void update( );

		virtual Void moveClockwise( );
		Dynamic moveClockwise_dyn();

		virtual Void moveCounterClockwise( );
		Dynamic moveCounterClockwise_dyn();

		virtual int getSymbol( );

};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world

#endif /* INCLUDED_com_text_attack_world_Player */ 
