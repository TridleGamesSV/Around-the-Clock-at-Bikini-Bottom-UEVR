#include "..\FUObjectArray.hpp"
#include "Freeze_Fade_In_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_Menus_Freeze_Fade_In::Freeze_Fade_In_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void* _Game_Menus_Freeze_Fade_In::Freeze_Fade_In_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Freeze_Fade_In::Freeze_Fade_In_C::ExecuteUbergraph_Freeze_Fade_In(int32_t EntryPoint) {
    return;
}
_Script_UMG::Image*& _Game_Menus_Freeze_Fade_In::Freeze_Fade_In_C::get_Image_67() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Game_Menus_Freeze_Fade_In::Freeze_Fade_In_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Freeze_Fade_In.Freeze_Fade_In_C");
    return result;
}
void _Game_Menus_Freeze_Fade_In::Freeze_Fade_In_C::Construct0() {
    return;
}
