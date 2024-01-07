#include "..\FUObjectArray.hpp"
#include "MrKrabs_Talk_Money_2_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Talk_Widgets_MrKrabs_Talk_Money_2::MrKrabs_Talk_Money_2_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Talk_Widgets_MrKrabs_Talk_Money_2::MrKrabs_Talk_Money_2_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Talk_Widgets_MrKrabs_Talk_Money_2::MrKrabs_Talk_Money_2_C::get_Image_20() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_CoreUObject::Class* _Game_Talk_Widgets_MrKrabs_Talk_Money_2::MrKrabs_Talk_Money_2_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Talk_Widgets/MrKrabs_Talk_Money_2.MrKrabs_Talk_Money_2_C");
    return result;
}
void _Game_Talk_Widgets_MrKrabs_Talk_Money_2::MrKrabs_Talk_Money_2_C::Construct0() {
    return;
}
void _Game_Talk_Widgets_MrKrabs_Talk_Money_2::MrKrabs_Talk_Money_2_C::ExecuteUbergraph_MrKrabs_Talk_Money_2(int32_t EntryPoint) {
    return;
}
