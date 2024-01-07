#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PacketSimulationSettings {
    int32_t& get_PktLoss();
    int32_t& get_PktOrder();
    int32_t& get_PktDup();
    int32_t& get_PktLag();
    int32_t& get_PktLagVariance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
