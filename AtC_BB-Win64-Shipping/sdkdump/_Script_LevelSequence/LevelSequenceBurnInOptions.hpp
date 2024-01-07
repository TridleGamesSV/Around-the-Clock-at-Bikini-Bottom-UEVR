#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_LevelSequence {
struct LevelSequenceBurnInInitSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LevelSequence {
#pragma pack(push, 1)
struct LevelSequenceBurnInOptions : public _Script_CoreUObject::Object {
    bool get_bUseBurnIn();
    void set_bUseBurnIn(bool value);
    void* get_BurnInClass();
    _Script_LevelSequence::LevelSequenceBurnInInitSettings*& get_Settings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
