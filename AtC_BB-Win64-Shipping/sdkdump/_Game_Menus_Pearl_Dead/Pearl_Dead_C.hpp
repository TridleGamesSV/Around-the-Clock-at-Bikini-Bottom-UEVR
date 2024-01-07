#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Pearl_Dead {
#pragma pack(push, 1)
struct Pearl_Dead_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_105();
    static _Script_CoreUObject::Class* static_class();
    float GetPercent_0();
    void Construct0();
    void ExecuteUbergraph_Pearl_Dead(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
