#include "..\FUObjectArray.hpp"
#include "Spam_E_Escape_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Menus_Spam_E_Escape::Spam_E_Escape_C::get_Image_27() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_Menus_Spam_E_Escape::Spam_E_Escape_C::get_Image_31() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_Spam_E_Escape::Spam_E_Escape_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Spam_E_Escape.Spam_E_Escape_C");
    return result;
}
