#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTAuxiliaryNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTService : public BTAuxiliaryNode {
    float& get_Interval();
    float& get_RandomDeviation();
    bool get_bCallTickOnSearchStart();
    void set_bCallTickOnSearchStart(bool value);
    bool get_bRestartTimerOnEachActivation();
    void set_bRestartTimerOnEachActivation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
