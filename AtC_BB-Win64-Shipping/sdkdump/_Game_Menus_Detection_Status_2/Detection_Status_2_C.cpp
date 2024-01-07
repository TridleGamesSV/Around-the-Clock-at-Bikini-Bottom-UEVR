#include "..\FUObjectArray.hpp"
#include "Detection_Status_2_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Menus_Detection_Status_2::Detection_Status_2_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Detection_Status_2::Detection_Status_2_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_Menus_Detection_Status_2::Detection_Status_2_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_Detection_Status_2::Detection_Status_2_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Detection_Status_2.Detection_Status_2_C");
    return result;
}
void _Game_Menus_Detection_Status_2::Detection_Status_2_C::ExecuteUbergraph_Detection_Status_2(int32_t EntryPoint) {
    return;
}
