#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieScene2DTransformSection.hpp"
void* _Script_UMG::MovieScene2DTransformSection::get_Rotation() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_UMG::MovieScene2DTransformSection::get_Translation() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_UMG::MovieScene2DTransformSection::get_Scale() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Script_UMG::MovieScene2DTransformSection::get_Shear() {
    return (void*)((uintptr_t)this + 0x348);
}
_Script_CoreUObject::Class* _Script_UMG::MovieScene2DTransformSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MovieScene2DTransformSection");
    return result;
}
