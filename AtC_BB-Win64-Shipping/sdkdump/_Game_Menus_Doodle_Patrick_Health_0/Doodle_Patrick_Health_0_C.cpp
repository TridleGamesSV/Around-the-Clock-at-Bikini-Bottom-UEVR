#include "..\FUObjectArray.hpp"
#include "Doodle_Patrick_Health_0_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Menus_Doodle_Patrick_Health_0::Doodle_Patrick_Health_0_C::get_Image_29() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
float _Game_Menus_Doodle_Patrick_Health_0::Doodle_Patrick_Health_0_C::GetPercent_0() {
    return;
}
_Script_CoreUObject::Class* _Game_Menus_Doodle_Patrick_Health_0::Doodle_Patrick_Health_0_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Doodle_Patrick_Health_0.Doodle_Patrick_Health_0_C");
    return result;
}
