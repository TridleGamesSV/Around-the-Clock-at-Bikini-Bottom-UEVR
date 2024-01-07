#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSkeletalAnimationParams.hpp"
#include "MovieSceneSkeletalAnimationSectionTemplateParameters.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSectionTemplateParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters");
    return result;
}
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSectionTemplateParameters::get_SectionStartTime() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSectionTemplateParameters::get_SectionEndTime() {
    return *(float*)((uintptr_t)this + 0x94);
}
