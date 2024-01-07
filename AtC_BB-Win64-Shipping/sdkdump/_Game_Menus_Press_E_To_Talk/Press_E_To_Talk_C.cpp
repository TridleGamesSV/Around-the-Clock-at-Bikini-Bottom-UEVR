#include "..\FUObjectArray.hpp"
#include "Press_E_To_Talk_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Menus_Press_E_To_Talk::Press_E_To_Talk_C::get_Image_31() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Game_Menus_Press_E_To_Talk::Press_E_To_Talk_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Press_E_To_Talk.Press_E_To_Talk_C");
    return result;
}
