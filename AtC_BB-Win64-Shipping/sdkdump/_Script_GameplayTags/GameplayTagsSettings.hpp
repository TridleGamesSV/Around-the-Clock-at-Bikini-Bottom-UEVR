#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GameplayTagsList.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct GameplayTagsSettings : public GameplayTagsList {
    bool get_ImportTagsFromConfig();
    void set_ImportTagsFromConfig(bool value);
    bool get_WarnOnInvalidTags();
    void set_WarnOnInvalidTags(bool value);
    void* get_CategoryRemapping();
    bool get_FastReplication();
    void set_FastReplication(bool value);
    void* get_GameplayTagTableList();
    void* get_GameplayTagRedirects();
    void* get_CommonlyReplicatedTags();
    int32_t& get_NumBitsForContainerSize();
    int32_t& get_NetIndexFirstBitSegment();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
