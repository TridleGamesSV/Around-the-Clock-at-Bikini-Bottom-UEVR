#include "..\FUObjectArray.hpp"
#include "Freeze_Fade_Out_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_CoreUObject::Class* _Game_Menus_Freeze_Fade_Out::Freeze_Fade_Out_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Freeze_Fade_Out.Freeze_Fade_Out_C");
    return result;
}
void* _Game_Menus_Freeze_Fade_Out::Freeze_Fade_Out_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Freeze_Fade_Out::Freeze_Fade_Out_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void _Game_Menus_Freeze_Fade_Out::Freeze_Fade_Out_C::ExecuteUbergraph_Freeze_Fade_Out(int32_t EntryPoint) {
    return;
}
_Script_UMG::Image*& _Game_Menus_Freeze_Fade_Out::Freeze_Fade_Out_C::get_Image_67() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
void _Game_Menus_Freeze_Fade_Out::Freeze_Fade_Out_C::Construct0() {
    return;
}
