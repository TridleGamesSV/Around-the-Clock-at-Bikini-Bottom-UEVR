#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneCaptureComponent.hpp"
#include "SceneCaptureComponent2D.hpp"
#include "TextureRenderTarget2D.hpp"
void* _Script_Engine::SceneCaptureComponent2D::get_ProjectionType() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Script_Engine::SceneCaptureComponent2D::get_CompositeMode() {
    return (void*)((uintptr_t)this + 0x331);
}
float& _Script_Engine::SceneCaptureComponent2D::get_FOVAngle() {
    return *(float*)((uintptr_t)this + 0x31c);
}
float& _Script_Engine::SceneCaptureComponent2D::get_PostProcessBlendWeight() {
    return *(float*)((uintptr_t)this + 0x860);
}
void* _Script_Engine::SceneCaptureComponent2D::get_PostProcessSettings() {
    return (void*)((uintptr_t)this + 0x340);
}
float& _Script_Engine::SceneCaptureComponent2D::get_OrthoWidth() {
    return *(float*)((uintptr_t)this + 0x320);
}
_Script_Engine::TextureRenderTarget2D*& _Script_Engine::SceneCaptureComponent2D::get_TextureTarget() {
    return *(_Script_Engine::TextureRenderTarget2D**)((uintptr_t)this + 0x328);
}
bool _Script_Engine::SceneCaptureComponent2D::get_bUseCustomProjectionMatrix() {
    return (*(uint8_t*)((uintptr_t)this + 0x864 + 0)) & 1 != 0;
}
void* _Script_Engine::SceneCaptureComponent2D::get_CaptureSource() {
    return (void*)((uintptr_t)this + 0x330);
}
void _Script_Engine::SceneCaptureComponent2D::set_bUseCustomProjectionMatrix(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x864 + 0);
    *(uint8_t*)((uintptr_t)this + 0x864 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SceneCaptureComponent2D::get_CustomProjectionMatrix() {
    return (void*)((uintptr_t)this + 0x870);
}
bool _Script_Engine::SceneCaptureComponent2D::get_bEnableClipPlane() {
    return (*(uint8_t*)((uintptr_t)this + 0x8b0 + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent2D::set_bEnableClipPlane(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SceneCaptureComponent2D::get_ClipPlaneBase() {
    return (void*)((uintptr_t)this + 0x8b4);
}
void* _Script_Engine::SceneCaptureComponent2D::get_ClipPlaneNormal() {
    return (void*)((uintptr_t)this + 0x8c0);
}
bool _Script_Engine::SceneCaptureComponent2D::get_bCameraCutThisFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x8cc + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent2D::CaptureScene() {
    return;
}
void _Script_Engine::SceneCaptureComponent2D::set_bCameraCutThisFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x8cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SceneCaptureComponent2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCaptureComponent2D");
    return result;
}
void _Script_Engine::SceneCaptureComponent2D::AddOrUpdateBlendable(void* InBlendableObject, float InWeight) {
    return;
}
