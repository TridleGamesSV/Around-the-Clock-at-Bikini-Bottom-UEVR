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
struct DistributionVectorUniform : public DistributionVector {
    void* get_Max();
    void* get_Min();
    bool get_bLockAxes();
    void set_bLockAxes(bool value);
    void* get_LockedAxes();
    void* get_MirrorFlags();
    bool get_bUseExtremes();
    void set_bUseExtremes(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
