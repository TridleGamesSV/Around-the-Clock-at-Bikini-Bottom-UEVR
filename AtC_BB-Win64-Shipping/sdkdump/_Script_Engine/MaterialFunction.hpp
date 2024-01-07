#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialFunctionInterface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialFunction : public MaterialFunctionInterface {
    void* get_Description();
    bool get_bExposeToLibrary();
    void set_bExposeToLibrary(bool value);
    bool get_bPrefixParameterNames();
    void set_bPrefixParameterNames(bool value);
    void* get_FunctionExpressions();
    bool get_bReentrantFlag();
    void set_bReentrantFlag(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
