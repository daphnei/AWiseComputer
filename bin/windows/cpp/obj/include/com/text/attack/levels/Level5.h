#ifndef INCLUDED_com_text_attack_levels_Level5
#define INCLUDED_com_text_attack_levels_Level5

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/text/attack/levels/Level.h>
HX_DECLARE_CLASS4(com,text,attack,levels,Level)
HX_DECLARE_CLASS4(com,text,attack,levels,Level5)
namespace com{
namespace text{
namespace attack{
namespace levels{


class HXCPP_CLASS_ATTRIBUTES  Level5_obj : public ::com::text::attack::levels::Level_obj{
	public:
		typedef ::com::text::attack::levels::Level_obj super;
		typedef Level5_obj OBJ_;
		Level5_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Level5_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Level5_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Level5"); }

		static ::String LEVEL_STRING;
};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels

#endif /* INCLUDED_com_text_attack_levels_Level5 */ 
