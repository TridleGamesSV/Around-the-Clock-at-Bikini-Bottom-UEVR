#include "..\FUObjectArray.hpp"
#include "Prowlnos_Objective_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Prowlnos_Objective::Prowlnos_Objective_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Prowlnos_Objective::Prowlnos_Objective_C::Construct0() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Prowlnos_Objective::Prowlnos_Objective_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Menus_Prowlnos_Objective::Prowlnos_Objective_C::get_Image_89() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
void _Game_Menus_Prowlnos_Objective::Prowlnos_Objective_C::ExecuteUbergraph_Prowlnos_Objective(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_Menus_Prowlnos_Objective::Prowlnos_Objective_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Prowlnos_Objective.Prowlnos_Objective_C");
    return result;
}
