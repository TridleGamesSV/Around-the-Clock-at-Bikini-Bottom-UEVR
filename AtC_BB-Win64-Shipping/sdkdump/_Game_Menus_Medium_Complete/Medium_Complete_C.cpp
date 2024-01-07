#include "..\FUObjectArray.hpp"
#include "Medium_Complete_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Menus_Medium_Complete::Medium_Complete_C::Construct0() {
    return;
}
void* _Game_Menus_Medium_Complete::Medium_Complete_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Medium_Complete::Medium_Complete_C::ExecuteUbergraph_Medium_Complete(int32_t EntryPoint) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Medium_Complete::Medium_Complete_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Menus_Medium_Complete::Medium_Complete_C::get_Image_368() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Game_Menus_Medium_Complete::Medium_Complete_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Medium_Complete.Medium_Complete_C");
    return result;
}
void* _Game_Menus_Medium_Complete::Medium_Complete_C::GetText_0() {
    return;
}
