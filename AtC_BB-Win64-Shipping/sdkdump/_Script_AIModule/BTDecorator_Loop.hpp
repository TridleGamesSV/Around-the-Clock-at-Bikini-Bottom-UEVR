#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTDecorator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTDecorator_Loop : public BTDecorator {
    int32_t& get_NumLoops();
    bool get_bInfiniteLoop();
    void set_bInfiniteLoop(bool value);
    float& get_InfiniteLoopTimeoutTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
