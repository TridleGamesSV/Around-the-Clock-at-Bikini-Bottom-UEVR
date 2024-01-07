#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneBoolPropertySectionTemplate.hpp"
#include "MovieSceneVisibilitySectionTemplate.hpp"
bool _Script_MovieSceneTracks::MovieSceneVisibilitySectionTemplate::get_bTemporarilyHiddenInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneVisibilitySectionTemplate::set_bTemporarilyHiddenInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVisibilitySectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneVisibilitySectionTemplate");
    return result;
}
