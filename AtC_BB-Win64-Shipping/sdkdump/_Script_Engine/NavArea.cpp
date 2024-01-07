#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NavArea.hpp"
float& _Script_Engine::NavArea::get_DefaultCost() {
    return *(float*)((uintptr_t)this + 0x28);
}
void _Script_Engine::NavArea::set_bSupportsAgent10(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::NavArea::get_FixedAreaEnteringCost() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void _Script_Engine::NavArea::set_bSupportsAgent1(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::NavArea::set_bSupportsAgent0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::NavArea::get_DrawColor() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::NavArea::get_SupportedAgents() {
    return (void*)((uintptr_t)this + 0x34);
}
bool _Script_Engine::NavArea::get_bSupportsAgent7() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 128 != 0;
}
bool _Script_Engine::NavArea::get_bSupportsAgent0() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
bool _Script_Engine::NavArea::get_bSupportsAgent1() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
bool _Script_Engine::NavArea::get_bSupportsAgent2() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 4 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavArea::get_bSupportsAgent3() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 8 != 0;
}
bool _Script_Engine::NavArea::get_bSupportsAgent4() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 16 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent3(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::NavArea::set_bSupportsAgent4(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavArea::get_bSupportsAgent5() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 32 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent5(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavArea::get_bSupportsAgent6() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 64 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent6(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::NavArea::set_bSupportsAgent7(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::NavArea::get_bSupportsAgent8() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent8(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavArea::get_bSupportsAgent9() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 2 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent9(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::NavArea::get_bSupportsAgent10() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 4 != 0;
}
bool _Script_Engine::NavArea::get_bSupportsAgent11() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 8 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent11(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::NavArea::get_bSupportsAgent12() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 16 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent12(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavArea::get_bSupportsAgent13() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 32 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent13(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavArea::get_bSupportsAgent14() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 64 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent14(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::NavArea::get_bSupportsAgent15() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 128 != 0;
}
void _Script_Engine::NavArea::set_bSupportsAgent15(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::NavArea::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavArea");
    return result;
}
