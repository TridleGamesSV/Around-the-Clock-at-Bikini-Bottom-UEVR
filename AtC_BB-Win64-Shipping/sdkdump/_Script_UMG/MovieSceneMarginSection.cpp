#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneMarginSection.hpp"
void* _Script_UMG::MovieSceneMarginSection::get_TopCurve() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_UMG::MovieSceneMarginSection::get_LeftCurve() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_UMG::MovieSceneMarginSection::get_BottomCurve() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Script_UMG::MovieSceneMarginSection::get_RightCurve() {
    return (void*)((uintptr_t)this + 0x1f8);
}
_Script_CoreUObject::Class* _Script_UMG::MovieSceneMarginSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MovieSceneMarginSection");
    return result;
}
