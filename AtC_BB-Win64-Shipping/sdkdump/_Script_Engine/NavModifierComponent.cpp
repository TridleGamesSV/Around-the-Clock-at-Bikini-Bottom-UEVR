#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavModifierComponent.hpp"
#include "NavRelevantComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::NavModifierComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavModifierComponent");
    return result;
}
void* _Script_Engine::NavModifierComponent::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::NavModifierComponent::get_FailsafeExtent() {
    return (void*)((uintptr_t)this + 0x128);
}
void _Script_Engine::NavModifierComponent::SetAreaClass(void* NewAreaClass) {
    return;
}
