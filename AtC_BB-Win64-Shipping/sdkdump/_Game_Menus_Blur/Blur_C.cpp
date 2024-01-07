#include "..\FUObjectArray.hpp"
#include "Blur_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Blur::Blur_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Blur::Blur_C::Construct0() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Blur::Blur_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void _Game_Menus_Blur::Blur_C::ExecuteUbergraph_Blur(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_Menus_Blur::Blur_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Blur.Blur_C");
    return result;
}
