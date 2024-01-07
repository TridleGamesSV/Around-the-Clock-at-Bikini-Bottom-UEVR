#include "..\FUObjectArray.hpp"
#include "Cinematic_Bars_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Game_Menus_Cinematic_Bars::Cinematic_Bars_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Cinematic_Bars.Cinematic_Bars_C");
    return result;
}
_Script_UMG::Image*& _Game_Menus_Cinematic_Bars::Cinematic_Bars_C::get_Image_37() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_Menus_Cinematic_Bars::Cinematic_Bars_C::get_Image_38() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
