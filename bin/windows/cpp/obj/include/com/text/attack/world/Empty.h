#ifndef INCLUDED_com_text_attack_world_Empty
#define INCLUDED_com_text_attack_world_Empty

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/text/attack/world/Cell.h>
HX_DECLARE_CLASS4(com,text,attack,world,Cell)
HX_DECLARE_CLASS4(com,text,attack,world,Empty)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace text{
namespace attack{
namespace world{


class HXCPP_CLASS_ATTRIBUTES  Empty_obj : public ::com::text::attack::world::Cell_obj{
	public:
		typedef ::com::text::attack::world::Cell_obj super;
		typedef Empty_obj OBJ_;
		Empty_obj();
		Void __construct(int x,int y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Empty_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Empty_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Empty"); }

		virtual int getSymbol( );

};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world

#endif /* INCLUDED_com_text_attack_world_Empty */ 
