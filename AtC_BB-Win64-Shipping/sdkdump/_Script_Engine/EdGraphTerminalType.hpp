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
struct EdGraphTerminalType {
    void* get_TerminalCategory();
    void* get_TerminalSubCategory();
    void* get_TerminalSubCategoryObject();
    bool get_bTerminalIsConst();
    void set_bTerminalIsConst(bool value);
    bool get_bTerminalIsWeakPointer();
    void set_bTerminalIsWeakPointer(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
