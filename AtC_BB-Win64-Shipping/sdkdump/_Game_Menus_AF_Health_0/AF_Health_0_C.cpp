#include "..\FUObjectArray.hpp"
#include "AF_Health_0_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Menus_AF_Health_0::AF_Health_0_C::get_Image_29() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Game_Menus_AF_Health_0::AF_Health_0_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/AF_Health_0.AF_Health_0_C");
    return result;
}
float _Game_Menus_AF_Health_0::AF_Health_0_C::GetPercent_0() {
    return;
}
