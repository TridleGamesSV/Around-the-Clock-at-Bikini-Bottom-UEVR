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
struct LocalizedSubtitle {
    void* get_LanguageExt();
    void* get_Subtitles();
    bool get_bMature();
    void set_bMature(bool value);
    bool get_bManualWordWrap();
    void set_bManualWordWrap(bool value);
    bool get_bSingleLine();
    void set_bSingleLine(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
