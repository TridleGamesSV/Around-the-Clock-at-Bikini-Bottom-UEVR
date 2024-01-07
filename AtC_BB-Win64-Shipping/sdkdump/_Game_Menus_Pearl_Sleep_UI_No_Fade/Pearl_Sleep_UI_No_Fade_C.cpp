#include "..\FUObjectArray.hpp"
#include "Pearl_Sleep_UI_No_Fade_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Pearl_Sleep_UI_No_Fade::Pearl_Sleep_UI_No_Fade_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Pearl_Sleep_UI_No_Fade::Pearl_Sleep_UI_No_Fade_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void _Game_Menus_Pearl_Sleep_UI_No_Fade::Pearl_Sleep_UI_No_Fade_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_Menus_Pearl_Sleep_UI_No_Fade::Pearl_Sleep_UI_No_Fade_C::get_Image_31() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Game_Menus_Pearl_Sleep_UI_No_Fade::Pearl_Sleep_UI_No_Fade_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Pearl_Sleep_UI_No_Fade.Pearl_Sleep_UI_No_Fade_C");
    return result;
}
void _Game_Menus_Pearl_Sleep_UI_No_Fade::Pearl_Sleep_UI_No_Fade_C::ExecuteUbergraph_Pearl_Sleep_UI_No_Fade(int32_t EntryPoint) {
    return;
}
