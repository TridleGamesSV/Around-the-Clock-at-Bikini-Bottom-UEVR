#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "InputActionKeyMapping.hpp"
#include "InputAxisKeyMapping.hpp"
#include "InputSettings.hpp"
void _Script_Engine::InputSettings::set_bF11TogglesFullscreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::InputSettings::get_AxisConfig() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::InputSettings::get_bAltEnterTogglesFullscreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::InputSettings::set_bAltEnterTogglesFullscreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::InputSettings::get_bF11TogglesFullscreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
bool _Script_Engine::InputSettings::get_bUseMouseForTouch() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 4 != 0;
}
void _Script_Engine::InputSettings::set_bUseMouseForTouch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::InputSettings::get_bEnableMouseSmoothing() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 8 != 0;
}
void _Script_Engine::InputSettings::set_bEnableMouseSmoothing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::InputSettings::get_bEnableFOVScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 16 != 0;
}
void _Script_Engine::InputSettings::set_bEnableFOVScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Engine::InputSettings::get_FOVScale() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::InputSettings::get_DoubleClickTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::InputSettings::get_bCaptureMouseOnLaunch() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void _Script_Engine::InputSettings::set_bCaptureMouseOnLaunch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::InputSettings::AddAxisMapping(_Script_Engine::InputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
    return;
}
void* _Script_Engine::InputSettings::get_DefaultViewportMouseCaptureMode() {
    return (void*)((uintptr_t)this + 0x45);
}
bool _Script_Engine::InputSettings::get_bDefaultViewportMouseLock() {
    return (*(uint8_t*)((uintptr_t)this + 0x46 + 0)) & 1 != 0;
}
void _Script_Engine::InputSettings::set_bDefaultViewportMouseLock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x46 + 0);
    *(uint8_t*)((uintptr_t)this + 0x46 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::InputSettings* _Script_Engine::InputSettings::GetInputSettings() {
    return;
}
void* _Script_Engine::InputSettings::get_DefaultViewportMouseLockMode() {
    return (void*)((uintptr_t)this + 0x47);
}
void _Script_Engine::InputSettings::GetAxisMappingByName(void* InAxisName, void*& OutMappings) {
    return;
}
void* _Script_Engine::InputSettings::get_ActionMappings() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::InputSettings::get_AxisMappings() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::InputSettings::get_bAlwaysShowTouchInterface() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_Engine::InputSettings::RemoveActionMapping(_Script_Engine::InputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
    return;
}
void _Script_Engine::InputSettings::set_bAlwaysShowTouchInterface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::InputSettings::get_bShowConsoleOnFourFingerTap() {
    return (*(uint8_t*)((uintptr_t)this + 0x69 + 0)) & 1 != 0;
}
void _Script_Engine::InputSettings::set_bShowConsoleOnFourFingerTap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x69 + 0);
    *(uint8_t*)((uintptr_t)this + 0x69 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::InputSettings::get_DefaultTouchInterface() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::InputSettings::get_ConsoleKey() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::InputSettings::get_ConsoleKeys() {
    return (void*)((uintptr_t)this + 0xa0);
}
void _Script_Engine::InputSettings::GetActionMappingByName(void* InActionName, void*& OutMappings) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::InputSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InputSettings");
    return result;
}
void _Script_Engine::InputSettings::RemoveAxisMapping(_Script_Engine::InputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
    return;
}
void _Script_Engine::InputSettings::SaveKeyMappings() {
    return;
}
void _Script_Engine::InputSettings::GetActionNames(void*& ActionNames) {
    return;
}
void _Script_Engine::InputSettings::GetAxisNames(void*& AxisNames) {
    return;
}
void _Script_Engine::InputSettings::ForceRebuildKeymaps() {
    return;
}
void _Script_Engine::InputSettings::AddActionMapping(_Script_Engine::InputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
    return;
}
