#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryTest.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryTest_Dot : public EnvQueryTest {
    void* get_LineA();
    void* get_LineB();
    void* get_TestMode();
    bool get_bAbsoluteValue();
    void set_bAbsoluteValue(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
