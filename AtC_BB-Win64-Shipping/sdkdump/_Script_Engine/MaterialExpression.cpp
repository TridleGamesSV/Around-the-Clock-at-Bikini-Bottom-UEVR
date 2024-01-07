#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Material.hpp"
#include "MaterialExpression.hpp"
#include "MaterialFunction.hpp"
bool _Script_Engine::MaterialExpression::get_bIsParameterExpression() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 4 != 0;
}
_Script_Engine::Material*& _Script_Engine::MaterialExpression::get_Material() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x28);
}
bool _Script_Engine::MaterialExpression::get_bShowOutputNameOnPin() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 16 != 0;
}
_Script_Engine::MaterialFunction*& _Script_Engine::MaterialExpression::get_Function() {
    return *(_Script_Engine::MaterialFunction**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::MaterialExpression::get_Desc() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::MaterialExpression::set_bCollapsed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::MaterialExpression::set_bNeedToUpdatePreview(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MaterialExpression::get_bRealtimePreview() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpression::set_bRealtimePreview(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialExpression::get_bNeedToUpdatePreview() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 2 != 0;
}
void _Script_Engine::MaterialExpression::set_bShowInputs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::MaterialExpression::set_bIsParameterExpression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::MaterialExpression::get_bCommentBubbleVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 8 != 0;
}
void _Script_Engine::MaterialExpression::set_bCommentBubbleVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::MaterialExpression::set_bShowOutputNameOnPin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::MaterialExpression::get_bShowMaskColorsOnPin() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 32 != 0;
}
void _Script_Engine::MaterialExpression::set_bShowMaskColorsOnPin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::MaterialExpression::get_bHidePreviewWindow() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 64 != 0;
}
void _Script_Engine::MaterialExpression::set_bHidePreviewWindow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::MaterialExpression::get_bCollapsed() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 128 != 0;
}
bool _Script_Engine::MaterialExpression::get_bShaderInputData() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpression::set_bShaderInputData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MaterialExpression::get_bShowInputs() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 2 != 0;
}
bool _Script_Engine::MaterialExpression::get_bShowOutputs() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 4 != 0;
}
void _Script_Engine::MaterialExpression::set_bShowOutputs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::MaterialExpression::get_Outputs() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpression::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpression");
    return result;
}
