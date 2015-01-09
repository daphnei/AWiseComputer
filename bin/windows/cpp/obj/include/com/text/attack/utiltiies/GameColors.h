#ifndef INCLUDED_com_text_attack_utiltiies_GameColors
#define INCLUDED_com_text_attack_utiltiies_GameColors

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,utiltiies,GameColors)
namespace com{
namespace text{
namespace attack{
namespace utiltiies{


class HXCPP_CLASS_ATTRIBUTES  GameColors_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameColors_obj OBJ_;
		GameColors_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameColors_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameColors_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GameColors"); }

		static int PINK;
		static int GREEN;
		static int BLUE;
		static int YELLOW;
		static int RED;
		static int WHITE;
};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace utiltiies

#endif /* INCLUDED_com_text_attack_utiltiies_GameColors */ 
