#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
#include "MovieSceneMarginSectionTemplate.hpp"
void* _Script_UMG::MovieSceneMarginSectionTemplate::get_TopCurve() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_UMG::MovieSceneMarginSectionTemplate::get_LeftCurve() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_UMG::MovieSceneMarginSectionTemplate::get_RightCurve() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_UMG::MovieSceneMarginSectionTemplate::get_BottomCurve() {
    return (void*)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Class* _Script_UMG::MovieSceneMarginSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.MovieSceneMarginSectionTemplate");
    return result;
}
void* _Script_UMG::MovieSceneMarginSectionTemplate::get_BlendType() {
    return (void*)((uintptr_t)this + 0x208);
}
