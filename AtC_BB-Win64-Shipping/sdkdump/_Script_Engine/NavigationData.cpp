#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "NavigationData.hpp"
#include "PrimitiveComponent.hpp"
void _Script_Engine::NavigationData::set_bForceRebuildOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::NavigationData::get_NavDataConfig() {
    return (void*)((uintptr_t)this + 0x320);
}
_Script_Engine::PrimitiveComponent*& _Script_Engine::NavigationData::get_RenderingComp() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x318);
}
void _Script_Engine::NavigationData::set_bEnableDrawing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavigationData::get_bEnableDrawing() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 1 != 0;
}
void _Script_Engine::NavigationData::set_bCanBeMainNavData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavigationData::get_bForceRebuildOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 2 != 0;
}
bool _Script_Engine::NavigationData::get_bCanBeMainNavData() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 4 != 0;
}
bool _Script_Engine::NavigationData::get_bCanSpawnOnRebuild() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 8 != 0;
}
void _Script_Engine::NavigationData::set_bCanSpawnOnRebuild(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::NavigationData::get_bRebuildAtRuntime() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 16 != 0;
}
void _Script_Engine::NavigationData::set_bRebuildAtRuntime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::NavigationData::get_RuntimeGeneration() {
    return (void*)((uintptr_t)this + 0x37c);
}
float& _Script_Engine::NavigationData::get_ObservedPathsTickInterval() {
    return *(float*)((uintptr_t)this + 0x380);
}
void* _Script_Engine::NavigationData::get_DataVersion() {
    return (void*)((uintptr_t)this + 0x384);
}
void* _Script_Engine::NavigationData::get_SupportedAreas() {
    return (void*)((uintptr_t)this + 0x458);
}
_Script_CoreUObject::Class* _Script_Engine::NavigationData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavigationData");
    return result;
}
