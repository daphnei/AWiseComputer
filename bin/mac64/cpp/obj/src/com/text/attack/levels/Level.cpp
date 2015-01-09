#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_com_text_attack_levels_Level
#include <com/text/attack/levels/Level.h>
#endif
namespace com{
namespace text{
namespace attack{
namespace levels{

Void Level_obj::__construct(::String levelString,Array< ::String > preamble,int availableBullets)
{
HX_STACK_FRAME("com.text.attack.levels.Level","new",0x5a5c4489,"com.text.attack.levels.Level.new","com/text/attack/levels/Level.hx",19,0xbd889587)
HX_STACK_THIS(this)
HX_STACK_ARG(levelString,"levelString")
HX_STACK_ARG(preamble,"preamble")
HX_STACK_ARG(availableBullets,"availableBullets")
{
	HX_STACK_LINE(20)
	this->levelString = levelString;
	HX_STACK_LINE(21)
	this->preamble = preamble;
	HX_STACK_LINE(22)
	this->preIndex = (int)0;
	HX_STACK_LINE(23)
	this->availableBullets = availableBullets;
}
;
	return null();
}

//Level_obj::~Level_obj() { }

Dynamic Level_obj::__CreateEmpty() { return  new Level_obj; }
hx::ObjectPtr< Level_obj > Level_obj::__new(::String levelString,Array< ::String > preamble,int availableBullets)
{  hx::ObjectPtr< Level_obj > result = new Level_obj();
	result->__construct(levelString,preamble,availableBullets);
	return result;}

Dynamic Level_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Level_obj > result = new Level_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Level_obj::getSomePreamble( ){
	HX_STACK_FRAME("com.text.attack.levels.Level","getSomePreamble",0x389a595f,"com.text.attack.levels.Level.getSomePreamble","com/text/attack/levels/Level.hx",28,0xbd889587)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	if (((this->preIndex >= this->preamble->length))){
		HX_STACK_LINE(29)
		return null();
	}
	else{
		HX_STACK_LINE(31)
		::StringBuf str = ::StringBuf_obj::__new();		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(32)
			int _g = (this->preIndex + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			while((true)){
				HX_STACK_LINE(32)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(32)
					break;
				}
				HX_STACK_LINE(32)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(33)
				::String line = this->preamble->__get(i);		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(39)
				str->add(HX_CSTRING("> "));
				HX_STACK_LINE(40)
				str->add(line);
				HX_STACK_LINE(41)
				str->add(HX_CSTRING("\n"));
			}
		}
		HX_STACK_LINE(43)
		if (((this->preIndex == (this->preamble->length - (int)1)))){
			HX_STACK_LINE(44)
			str->add(HX_CSTRING("> "));
			HX_STACK_LINE(45)
			str->add(HX_CSTRING("[START]"));
		}
		else{
			HX_STACK_LINE(47)
			str->add(HX_CSTRING("[PRESS ENTER]"));
		}
		HX_STACK_LINE(50)
		(this->preIndex)++;
		HX_STACK_LINE(52)
		return str->b->join(HX_CSTRING(""));
	}
	HX_STACK_LINE(28)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,getSomePreamble,return )

Void Level_obj::resetPreamble( ){
{
		HX_STACK_FRAME("com.text.attack.levels.Level","resetPreamble",0xdfc11144,"com.text.attack.levels.Level.resetPreamble","com/text/attack/levels/Level.hx",58,0xbd889587)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->preIndex = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,resetPreamble,(void))

int Level_obj::CHARS_PER_LINE;


Level_obj::Level_obj()
{
}

void Level_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level);
	HX_MARK_MEMBER_NAME(levelString,"levelString");
	HX_MARK_MEMBER_NAME(preamble,"preamble");
	HX_MARK_MEMBER_NAME(availableBullets,"availableBullets");
	HX_MARK_MEMBER_NAME(preIndex,"preIndex");
	HX_MARK_END_CLASS();
}

void Level_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(levelString,"levelString");
	HX_VISIT_MEMBER_NAME(preamble,"preamble");
	HX_VISIT_MEMBER_NAME(availableBullets,"availableBullets");
	HX_VISIT_MEMBER_NAME(preIndex,"preIndex");
}

Dynamic Level_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"preamble") ) { return preamble; }
		if (HX_FIELD_EQ(inName,"preIndex") ) { return preIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"levelString") ) { return levelString; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resetPreamble") ) { return resetPreamble_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSomePreamble") ) { return getSomePreamble_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"availableBullets") ) { return availableBullets; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Level_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"preamble") ) { preamble=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preIndex") ) { preIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"levelString") ) { levelString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"availableBullets") ) { availableBullets=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Level_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("levelString"));
	outFields->push(HX_CSTRING("preamble"));
	outFields->push(HX_CSTRING("availableBullets"));
	outFields->push(HX_CSTRING("preIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CHARS_PER_LINE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Level_obj,levelString),HX_CSTRING("levelString")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Level_obj,preamble),HX_CSTRING("preamble")},
	{hx::fsInt,(int)offsetof(Level_obj,availableBullets),HX_CSTRING("availableBullets")},
	{hx::fsInt,(int)offsetof(Level_obj,preIndex),HX_CSTRING("preIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("levelString"),
	HX_CSTRING("preamble"),
	HX_CSTRING("availableBullets"),
	HX_CSTRING("preIndex"),
	HX_CSTRING("getSomePreamble"),
	HX_CSTRING("resetPreamble"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Level_obj::CHARS_PER_LINE,"CHARS_PER_LINE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Level_obj::CHARS_PER_LINE,"CHARS_PER_LINE");
};

#endif

Class Level_obj::__mClass;

void Level_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.text.attack.levels.Level"), hx::TCanCast< Level_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Level_obj::__boot()
{
	CHARS_PER_LINE= (int)40;
}

} // end namespace com
} // end namespace text
} // end namespace attack
} // end namespace levels
