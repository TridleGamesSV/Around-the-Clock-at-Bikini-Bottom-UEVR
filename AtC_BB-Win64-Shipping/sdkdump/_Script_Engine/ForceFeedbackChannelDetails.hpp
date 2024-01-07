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
struct ForceFeedbackChannelDetails {
    bool get_bAffectsLeftLarge();
    void set_bAffectsLeftLarge(bool value);
    bool get_bAffectsLeftSmall();
    void set_bAffectsLeftSmall(bool value);
    bool get_bAffectsRightLarge();
    void set_bAffectsRightLarge(bool value);
    bool get_bAffectsRightSmall();
    void set_bAffectsRightSmall(bool value);
    void* get_Curve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
