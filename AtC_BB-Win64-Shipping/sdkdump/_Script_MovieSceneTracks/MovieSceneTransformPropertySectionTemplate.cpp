#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
#include "MovieSceneTransformPropertySectionTemplate.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneTransformPropertySectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneTransformPropertySectionTemplate");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneTransformPropertySectionTemplate::get_TemplateData() {
    return (void*)((uintptr_t)this + 0x48);
}
