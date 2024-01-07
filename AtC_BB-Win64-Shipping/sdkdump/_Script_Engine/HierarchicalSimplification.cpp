#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HierarchicalSimplification.hpp"
float& _Script_Engine::HierarchicalSimplification::get_TransitionScreenSize() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::HierarchicalSimplification::get_ProxySetting() {
    return (void*)((uintptr_t)this + 0xc);
}
bool _Script_Engine::HierarchicalSimplification::get_bSimplifyMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::HierarchicalSimplification::get_MinNumberOfActorsToBuild() {
    return *(int32_t*)((uintptr_t)this + 0x18c);
}
void _Script_Engine::HierarchicalSimplification::set_bSimplifyMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::HierarchicalSimplification::get_DesiredFillingPercentage() {
    return *(float*)((uintptr_t)this + 0x188);
}
void* _Script_Engine::HierarchicalSimplification::get_MergeSetting() {
    return (void*)((uintptr_t)this + 0xc8);
}
float& _Script_Engine::HierarchicalSimplification::get_DesiredBoundRadius() {
    return *(float*)((uintptr_t)this + 0x184);
}
bool _Script_Engine::HierarchicalSimplification::get_bOnlyGenerateClustersForVolumes() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 1 != 0;
}
void _Script_Engine::HierarchicalSimplification::set_bOnlyGenerateClustersForVolumes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::HierarchicalSimplification::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.HierarchicalSimplification");
    return result;
}
