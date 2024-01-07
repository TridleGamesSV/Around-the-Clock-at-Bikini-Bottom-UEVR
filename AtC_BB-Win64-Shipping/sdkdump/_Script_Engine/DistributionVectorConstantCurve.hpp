#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DistributionVector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DistributionVectorConstantCurve : public DistributionVector {
    void* get_ConstantCurve();
    bool get_bLockAxes();
    void set_bLockAxes(bool value);
    void* get_LockedAxes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
