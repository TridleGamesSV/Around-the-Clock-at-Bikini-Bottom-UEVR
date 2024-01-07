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
struct DistributionVectorUniformCurve : public DistributionVector {
    void* get_ConstantCurve();
    bool get_bLockAxes1();
    void set_bLockAxes1(bool value);
    bool get_bLockAxes2();
    void set_bLockAxes2(bool value);
    void* get_LockedAxes();
    void* get_MirrorFlags();
    bool get_bUseExtremes();
    void set_bUseExtremes(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
