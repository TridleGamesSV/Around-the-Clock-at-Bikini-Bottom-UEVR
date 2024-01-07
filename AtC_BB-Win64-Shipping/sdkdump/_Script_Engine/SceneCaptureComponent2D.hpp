#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneCaptureComponent.hpp"
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SceneCaptureComponent2D : public SceneCaptureComponent {
    void* get_ProjectionType();
    float& get_FOVAngle();
    float& get_OrthoWidth();
    _Script_Engine::TextureRenderTarget2D*& get_TextureTarget();
    void* get_CaptureSource();
    void* get_CompositeMode();
    void* get_PostProcessSettings();
    float& get_PostProcessBlendWeight();
    bool get_bUseCustomProjectionMatrix();
    void set_bUseCustomProjectionMatrix(bool value);
    void* get_CustomProjectionMatrix();
    bool get_bEnableClipPlane();
    void set_bEnableClipPlane(bool value);
    void* get_ClipPlaneBase();
    void* get_ClipPlaneNormal();
    bool get_bCameraCutThisFrame();
    void set_bCameraCutThisFrame(bool value);
    static _Script_CoreUObject::Class* static_class();
    void CaptureScene();
    void AddOrUpdateBlendable(void* InBlendableObject, float InWeight);
}; // Size: 0x28
#pragma pack(pop)
}
