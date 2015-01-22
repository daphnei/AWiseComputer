#ifndef INCLUDED_com_text_attack_world_Bullet
#define INCLUDED_com_text_attack_world_Bullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/text/attack/world/Cell.h>
HX_DECLARE_CLASS4(com,text,attack,world,Bullet)
HX_DECLARE_CLASS4(com,text,attack,world,Cell)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace text{
namespace attack{
namespace world{


class HXCPP_CLASS_ATTRIBUTES  Bullet_obj : public ::com::text::attack::world::Cell_obj{
	public:
		typedef ::com::text::attack::world::Cell_obj super;
		typedef Bullet_obj OBJ_;
		Bullet_obj();
		Void __construct(int x,int y,int dirX,int dirY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Bullet_obj > __new(int x,int y,int dirX,int dirY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bullet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Bullet"); }

		bool justAdded;
		int dirX;
		int dirY;
		virtual Void addCellsInBulletSight( );
		Dynamic addCellsInBulletSight_dyn();

		virtual Void update( );

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual int getSymbol( );

		static Void shoot( int dirX,int dirY);
		static Dynamic shoot_dyn();

		static Void shootUpLeft( );
		static Dynamic shootUpLeft_dyn();

		static Void shootUpRight( );
		static Dynamic shootUpRight_dyn();

		static Void shootUp( );
		static Dynamic shootUp_dyn();

		static Void shootLeft( );
		static Dynamic shootLeft_dyn();

		static Void shootRight( );
		static Dynamic shootRight_dyn();

};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace world

#endif /* INCLUDED_com_text_attack_world_Bullet */ 
