#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneCaptureComponent.hpp"
namespace _Script_Engine {
struct TextureRenderTargetCube;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SceneCaptureComponentCube : public SceneCaptureComponent {
    _Script_Engine::TextureRenderTargetCube*& get_TextureTarget();
    static _Script_CoreUObject::Class* static_class();
    void CaptureScene();
}; // Size: 0x28
#pragma pack(pop)
}
