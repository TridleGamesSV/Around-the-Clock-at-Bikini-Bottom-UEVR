#include "..\FUObjectArray.hpp"
#include "_3_50AM_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Menus_3_50AM::_3_50AM_C::ExecuteUbergraph_3_50AM(int32_t EntryPoint) {
    return;
}
void* _Game_Menus_3_50AM::_3_50AM_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_3_50AM::_3_50AM_C::Construct0() {
    return;
}
_Script_CoreUObject::Class* _Game_Menus_3_50AM::_3_50AM_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/3_50AM.3_50AM_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_Menus_3_50AM::_3_50AM_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
