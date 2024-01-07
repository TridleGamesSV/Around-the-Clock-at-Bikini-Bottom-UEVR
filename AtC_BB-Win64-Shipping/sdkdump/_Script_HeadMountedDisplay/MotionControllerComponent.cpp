#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "MotionControllerComponent.hpp"
_Script_Engine::StaticMesh*& _Script_HeadMountedDisplay::MotionControllerComponent::get_CustomDisplayMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x680);
}
int32_t& _Script_HeadMountedDisplay::MotionControllerComponent::get_PlayerIndex() {
    return *(int32_t*)((uintptr_t)this + 0x660);
}
void _Script_HeadMountedDisplay::MotionControllerComponent::set_bDisableLowLatencyUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x670 + 0);
    *(uint8_t*)((uintptr_t)this + 0x670 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::get_Hand() {
    return (void*)((uintptr_t)this + 0x664);
}
bool _Script_HeadMountedDisplay::MotionControllerComponent::get_bDisableLowLatencyUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x670 + 0)) & 1 != 0;
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::get_MotionSource() {
    return (void*)((uintptr_t)this + 0x668);
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::get_CurrentTrackingStatus() {
    return (void*)((uintptr_t)this + 0x674);
}
bool _Script_HeadMountedDisplay::MotionControllerComponent::get_bDisplayDeviceModel() {
    return (*(uint8_t*)((uintptr_t)this + 0x675 + 0)) & 1 != 0;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::set_bDisplayDeviceModel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x675 + 0);
    *(uint8_t*)((uintptr_t)this + 0x675 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::get_DisplayModelSource() {
    return (void*)((uintptr_t)this + 0x678);
}
float _Script_HeadMountedDisplay::MotionControllerComponent::GetParameterValue(void* InName, bool& bValueFound) {
    return;
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::get_DisplayMeshMaterialOverrides() {
    return (void*)((uintptr_t)this + 0x688);
}
_Script_Engine::PrimitiveComponent*& _Script_HeadMountedDisplay::MotionControllerComponent::get_DisplayComponent() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x700);
}
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::MotionControllerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeadMountedDisplay.MotionControllerComponent");
    return result;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetTrackingSource(void* NewSource) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetTrackingMotionSource(void* NewSource) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetDisplayModelSource(void* NewDisplayModelSource) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetCustomDisplayMesh(_Script_Engine::StaticMesh* NewDisplayMesh) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::SetAssociatedPlayerIndex(int32_t NewPlayer) {
    return;
}
void _Script_HeadMountedDisplay::MotionControllerComponent::OnMotionControllerUpdated() {
    return;
}
bool _Script_HeadMountedDisplay::MotionControllerComponent::IsTracked() {
    return;
}
void* _Script_HeadMountedDisplay::MotionControllerComponent::GetTrackingSource() {
    return;
}
