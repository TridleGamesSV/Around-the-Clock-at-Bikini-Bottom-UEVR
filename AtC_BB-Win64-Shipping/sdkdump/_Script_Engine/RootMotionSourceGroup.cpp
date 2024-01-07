#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RootMotionSourceGroup.hpp"
bool _Script_Engine::RootMotionSourceGroup::get_bHasOverrideSources() {
    return (*(uint8_t*)((uintptr_t)this + 0xe9 + 0)) & 1 != 0;
}
bool _Script_Engine::RootMotionSourceGroup::get_bHasAdditiveSources() {
    return (*(uint8_t*)((uintptr_t)this + 0xe8 + 0)) & 1 != 0;
}
void _Script_Engine::RootMotionSourceGroup::set_bHasAdditiveSources(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RootMotionSourceGroup::set_bHasOverrideSources(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RootMotionSourceGroup::get_LastPreAdditiveVelocity() {
    return (void*)((uintptr_t)this + 0xec);
}
void _Script_Engine::RootMotionSourceGroup::set_bIsAdditiveVelocityApplied(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RootMotionSourceGroup::get_bIsAdditiveVelocityApplied() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void* _Script_Engine::RootMotionSourceGroup::get_LastAccumulatedSettings() {
    return (void*)((uintptr_t)this + 0xf9);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionSourceGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionSourceGroup");
    return result;
}
