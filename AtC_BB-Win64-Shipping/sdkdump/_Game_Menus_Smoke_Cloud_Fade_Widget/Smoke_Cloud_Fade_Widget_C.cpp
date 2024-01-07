#include "..\FUObjectArray.hpp"
#include "Smoke_Cloud_Fade_Widget_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Menus_Smoke_Cloud_Fade_Widget::Smoke_Cloud_Fade_Widget_C::Construct0() {
    return;
}
void* _Game_Menus_Smoke_Cloud_Fade_Widget::Smoke_Cloud_Fade_Widget_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Smoke_Cloud_Fade_Widget::Smoke_Cloud_Fade_Widget_C::ExecuteUbergraph_Smoke_Cloud_Fade_Widget(int32_t EntryPoint) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Smoke_Cloud_Fade_Widget::Smoke_Cloud_Fade_Widget_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Menus_Smoke_Cloud_Fade_Widget::Smoke_Cloud_Fade_Widget_C::get_Image_30() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Game_Menus_Smoke_Cloud_Fade_Widget::Smoke_Cloud_Fade_Widget_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Smoke_Cloud_Fade_Widget.Smoke_Cloud_Fade_Widget_C");
    return result;
}
