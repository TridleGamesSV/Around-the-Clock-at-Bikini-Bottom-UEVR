#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AppleARKit {
struct AppleARKitFrame;
}
namespace _Script_AppleARKit {
#pragma pack(push, 1)
struct AppleARKitBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool HitTestAtScreenPosition_TrackingSpace(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D ScreenPosition, void* Types, void*& OutResults);
    bool GetCurrentFrame(_Script_CoreUObject::Object* WorldContextObject, _Script_AppleARKit::AppleARKitFrame& OutCurrentFrame);
}; // Size: 0x28
#pragma pack(pop)
}
