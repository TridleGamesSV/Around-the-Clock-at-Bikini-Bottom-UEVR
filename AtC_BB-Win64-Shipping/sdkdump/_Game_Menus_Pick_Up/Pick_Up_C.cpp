#include "..\FUObjectArray.hpp"
#include "Pick_Up_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Menus_Pick_Up::Pick_Up_C::get_Image_31() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Game_Menus_Pick_Up::Pick_Up_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Pick_Up.Pick_Up_C");
    return result;
}
