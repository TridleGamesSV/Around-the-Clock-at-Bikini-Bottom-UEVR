#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryGenerator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryGenerator_Composite : public EnvQueryGenerator {
    void* get_Generators();
    bool get_bAllowDifferentItemTypes();
    void set_bAllowDifferentItemTypes(bool value);
    bool get_bHasMatchingItemType();
    void set_bHasMatchingItemType(bool value);
    void* get_ForcedItemType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
