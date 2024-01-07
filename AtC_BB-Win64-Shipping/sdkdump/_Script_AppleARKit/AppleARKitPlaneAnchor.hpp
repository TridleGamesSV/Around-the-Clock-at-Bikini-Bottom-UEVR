#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AppleARKitAnchor.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AppleARKit {
#pragma pack(push, 1)
struct AppleARKitPlaneAnchor : public AppleARKitAnchor {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Transform GetTransformToCenter();
    _Script_CoreUObject::Vector GetExtent();
    _Script_CoreUObject::Vector GetCenter();
}; // Size: 0x28
#pragma pack(pop)
}
