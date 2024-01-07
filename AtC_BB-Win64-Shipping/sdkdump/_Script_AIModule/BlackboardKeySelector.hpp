#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BlackboardKeySelector {
    void* get_AllowedTypes();
    void* get_SelectedKeyName();
    void* get_SelectedKeyType();
    void* get_SelectedKeyID();
    bool get_bNoneIsAllowedValue();
    void set_bNoneIsAllowedValue(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
