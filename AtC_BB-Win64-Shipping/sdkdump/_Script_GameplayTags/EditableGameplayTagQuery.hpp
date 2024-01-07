#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_GameplayTags {
struct EditableGameplayTagQueryExpression;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct EditableGameplayTagQuery : public _Script_CoreUObject::Object {
    void* get_UserDescription();
    _Script_GameplayTags::EditableGameplayTagQueryExpression*& get_RootExpression();
    void* get_TagQueryExportText_Helper();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
