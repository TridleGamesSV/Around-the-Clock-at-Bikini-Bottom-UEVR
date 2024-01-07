#include "..\FUObjectArray.hpp"
#include "Jumbo_Health_3_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
float _Game_Menus_Jumbo_Health_3::Jumbo_Health_3_C::GetPercent_0() {
    return;
}
_Script_UMG::Image*& _Game_Menus_Jumbo_Health_3::Jumbo_Health_3_C::get_Image_29() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Game_Menus_Jumbo_Health_3::Jumbo_Health_3_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Jumbo_Health_3.Jumbo_Health_3_C");
    return result;
}
