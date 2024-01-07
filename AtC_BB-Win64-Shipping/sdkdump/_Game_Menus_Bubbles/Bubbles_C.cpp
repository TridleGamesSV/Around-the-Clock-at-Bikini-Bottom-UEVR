#include "..\FUObjectArray.hpp"
#include "Bubbles_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CircularThrobber.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Menus_Bubbles::Bubbles_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::CircularThrobber*& _Game_Menus_Bubbles::Bubbles_C::get_CircularThrobber_35() {
    return *(_Script_UMG::CircularThrobber**)((uintptr_t)this + 0x240);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Bubbles::Bubbles_C::get_Pull() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_Bubbles::Bubbles_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Bubbles.Bubbles_C");
    return result;
}
_Script_UMG::CircularThrobber*& _Game_Menus_Bubbles::Bubbles_C::get_CircularThrobber_30() {
    return *(_Script_UMG::CircularThrobber**)((uintptr_t)this + 0x218);
}
_Script_UMG::CircularThrobber*& _Game_Menus_Bubbles::Bubbles_C::get_CircularThrobber_34() {
    return *(_Script_UMG::CircularThrobber**)((uintptr_t)this + 0x238);
}
_Script_UMG::CircularThrobber*& _Game_Menus_Bubbles::Bubbles_C::get_CircularThrobber_31() {
    return *(_Script_UMG::CircularThrobber**)((uintptr_t)this + 0x220);
}
_Script_UMG::CircularThrobber*& _Game_Menus_Bubbles::Bubbles_C::get_CircularThrobber_32() {
    return *(_Script_UMG::CircularThrobber**)((uintptr_t)this + 0x228);
}
_Script_UMG::CircularThrobber*& _Game_Menus_Bubbles::Bubbles_C::get_CircularThrobber_33() {
    return *(_Script_UMG::CircularThrobber**)((uintptr_t)this + 0x230);
}
void _Game_Menus_Bubbles::Bubbles_C::Construct0() {
    return;
}
void _Game_Menus_Bubbles::Bubbles_C::ExecuteUbergraph_Bubbles(int32_t EntryPoint) {
    return;
}
