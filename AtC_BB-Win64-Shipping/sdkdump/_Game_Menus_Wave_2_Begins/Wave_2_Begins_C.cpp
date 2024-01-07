#include "..\FUObjectArray.hpp"
#include "Wave_2_Begins_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_Menus_Wave_2_Begins::Wave_2_Begins_C::get_Animation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void* _Game_Menus_Wave_2_Begins::Wave_2_Begins_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Wave_2_Begins::Wave_2_Begins_C::ExecuteUbergraph_Wave_2_Begins(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_Menus_Wave_2_Begins::Wave_2_Begins_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Wave_2_Begins.Wave_2_Begins_C");
    return result;
}
void _Game_Menus_Wave_2_Begins::Wave_2_Begins_C::Construct0() {
    return;
}
