#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EditableGameplayTagQueryExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct EditableGameplayTagQueryExpression_NoTagsMatch : public EditableGameplayTagQueryExpression {
    void* get_Tags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
