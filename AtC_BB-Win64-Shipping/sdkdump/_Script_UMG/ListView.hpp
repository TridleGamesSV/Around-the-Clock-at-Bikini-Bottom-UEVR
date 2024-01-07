#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TableViewBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct ListView : public TableViewBase {
    float& get_ItemHeight();
    void* get_Items();
    void* get_SelectionMode();
    void* get_OnGenerateRowEvent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
