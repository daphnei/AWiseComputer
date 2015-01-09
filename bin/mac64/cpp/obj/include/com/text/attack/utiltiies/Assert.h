#ifndef INCLUDED_com_text_attack_utiltiies_Assert
#define INCLUDED_com_text_attack_utiltiies_Assert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,utiltiies,Assert)
namespace com{
namespace text{
namespace attack{
namespace utiltiies{


class HXCPP_CLASS_ATTRIBUTES  Assert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assert_obj OBJ_;
		Assert_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Assert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assert_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Assert"); }

		static Void _assert( bool cond,Dynamic pos);
		static Dynamic _assert_dyn();

};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace utiltiies

#endif /* INCLUDED_com_text_attack_utiltiies_Assert */ 
