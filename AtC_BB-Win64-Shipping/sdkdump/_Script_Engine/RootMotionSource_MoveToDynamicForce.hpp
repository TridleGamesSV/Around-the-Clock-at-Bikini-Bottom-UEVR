#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RootMotionSource.hpp"
namespace _Script_Engine {
struct CurveVector;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RootMotionSource_MoveToDynamicForce : public RootMotionSource {
    void* get_StartLocation();
    void* get_InitialTargetLocation();
    void* get_TargetLocation();
    bool get_bRestrictSpeedToExpected();
    void set_bRestrictSpeedToExpected(bool value);
    _Script_Engine::CurveVector*& get_PathOffsetCurve();
    _Script_Engine::CurveFloat*& get_TimeMappingCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
