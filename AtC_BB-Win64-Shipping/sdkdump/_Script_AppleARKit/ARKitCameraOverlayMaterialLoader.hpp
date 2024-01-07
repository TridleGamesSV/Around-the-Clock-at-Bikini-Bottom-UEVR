#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AppleARKit {
#pragma pack(push, 1)
struct ARKitCameraOverlayMaterialLoader : public _Script_CoreUObject::Object {
    _Script_Engine::MaterialInterface*& get_DefaultCameraOverlayMaterial();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
