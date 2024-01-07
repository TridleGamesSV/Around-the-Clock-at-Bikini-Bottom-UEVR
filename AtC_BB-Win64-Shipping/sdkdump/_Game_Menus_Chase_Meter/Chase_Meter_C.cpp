#include "..\FUObjectArray.hpp"
#include "Chase_Meter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::ProgressBar*& _Game_Menus_Chase_Meter::Chase_Meter_C::get_ProgressBar_80() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x230);
}
void* _Game_Menus_Chase_Meter::Chase_Meter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Chase_Meter::Chase_Meter_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_Chase_Meter::Chase_Meter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Chase_Meter.Chase_Meter_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Chase_Meter::Chase_Meter_C::get_Move() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
void _Game_Menus_Chase_Meter::Chase_Meter_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_Menus_Chase_Meter::Chase_Meter_C::get_Image_43() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
_Script_UMG::Image*& _Game_Menus_Chase_Meter::Chase_Meter_C::get_Image_102() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x228);
}
void _Game_Menus_Chase_Meter::Chase_Meter_C::Pause_Chase() {
    return;
}
void _Game_Menus_Chase_Meter::Chase_Meter_C::Unpause_Chase() {
    return;
}
void _Game_Menus_Chase_Meter::Chase_Meter_C::ExecuteUbergraph_Chase_Meter(int32_t EntryPoint) {
    return;
}
