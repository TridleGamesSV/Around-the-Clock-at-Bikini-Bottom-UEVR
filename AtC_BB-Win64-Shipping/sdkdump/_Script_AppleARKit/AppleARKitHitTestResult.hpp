#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AppleARKit {
struct AppleARKitAnchor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AppleARKit {
#pragma pack(push, 1)
struct AppleARKitHitTestResult {
    void* get_Type();
    float& get_Distance();
    void* get_Transform();
    _Script_AppleARKit::AppleARKitAnchor*& get_Anchor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
