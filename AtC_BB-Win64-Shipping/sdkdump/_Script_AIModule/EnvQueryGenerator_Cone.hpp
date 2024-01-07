#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryGenerator_ProjectedPoints.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryGenerator_Cone : public EnvQueryGenerator_ProjectedPoints {
    void* get_AlignedPointsDistance();
    void* get_ConeDegrees();
    void* get_AngleStep();
    void* get_Range();
    void* get_CenterActor();
    bool get_bIncludeContextLocation();
    void set_bIncludeContextLocation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
