#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEventSectionData.hpp"
void* _Script_MovieSceneTracks::MovieSceneEventSectionData::get_KeyTimes() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventSectionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneEventSectionData");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneEventSectionData::get_KeyValues() {
    return (void*)((uintptr_t)this + 0x10);
}
