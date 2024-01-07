#include "..\FUObjectArray.hpp"
#include "Close_Eyes_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Close_Eyes::Close_Eyes_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_CoreUObject::Class* _Game_Menus_Close_Eyes::Close_Eyes_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Close_Eyes.Close_Eyes_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Close_Eyes::Close_Eyes_C::get_Close() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void _Game_Menus_Close_Eyes::Close_Eyes_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_Menus_Close_Eyes::Close_Eyes_C::get_Image_171() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
_Script_UMG::Image*& _Game_Menus_Close_Eyes::Close_Eyes_C::get_Image_172() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x220);
}
void _Game_Menus_Close_Eyes::Close_Eyes_C::ExecuteUbergraph_Close_Eyes(int32_t EntryPoint) {
    return;
}
