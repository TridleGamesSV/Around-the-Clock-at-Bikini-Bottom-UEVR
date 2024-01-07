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
struct RootMotionSourceGroup {
    bool get_bHasAdditiveSources();
    void set_bHasAdditiveSources(bool value);
    bool get_bHasOverrideSources();
    void set_bHasOverrideSources(bool value);
    void* get_LastPreAdditiveVelocity();
    bool get_bIsAdditiveVelocityApplied();
    void set_bIsAdditiveVelocityApplied(bool value);
    void* get_LastAccumulatedSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
