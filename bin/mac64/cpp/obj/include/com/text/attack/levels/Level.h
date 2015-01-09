#ifndef INCLUDED_com_text_attack_levels_Level
#define INCLUDED_com_text_attack_levels_Level

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,levels,Level)
namespace com{
namespace text{
namespace attack{
namespace levels{


class HXCPP_CLASS_ATTRIBUTES  Level_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Level_obj OBJ_;
		Level_obj();
		Void __construct(::String levelString,Array< ::String > preamble,int availableBullets);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Level_obj > __new(::String levelString,Array< ::String > preamble,int availableBullets);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Level_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Level"); }

		::String levelString;
		Array< ::String > preamble;
		int availableBullets;
		int preIndex;
		virtual ::String getSomePreamble( );
		Dynamic getSomePreamble_dyn();

		virtual Void resetPreamble( );
		Dynamic resetPreamble_dyn();

		static int CHARS_PER_LINE;
};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels

#endif /* INCLUDED_com_text_attack_levels_Level */ 
