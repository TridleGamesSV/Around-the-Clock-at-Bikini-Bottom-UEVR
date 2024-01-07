#include "..\FUObjectArray.hpp"
#include "Rock_Objective_1_No_Fade_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Rock_Objective_1_No_Fade::Rock_Objective_1_No_Fade_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Rock_Objective_1_No_Fade::Rock_Objective_1_No_Fade_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Menus_Rock_Objective_1_No_Fade::Rock_Objective_1_No_Fade_C::get_Image_89() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Game_Menus_Rock_Objective_1_No_Fade::Rock_Objective_1_No_Fade_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Rock_Objective_1_No_Fade.Rock_Objective_1_No_Fade_C");
    return result;
}
void _Game_Menus_Rock_Objective_1_No_Fade::Rock_Objective_1_No_Fade_C::Construct0() {
    return;
}
void _Game_Menus_Rock_Objective_1_No_Fade::Rock_Objective_1_No_Fade_C::ExecuteUbergraph_Rock_Objective_1_No_Fade(int32_t EntryPoint) {
    return;
}
