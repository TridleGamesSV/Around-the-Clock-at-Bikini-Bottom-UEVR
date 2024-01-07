#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneCapture.hpp"
namespace _Script_Engine {
struct SceneCaptureComponentCube;
}
namespace _Script_Engine {
struct DrawFrustumComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SceneCaptureCube : public SceneCapture {
    _Script_Engine::SceneCaptureComponentCube*& get_CaptureComponentCube();
    _Script_Engine::DrawFrustumComponent*& get_DrawFrustum();
    static _Script_CoreUObject::Class* static_class();
    void OnInterpToggle(bool bEnable);
}; // Size: 0x28
#pragma pack(pop)
}
