#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MatineeActor.hpp"
namespace _Script_Engine {
struct CameraAnim;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MatineeActorCameraAnim : public MatineeActor {
    _Script_Engine::CameraAnim*& get_CameraAnim();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
