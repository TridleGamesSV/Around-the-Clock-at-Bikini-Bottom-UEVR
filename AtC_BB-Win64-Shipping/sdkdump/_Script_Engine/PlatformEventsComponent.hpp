#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlatformEventsComponent : public ActorComponent {
    void* get_PlatformChangedToLaptopModeDelegate();
    void* get_PlatformChangedToTabletModeDelegate();
    static _Script_CoreUObject::Class* static_class();
    bool SupportsConvertibleLaptops();
    bool IsInTabletMode();
    bool IsInLaptopMode();
}; // Size: 0x28
#pragma pack(pop)
}
