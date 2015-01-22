#ifndef INCLUDED_com_text_attack_utiltiies_SoundManager
#define INCLUDED_com_text_attack_utiltiies_SoundManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,text,attack,utiltiies,SoundManager)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,media,Sound)
HX_DECLARE_CLASS3(openfl,_v2,media,SoundChannel)
namespace com{
namespace text{
namespace attack{
namespace utiltiies{


class HXCPP_CLASS_ATTRIBUTES  SoundManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundManager_obj OBJ_;
		SoundManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SoundManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundManager"); }

		Array< ::Dynamic > singleSounds;
		Array< ::Dynamic > chordSounds;
		::openfl::_v2::media::Sound endSound;
		::openfl::_v2::media::SoundChannel endSoundChannel;
		virtual Void playRandomNote( );
		Dynamic playRandomNote_dyn();

		virtual Void playRandomChord( );
		Dynamic playRandomChord_dyn();

		virtual Void playEndSound( );
		Dynamic playEndSound_dyn();

		virtual Void stopOtherSounds( );
		Dynamic stopOtherSounds_dyn();

};

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace utiltiies

#endif /* INCLUDED_com_text_attack_utiltiies_SoundManager */ 
