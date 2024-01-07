#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NavAgentProperties.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavDataConfig : public NavAgentProperties {
    void* get_Name();
    void* get_Color();
    void* get_DefaultQueryExtent();
    void* get_NavigationDataClass();
    void* get_NavigationDataClassName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
