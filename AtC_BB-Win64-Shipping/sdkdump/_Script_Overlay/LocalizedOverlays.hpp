#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Overlays.hpp"
namespace _Script_Overlay {
struct BasicOverlays;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Overlay {
#pragma pack(push, 1)
struct LocalizedOverlays : public Overlays {
    _Script_Overlay::BasicOverlays*& get_DefaultOverlays();
    void* get_LocaleToOverlaysMap();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
