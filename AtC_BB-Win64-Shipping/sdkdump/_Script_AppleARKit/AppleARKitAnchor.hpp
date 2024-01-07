#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AppleARKit {
#pragma pack(push, 1)
struct AppleARKitAnchor : public _Script_CoreUObject::Object {
    void* get_Identifier();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Transform GetTransform();
}; // Size: 0x28
#pragma pack(pop)
}
