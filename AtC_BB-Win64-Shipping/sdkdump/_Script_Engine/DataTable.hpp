#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct ScriptStruct;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DataTable : public _Script_CoreUObject::Object {
    _Script_CoreUObject::ScriptStruct*& get_RowStruct();
    bool get_bStripFromClientBuilds();
    void set_bStripFromClientBuilds(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
