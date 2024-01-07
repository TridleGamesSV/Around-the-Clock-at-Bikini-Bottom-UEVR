#include "..\FUObjectArray.hpp"
#include "Jellyfishing_Win_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_Menus_Jellyfishing_Win::Jellyfishing_Win_C::Construct0() {
    return;
}
_Script_CoreUObject::Class* _Game_Menus_Jellyfishing_Win::Jellyfishing_Win_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Jellyfishing_Win.Jellyfishing_Win_C");
    return result;
}
void* _Game_Menus_Jellyfishing_Win::Jellyfishing_Win_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Menus_Jellyfishing_Win::Jellyfishing_Win_C::get_Animation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void _Game_Menus_Jellyfishing_Win::Jellyfishing_Win_C::ExecuteUbergraph_Jellyfishing_Win(int32_t EntryPoint) {
    return;
}
