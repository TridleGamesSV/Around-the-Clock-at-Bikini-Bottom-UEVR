#include "..\FUObjectArray.hpp"
#include "Plankton_Health_Hit_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Menus_Plankton_Health_Hit::Plankton_Health_Hit_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_Menus_Plankton_Health_Hit::Plankton_Health_Hit_C::get_Image_105() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_Plankton_Health_Hit::Plankton_Health_Hit_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Plankton_Health_Hit.Plankton_Health_Hit_C");
    return result;
}
void _Game_Menus_Plankton_Health_Hit::Plankton_Health_Hit_C::Construct0() {
    return;
}
float _Game_Menus_Plankton_Health_Hit::Plankton_Health_Hit_C::GetPercent_0() {
    return;
}
void _Game_Menus_Plankton_Health_Hit::Plankton_Health_Hit_C::ExecuteUbergraph_Plankton_Health_Hit(int32_t EntryPoint) {
    return;
}
