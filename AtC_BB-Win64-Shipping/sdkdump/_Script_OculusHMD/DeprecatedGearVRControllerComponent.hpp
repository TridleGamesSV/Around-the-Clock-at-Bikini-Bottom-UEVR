#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_HeadMountedDisplay {
struct MotionControllerComponent;
}
namespace _Script_OculusHMD {
#pragma pack(push, 1)
struct DeprecatedGearVRControllerComponent : public _Script_Engine::SceneComponent {
    _Script_Engine::StaticMesh*& get_ControllerMesh();
    static _Script_CoreUObject::Class* static_class();
    _Script_HeadMountedDisplay::MotionControllerComponent* GetMotionController();
    _Script_Engine::StaticMeshComponent* GetControllerMesh();
}; // Size: 0x28
#pragma pack(pop)
}
