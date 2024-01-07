#include "..\FUObjectArray.hpp"
#include "_3_30AM_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_3_30AM::_3_30AM_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_3_30AM::_3_30AM_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_3_30AM::_3_30AM_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/3_30AM.3_30AM_C");
    return result;
}
void _Game_Menus_3_30AM::_3_30AM_C::Construct0() {
    return;
}
void _Game_Menus_3_30AM::_3_30AM_C::ExecuteUbergraph_3_30AM(int32_t EntryPoint) {
    return;
}
