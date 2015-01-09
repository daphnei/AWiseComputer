#ifndef INCLUDED_com_text_attack_utiltiies_KeyManager
#define INCLUDED_com_text_attack_utiltiies_KeyManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,utiltiies,KeyManager)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,KeyboardEvent)
namespace com{
namespace text{
namespace attack{
namespace utiltiies{


class HXCPP_CLASS_ATTRIBUTES  KeyManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyManager_obj OBJ_;
		KeyManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< KeyManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("KeyManager"); }

		Array< int > keysDown;
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void onKeyDown( ::openfl::_v2::events::KeyboardEvent event);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( ::openfl::_v2::events::KeyboardEvent event);
		Dynamic onKeyUp_dyn();

		virtual bool isKeyDown( int keyCode);
		Dynamic isKeyDown_dyn();

		virtual int getNumberKeyDown( );
		Dynamic getNumberKeyDown_dyn();

};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace utiltiies

#endif /* INCLUDED_com_text_attack_utiltiies_KeyManager */ 
