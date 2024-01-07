#include "..\FUObjectArray.hpp"
#include "Jellyfishing_Lose_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_CoreUObject::Class* _Game_Menus_Jellyfishing_Lose::Jellyfishing_Lose_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Jellyfishing_Lose.Jellyfishing_Lose_C");
    return result;
}
void* _Game_Menus_Jellyfishing_Lose::Jellyfishing_Lose_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Jellyfishing_Lose::Jellyfishing_Lose_C::ExecuteUbergraph_Jellyfishing_Lose(int32_t EntryPoint) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Jellyfishing_Lose::Jellyfishing_Lose_C::get_Animation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void _Game_Menus_Jellyfishing_Lose::Jellyfishing_Lose_C::Construct0() {
    return;
}
