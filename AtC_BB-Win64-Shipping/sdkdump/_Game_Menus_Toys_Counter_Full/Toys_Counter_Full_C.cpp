#include "..\FUObjectArray.hpp"
#include "Toys_Counter_Full_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Toys_Counter_Full::Toys_Counter_Full_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Toys_Counter_Full::Toys_Counter_Full_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Menus_Toys_Counter_Full::Toys_Counter_Full_C::get_Image_368() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Game_Menus_Toys_Counter_Full::Toys_Counter_Full_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Toys_Counter_Full.Toys_Counter_Full_C");
    return result;
}
void _Game_Menus_Toys_Counter_Full::Toys_Counter_Full_C::ExecuteUbergraph_Toys_Counter_Full(int32_t EntryPoint) {
    return;
}
void* _Game_Menus_Toys_Counter_Full::Toys_Counter_Full_C::GetText_0() {
    return;
}
void _Game_Menus_Toys_Counter_Full::Toys_Counter_Full_C::Construct0() {
    return;
}
