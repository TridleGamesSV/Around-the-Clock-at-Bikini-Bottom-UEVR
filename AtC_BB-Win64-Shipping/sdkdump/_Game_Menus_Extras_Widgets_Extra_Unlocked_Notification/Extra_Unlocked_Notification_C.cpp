#include "..\FUObjectArray.hpp"
#include "Extra_Unlocked_Notification_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_CoreUObject::Class* _Game_Menus_Extras_Widgets_Extra_Unlocked_Notification::Extra_Unlocked_Notification_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Extras_Widgets/Extra_Unlocked_Notification.Extra_Unlocked_Notification_C");
    return result;
}
void* _Game_Menus_Extras_Widgets_Extra_Unlocked_Notification::Extra_Unlocked_Notification_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Extras_Widgets_Extra_Unlocked_Notification::Extra_Unlocked_Notification_C::Construct0() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Extras_Widgets_Extra_Unlocked_Notification::Extra_Unlocked_Notification_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void _Game_Menus_Extras_Widgets_Extra_Unlocked_Notification::Extra_Unlocked_Notification_C::ExecuteUbergraph_Extra_Unlocked_Notification(int32_t EntryPoint) {
    return;
}
_Script_UMG::Image*& _Game_Menus_Extras_Widgets_Extra_Unlocked_Notification::Extra_Unlocked_Notification_C::get_Image_27() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
