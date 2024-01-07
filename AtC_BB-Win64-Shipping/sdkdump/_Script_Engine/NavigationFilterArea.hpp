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
struct NavigationFilterArea {
    void* get_AreaClass();
    float& get_TravelCostOverride();
    float& get_EnteringCostOverride();
    bool get_bIsExcluded();
    void set_bIsExcluded(bool value);
    bool get_bOverrideTravelCost();
    void set_bOverrideTravelCost(bool value);
    bool get_bOverrideEnteringCost();
    void set_bOverrideEnteringCost(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
