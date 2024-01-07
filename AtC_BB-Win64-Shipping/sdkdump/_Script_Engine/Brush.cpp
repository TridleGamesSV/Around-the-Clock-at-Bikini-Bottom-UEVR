#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "Brush.hpp"
#include "BrushComponent.hpp"
#include "Model.hpp"
void* _Script_Engine::Brush::get_BrushType() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Script_Engine::Brush::get_BrushColor() {
    return (void*)((uintptr_t)this + 0x31c);
}
bool _Script_Engine::Brush::get_bSolidWhenSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x324 + 0)) & 2 != 0;
}
int32_t& _Script_Engine::Brush::get_PolyFlags() {
    return *(int32_t*)((uintptr_t)this + 0x320);
}
bool _Script_Engine::Brush::get_bColored() {
    return (*(uint8_t*)((uintptr_t)this + 0x324 + 0)) & 1 != 0;
}
void _Script_Engine::Brush::set_bColored(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x324 + 0);
    *(uint8_t*)((uintptr_t)this + 0x324 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Brush::set_bSolidWhenSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x324 + 0);
    *(uint8_t*)((uintptr_t)this + 0x324 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Brush::get_bPlaceableFromClassBrowser() {
    return (*(uint8_t*)((uintptr_t)this + 0x324 + 0)) & 4 != 0;
}
bool _Script_Engine::Brush::get_bInManipulation() {
    return (*(uint8_t*)((uintptr_t)this + 0x338 + 0)) & 1 != 0;
}
void _Script_Engine::Brush::set_bPlaceableFromClassBrowser(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x324 + 0);
    *(uint8_t*)((uintptr_t)this + 0x324 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::Brush::get_SavedSelections() {
    return (void*)((uintptr_t)this + 0x340);
}
bool _Script_Engine::Brush::get_bNotForClientOrServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x324 + 0)) & 8 != 0;
}
void _Script_Engine::Brush::set_bNotForClientOrServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x324 + 0);
    *(uint8_t*)((uintptr_t)this + 0x324 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_Engine::Model*& _Script_Engine::Brush::get_Brush() {
    return *(_Script_Engine::Model**)((uintptr_t)this + 0x328);
}
_Script_Engine::BrushComponent*& _Script_Engine::Brush::get_BrushComponent() {
    return *(_Script_Engine::BrushComponent**)((uintptr_t)this + 0x330);
}
void _Script_Engine::Brush::set_bInManipulation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x338 + 0);
    *(uint8_t*)((uintptr_t)this + 0x338 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::Brush::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Brush");
    return result;
}
