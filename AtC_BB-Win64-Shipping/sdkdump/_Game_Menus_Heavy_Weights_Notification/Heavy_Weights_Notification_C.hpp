#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Heavy_Weights_Notification {
#pragma pack(push, 1)
struct Heavy_Weights_Notification_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Heavy_Weights_Notification(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
