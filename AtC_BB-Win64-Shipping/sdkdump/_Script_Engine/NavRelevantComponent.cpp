#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ActorComponent.hpp"
#include "NavRelevantComponent.hpp"
bool _Script_Engine::NavRelevantComponent::get_bAttachToOwnersRoot() {
    return (*(uint8_t*)((uintptr_t)this + 0x114 + 0)) & 1 != 0;
}
void _Script_Engine::NavRelevantComponent::set_bAttachToOwnersRoot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x114 + 0);
    *(uint8_t*)((uintptr_t)this + 0x114 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Object*& _Script_Engine::NavRelevantComponent::get_CachedNavParent() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_Engine::NavRelevantComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavRelevantComponent");
    return result;
}
void _Script_Engine::NavRelevantComponent::SetNavigationRelevancy(bool bRelevant) {
    return;
}
