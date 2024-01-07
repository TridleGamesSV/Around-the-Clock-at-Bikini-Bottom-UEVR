#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene3DTransformTemplateData.hpp"
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_Mask() {
    return (void*)((uintptr_t)this + 0x464);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_TranslationCurve() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieScene3DTransformTemplateData");
    return result;
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_RotationCurve() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_BlendType() {
    return (void*)((uintptr_t)this + 0x460);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_ScaleCurve() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformTemplateData::get_ManualWeight() {
    return (void*)((uintptr_t)this + 0x3f0);
}
