#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Exporter : public _Script_CoreUObject::Object {
    void* get_SupportedClass();
    _Script_CoreUObject::Object*& get_ExportRootScope();
    void* get_FormatExtension();
    void* get_FormatDescription();
    int32_t& get_PreferredFormatIndex();
    int32_t& get_TextIndent();
    bool get_bText();
    void set_bText(bool value);
    bool get_bSelectedOnly();
    void set_bSelectedOnly(bool value);
    bool get_bForceFileOperations();
    void set_bForceFileOperations(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
