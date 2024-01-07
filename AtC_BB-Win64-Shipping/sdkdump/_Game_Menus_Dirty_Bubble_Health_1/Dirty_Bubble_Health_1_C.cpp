#include "..\FUObjectArray.hpp"
#include "Dirty_Bubble_Health_1_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Menus_Dirty_Bubble_Health_1::Dirty_Bubble_Health_1_C::get_Image_29() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
float _Game_Menus_Dirty_Bubble_Health_1::Dirty_Bubble_Health_1_C::GetPercent_0() {
    return;
}
_Script_CoreUObject::Class* _Game_Menus_Dirty_Bubble_Health_1::Dirty_Bubble_Health_1_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Dirty_Bubble_Health_1.Dirty_Bubble_Health_1_C");
    return result;
}
