#include "..\FUObjectArray.hpp"
#include "Cannon_Cooldown_Bar_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Cannon_Cooldown_Bar.Cannon_Cooldown_Bar_C");
    return result;
}
_Script_UMG::Image*& _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
_Script_UMG::ProgressBar*& _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::get_ProgressBar_0() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x230);
}
_Script_UMG::Image*& _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::get_Image_356() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x228);
}
float _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::GetPercent_Cannon() {
    return;
}
float _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::GetPercent_0() {
    return;
}
void _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::Construct0() {
    return;
}
void _Game_Menus_Cannon_Cooldown_Bar::Cannon_Cooldown_Bar_C::ExecuteUbergraph_Cannon_Cooldown_Bar(int32_t EntryPoint) {
    return;
}
