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
namespace _Game_Menus_Golden_Boobman_Jumpscare {
#pragma pack(push, 1)
struct Golden_Boobman_Jumpscare_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_33();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Golden_Boobman_Jumpscare(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
