#include "..\FUObjectArray.hpp"
#include "Shake_Spikes_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Shake_Spikes::Shake_Spikes_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Shake_Spikes::Shake_Spikes_C::get_Zoom() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Menus_Shake_Spikes::Shake_Spikes_C::get_Image_29() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x228);
}
_Script_UMG::Image*& _Game_Menus_Shake_Spikes::Shake_Spikes_C::get_Image_27() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
void _Game_Menus_Shake_Spikes::Shake_Spikes_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_Menus_Shake_Spikes::Shake_Spikes_C::get_Image_28() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
_Script_UMG::Image*& _Game_Menus_Shake_Spikes::Shake_Spikes_C::get_Image_30() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Game_Menus_Shake_Spikes::Shake_Spikes_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Shake_Spikes.Shake_Spikes_C");
    return result;
}
void _Game_Menus_Shake_Spikes::Shake_Spikes_C::ExecuteUbergraph_Shake_Spikes(int32_t EntryPoint) {
    return;
}
