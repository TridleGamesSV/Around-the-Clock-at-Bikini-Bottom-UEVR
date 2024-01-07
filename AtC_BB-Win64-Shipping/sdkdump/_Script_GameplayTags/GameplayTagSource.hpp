#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_GameplayTags {
struct GameplayTagsList;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct GameplayTagSource {
    void* get_SourceName();
    void* get_SourceType();
    _Script_GameplayTags::GameplayTagsList*& get_SourceTagList();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
