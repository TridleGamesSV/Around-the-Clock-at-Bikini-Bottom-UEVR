#include "..\FUObjectArray.hpp"
#include "Hold_E_To_Pour_Into_Hive_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_UMG::Image*& _Game_Menus_Hold_E_To_Pour_Into_Hive::Hold_E_To_Pour_Into_Hive_C::get_Image_31() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Game_Menus_Hold_E_To_Pour_Into_Hive::Hold_E_To_Pour_Into_Hive_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Hold_E_To_Pour_Into_Hive.Hold_E_To_Pour_Into_Hive_C");
    return result;
}
