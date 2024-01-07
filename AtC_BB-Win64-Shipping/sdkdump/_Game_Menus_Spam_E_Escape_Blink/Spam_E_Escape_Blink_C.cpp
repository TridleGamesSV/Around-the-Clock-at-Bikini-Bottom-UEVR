#include "..\FUObjectArray.hpp"
#include "Spam_E_Escape_Blink_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Spam_E_Escape_Blink::Spam_E_Escape_Blink_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Spam_E_Escape_Blink::Spam_E_Escape_Blink_C::get_Blink() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Menus_Spam_E_Escape_Blink::Spam_E_Escape_Blink_C::get_Image_27() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_Menus_Spam_E_Escape_Blink::Spam_E_Escape_Blink_C::get_Image_31() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Game_Menus_Spam_E_Escape_Blink::Spam_E_Escape_Blink_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Spam_E_Escape_Blink.Spam_E_Escape_Blink_C");
    return result;
}
void _Game_Menus_Spam_E_Escape_Blink::Spam_E_Escape_Blink_C::Construct0() {
    return;
}
void _Game_Menus_Spam_E_Escape_Blink::Spam_E_Escape_Blink_C::ExecuteUbergraph_Spam_E_Escape_Blink(int32_t EntryPoint) {
    return;
}
