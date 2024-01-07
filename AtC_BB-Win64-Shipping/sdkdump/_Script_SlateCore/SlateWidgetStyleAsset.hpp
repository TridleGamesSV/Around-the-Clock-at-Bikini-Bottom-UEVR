#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_SlateCore {
struct SlateWidgetStyleContainerBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct SlateWidgetStyleAsset : public _Script_CoreUObject::Object {
    _Script_SlateCore::SlateWidgetStyleContainerBase*& get_CustomStyle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
