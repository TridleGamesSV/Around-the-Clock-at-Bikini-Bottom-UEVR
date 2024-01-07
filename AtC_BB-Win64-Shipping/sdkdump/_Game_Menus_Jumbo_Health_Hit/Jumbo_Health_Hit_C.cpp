#include "..\FUObjectArray.hpp"
#include "Jumbo_Health_Hit_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Menus_Jumbo_Health_Hit::Jumbo_Health_Hit_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
float _Game_Menus_Jumbo_Health_Hit::Jumbo_Health_Hit_C::GetPercent_0() {
    return;
}
_Script_UMG::Image*& _Game_Menus_Jumbo_Health_Hit::Jumbo_Health_Hit_C::get_Image_29() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
void _Game_Menus_Jumbo_Health_Hit::Jumbo_Health_Hit_C::ExecuteUbergraph_Jumbo_Health_Hit(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_Menus_Jumbo_Health_Hit::Jumbo_Health_Hit_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Jumbo_Health_Hit.Jumbo_Health_Hit_C");
    return result;
}
void _Game_Menus_Jumbo_Health_Hit::Jumbo_Health_Hit_C::Construct0() {
    return;
}
