#ifndef INCLUDED_com_text_attack_utiltiies_Point
#define INCLUDED_com_text_attack_utiltiies_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,utiltiies,Point)
namespace com{
namespace text{
namespace attack{
namespace utiltiies{


class HXCPP_CLASS_ATTRIBUTES  Point_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();
		Void __construct(int x,int y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Point_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Point"); }

		int x;
		int y;
		virtual bool isInRange( int xMax,int yMax);
		Dynamic isInRange_dyn();

};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace utiltiies

#endif /* INCLUDED_com_text_attack_utiltiies_Point */ 
