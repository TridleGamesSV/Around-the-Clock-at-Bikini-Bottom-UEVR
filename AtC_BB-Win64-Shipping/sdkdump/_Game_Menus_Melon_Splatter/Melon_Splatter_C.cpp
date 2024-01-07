#include "..\FUObjectArray.hpp"
#include "Melon_Splatter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_Menus_Melon_Splatter::Melon_Splatter_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void* _Game_Menus_Melon_Splatter::Melon_Splatter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_Menus_Melon_Splatter::Melon_Splatter_C::get_Image_23() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
void _Game_Menus_Melon_Splatter::Melon_Splatter_C::Construct0() {
    return;
}
_Script_CoreUObject::Class* _Game_Menus_Melon_Splatter::Melon_Splatter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Melon_Splatter.Melon_Splatter_C");
    return result;
}
void _Game_Menus_Melon_Splatter::Melon_Splatter_C::ExecuteUbergraph_Melon_Splatter(int32_t EntryPoint) {
    return;
}
