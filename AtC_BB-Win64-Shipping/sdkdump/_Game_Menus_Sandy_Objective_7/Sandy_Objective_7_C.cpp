#include "..\FUObjectArray.hpp"
#include "Sandy_Objective_7_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Sandy_Objective_7::Sandy_Objective_7_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Sandy_Objective_7::Sandy_Objective_7_C::ExecuteUbergraph_Sandy_Objective_7(int32_t EntryPoint) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Sandy_Objective_7::Sandy_Objective_7_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void _Game_Menus_Sandy_Objective_7::Sandy_Objective_7_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_Menus_Sandy_Objective_7::Sandy_Objective_7_C::get_Image_89() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Game_Menus_Sandy_Objective_7::Sandy_Objective_7_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Sandy_Objective_7.Sandy_Objective_7_C");
    return result;
}
