#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeLooping : public SoundNode {
    int32_t& get_LoopCount();
    bool get_bLoopIndefinitely();
    void set_bLoopIndefinitely(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
