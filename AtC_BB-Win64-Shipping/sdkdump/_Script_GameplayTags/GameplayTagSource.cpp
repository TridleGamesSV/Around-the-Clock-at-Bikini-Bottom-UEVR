#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTagSource.hpp"
#include "GameplayTagsList.hpp"
void* _Script_GameplayTags::GameplayTagSource::get_SourceName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_GameplayTags::GameplayTagSource::get_SourceType() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.GameplayTagSource");
    return result;
}
_Script_GameplayTags::GameplayTagsList*& _Script_GameplayTags::GameplayTagSource::get_SourceTagList() {
    return *(_Script_GameplayTags::GameplayTagsList**)((uintptr_t)this + 0x10);
}
