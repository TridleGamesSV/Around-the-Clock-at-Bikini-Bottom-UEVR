#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OculusHMD {
#pragma pack(push, 1)
struct OculusHMDRuntimeSettings : public _Script_CoreUObject::Object {
    bool get_bAutoEnabled();
    void set_bAutoEnabled(bool value);
    void* get_SplashDescs();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
