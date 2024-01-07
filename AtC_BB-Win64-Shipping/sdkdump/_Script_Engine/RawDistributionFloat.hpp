#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RawDistribution.hpp"
namespace _Script_Engine {
struct DistributionFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RawDistributionFloat : public RawDistribution {
    float& get_MinValue();
    float& get_MaxValue();
    _Script_Engine::DistributionFloat*& get_Distribution();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
