#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct TextureCube;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ReflectionCaptureComponent : public SceneComponent {
    _Script_Engine::BillboardComponent*& get_CaptureOffsetComponent();
    void* get_ReflectionSourceType();
    _Script_Engine::TextureCube*& get_Cubemap();
    float& get_SourceCubemapAngle();
    float& get_Brightness();
    void* get_CaptureOffset();
    void* get_MapBuildDataId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
