#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_AssetPlayerBase : public AnimNode_Base {
    bool get_bIgnoreForRelevancyTest();
    void set_bIgnoreForRelevancyTest(bool value);
    int32_t& get_GroupIndex();
    void* get_GroupRole();
    float& get_BlendWeight();
    float& get_InternalTimeAccumulator();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
