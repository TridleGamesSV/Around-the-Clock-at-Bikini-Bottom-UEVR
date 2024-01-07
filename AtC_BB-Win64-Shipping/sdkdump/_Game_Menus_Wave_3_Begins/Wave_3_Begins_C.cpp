#include "..\FUObjectArray.hpp"
#include "Wave_3_Begins_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Wave_3_Begins::Wave_3_Begins_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Wave_3_Begins::Wave_3_Begins_C::get_Animation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_Wave_3_Begins::Wave_3_Begins_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Wave_3_Begins.Wave_3_Begins_C");
    return result;
}
void _Game_Menus_Wave_3_Begins::Wave_3_Begins_C::Construct0() {
    return;
}
void _Game_Menus_Wave_3_Begins::Wave_3_Begins_C::ExecuteUbergraph_Wave_3_Begins(int32_t EntryPoint) {
    return;
}
