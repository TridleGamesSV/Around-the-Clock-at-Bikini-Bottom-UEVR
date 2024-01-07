#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "LevelStreaming.hpp"
#include "LevelStreamingKismet.hpp"
bool _Script_Engine::LevelStreamingKismet::get_bInitiallyLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x158 + 0)) & 1 != 0;
}
void _Script_Engine::LevelStreamingKismet::set_bInitiallyLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x158 + 0);
    *(uint8_t*)((uintptr_t)this + 0x158 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::LevelStreamingKismet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelStreamingKismet");
    return result;
}
bool _Script_Engine::LevelStreamingKismet::get_bInitiallyVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x158 + 0)) & 2 != 0;
}
void _Script_Engine::LevelStreamingKismet::set_bInitiallyVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x158 + 0);
    *(uint8_t*)((uintptr_t)this + 0x158 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_Engine::LevelStreamingKismet* _Script_Engine::LevelStreamingKismet::LoadLevelInstance(_Script_CoreUObject::Object* WorldContextObject, void* LevelName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool& bOutSuccess) {
    return;
}
_Script_Engine::LevelStreamingKismet* _Script_Engine::LevelStreamingKismet::LoadLevelInstanceBySoftObjectPtr(_Script_CoreUObject::Object* WorldContextObject, void* Level, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, bool& bOutSuccess) {
    return;
}
