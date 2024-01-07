#include "..\FUObjectArray.hpp"
#include "MKHE_Jumpscare_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Game_Menus_MKHE_Jumpscare::MKHE_Jumpscare_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/MKHE_Jumpscare.MKHE_Jumpscare_C");
    return result;
}
void* _Game_Menus_MKHE_Jumpscare::MKHE_Jumpscare_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::Image*& _Game_Menus_MKHE_Jumpscare::MKHE_Jumpscare_C::get_Image_29() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
void _Game_Menus_MKHE_Jumpscare::MKHE_Jumpscare_C::Construct0() {
    return;
}
void _Game_Menus_MKHE_Jumpscare::MKHE_Jumpscare_C::ExecuteUbergraph_MKHE_Jumpscare(int32_t EntryPoint) {
    return;
}
