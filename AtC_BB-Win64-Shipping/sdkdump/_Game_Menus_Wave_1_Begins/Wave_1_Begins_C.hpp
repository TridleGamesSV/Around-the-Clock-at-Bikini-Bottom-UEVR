#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Wave_1_Begins {
#pragma pack(push, 1)
struct Wave_1_Begins_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Animation();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Wave_1_Begins(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
