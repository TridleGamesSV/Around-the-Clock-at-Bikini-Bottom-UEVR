#include "..\FUObjectArray.hpp"
#include "Money_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Money::Money_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Money::Money_C::Construct0() {
    return;
}
_Script_UMG::TextBlock*& _Game_Menus_Money::Money_C::get_TextBlock_70() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x220);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Money::Money_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Menus_Money::Money_C::get_Image_368() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
void* _Game_Menus_Money::Money_C::GetText_0() {
    return;
}
_Script_CoreUObject::Class* _Game_Menus_Money::Money_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Money.Money_C");
    return result;
}
void _Game_Menus_Money::Money_C::ExecuteUbergraph_Money(int32_t EntryPoint) {
    return;
}
