#include "..\FUObjectArray.hpp"
#include "Combat_Tutorial_Prompt_10_Fadeout_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Combat_Tutorial_Prompt_10_Fadeout::Combat_Tutorial_Prompt_10_Fadeout_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Combat_Tutorial_Prompt_10_Fadeout::Combat_Tutorial_Prompt_10_Fadeout_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_Combat_Tutorial_Prompt_10_Fadeout::Combat_Tutorial_Prompt_10_Fadeout_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Combat_Tutorial_Prompt_10_Fadeout.Combat_Tutorial_Prompt_10_Fadeout_C");
    return result;
}
void _Game_Menus_Combat_Tutorial_Prompt_10_Fadeout::Combat_Tutorial_Prompt_10_Fadeout_C::ExecuteUbergraph_Combat_Tutorial_Prompt_10_Fadeout(int32_t EntryPoint) {
    return;
}
void _Game_Menus_Combat_Tutorial_Prompt_10_Fadeout::Combat_Tutorial_Prompt_10_Fadeout_C::Construct0() {
    return;
}
