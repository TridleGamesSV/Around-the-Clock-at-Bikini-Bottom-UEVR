#include "..\FUObjectArray.hpp"
#include "Zap_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Zap::Zap_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Zap::Zap_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Menus_Zap::Zap_C::get_Image_27() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Zap::Zap_C::get_Zap() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_Menus_Zap::Zap_C::get_Image_28() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x228);
}
_Script_UMG::Image*& _Game_Menus_Zap::Zap_C::get_Image_29() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x230);
}
_Script_UMG::Image*& _Game_Menus_Zap::Zap_C::get_Image_30() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x238);
}
_Script_CoreUObject::Class* _Game_Menus_Zap::Zap_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Zap.Zap_C");
    return result;
}
void _Game_Menus_Zap::Zap_C::Construct0() {
    return;
}
void _Game_Menus_Zap::Zap_C::ExecuteUbergraph_Zap(int32_t EntryPoint) {
    return;
}
