#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BodySetup.hpp"
#include "..\_Script_Engine\LocalPlayer.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "..\_Script_Engine\TextureRenderTarget2D.hpp"
#include "UserWidget.hpp"
#include "WidgetComponent.hpp"
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_MaskedMaterial_OneSided() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x750);
}
bool _Script_UMG::WidgetComponent::get_bManuallyRedraw() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a0 + 0)) & 1 != 0;
}
void* _Script_UMG::WidgetComponent::get_Space() {
    return (void*)((uintptr_t)this + 0x688);
}
void _Script_UMG::WidgetComponent::set_bRedrawRequested(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetComponent::get_WidgetClass() {
    return (void*)((uintptr_t)this + 0x690);
}
void* _Script_UMG::WidgetComponent::get_TimingPolicy() {
    return (void*)((uintptr_t)this + 0x689);
}
void* _Script_UMG::WidgetComponent::get_DrawSize() {
    return (void*)((uintptr_t)this + 0x698);
}
void* _Script_UMG::WidgetComponent::get_BlendMode() {
    return (void*)((uintptr_t)this + 0x6f4);
}
void _Script_UMG::WidgetComponent::set_bManuallyRedraw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetComponent::get_bEditTimeUsable() {
    return (*(uint8_t*)((uintptr_t)this + 0x769 + 0)) & 1 != 0;
}
bool _Script_UMG::WidgetComponent::get_bRedrawRequested() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a1 + 0)) & 1 != 0;
}
float& _Script_UMG::WidgetComponent::get_RedrawTime() {
    return *(float*)((uintptr_t)this + 0x6a4);
}
void* _Script_UMG::WidgetComponent::get_CurrentDrawSize() {
    return (void*)((uintptr_t)this + 0x6b0);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_TranslucentMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x728);
}
bool _Script_UMG::WidgetComponent::get_bDrawAtDesiredSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b8 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bDrawAtDesiredSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetComponent::get_Pivot() {
    return (void*)((uintptr_t)this + 0x6bc);
}
void _Script_UMG::WidgetComponent::SetBackgroundColor(_Script_CoreUObject::LinearColor NewBackgroundColor) {
    return;
}
bool _Script_UMG::WidgetComponent::get_bReceiveHardwareInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c4 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bReceiveHardwareInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetComponent::get_bWindowFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c5 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bWindowFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::LocalPlayer*& _Script_UMG::WidgetComponent::get_OwnerPlayer() {
    return *(_Script_Engine::LocalPlayer**)((uintptr_t)this + 0x6c8);
}
void* _Script_UMG::WidgetComponent::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0x6d0);
}
void* _Script_UMG::WidgetComponent::get_TintColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x6e0);
}
_Script_Engine::MaterialInstanceDynamic* _Script_UMG::WidgetComponent::GetMaterialInstance() {
    return;
}
float& _Script_UMG::WidgetComponent::get_OpacityFromTexture() {
    return *(float*)((uintptr_t)this + 0x6f0);
}
bool _Script_UMG::WidgetComponent::get_bIsTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x6f5 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bIsTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6f5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6f5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::WidgetComponent::get_TickWhenOffscreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x6f6 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_TickWhenOffscreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6f6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6f6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::UserWidget*& _Script_UMG::WidgetComponent::get_Widget() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x6f8);
}
_Script_Engine::BodySetup*& _Script_UMG::WidgetComponent::get_BodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x720);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_TranslucentMaterial_OneSided() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x730);
}
_Script_Engine::LocalPlayer* _Script_UMG::WidgetComponent::GetOwnerPlayer() {
    return;
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_OpaqueMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x738);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_OpaqueMaterial_OneSided() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x740);
}
_Script_Engine::MaterialInterface*& _Script_UMG::WidgetComponent::get_MaskedMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x748);
}
_Script_Engine::TextureRenderTarget2D*& _Script_UMG::WidgetComponent::get_RenderTarget() {
    return *(_Script_Engine::TextureRenderTarget2D**)((uintptr_t)this + 0x758);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_UMG::WidgetComponent::get_MaterialInstance() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x760);
}
bool _Script_UMG::WidgetComponent::get_bAddedToScreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x768 + 0)) & 1 != 0;
}
void _Script_UMG::WidgetComponent::set_bAddedToScreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x768 + 0);
    *(uint8_t*)((uintptr_t)this + 0x768 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_UMG::WidgetComponent::get_LayerZOrder() {
    return *(int32_t*)((uintptr_t)this + 0x778);
}
void _Script_UMG::WidgetComponent::set_bEditTimeUsable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x769 + 0);
    *(uint8_t*)((uintptr_t)this + 0x769 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::WidgetComponent::get_SharedLayerName() {
    return (void*)((uintptr_t)this + 0x770);
}
void _Script_UMG::WidgetComponent::SetTintColorAndOpacity(_Script_CoreUObject::LinearColor NewTintColorAndOpacity) {
    return;
}
void* _Script_UMG::WidgetComponent::get_GeometryMode() {
    return (void*)((uintptr_t)this + 0x77c);
}
float& _Script_UMG::WidgetComponent::get_CylinderArcAngle() {
    return *(float*)((uintptr_t)this + 0x780);
}
_Script_CoreUObject::Class* _Script_UMG::WidgetComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetComponent");
    return result;
}
void _Script_UMG::WidgetComponent::SetWidget(_Script_UMG::UserWidget* Widget) {
    return;
}
void _Script_UMG::WidgetComponent::SetOwnerPlayer(_Script_Engine::LocalPlayer* LocalPlayer) {
    return;
}
void _Script_UMG::WidgetComponent::SetDrawSize(_Script_CoreUObject::Vector2D Size) {
    return;
}
void _Script_UMG::WidgetComponent::RequestRedraw() {
    return;
}
_Script_UMG::UserWidget* _Script_UMG::WidgetComponent::GetUserWidgetObject() {
    return;
}
_Script_Engine::TextureRenderTarget2D* _Script_UMG::WidgetComponent::GetRenderTarget() {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::WidgetComponent::GetDrawSize() {
    return;
}
