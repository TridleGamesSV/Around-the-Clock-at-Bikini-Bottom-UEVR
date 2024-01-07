#include "..\FUObjectArray.hpp"
#include "Clam_Cam_Bar_6_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_Menus_Clam_Cam_Bar_6::Clam_Cam_Bar_6_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_Menus_Clam_Cam_Bar_6::Clam_Cam_Bar_6_C::Construct0() {
    return;
}
_Script_UMG::Image*& _Game_Menus_Clam_Cam_Bar_6::Clam_Cam_Bar_6_C::get_Image_89() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x210);
}
_Script_CoreUObject::Class* _Game_Menus_Clam_Cam_Bar_6::Clam_Cam_Bar_6_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Menus/Clam_Cam_Bar_6.Clam_Cam_Bar_6_C");
    return result;
}
void _Game_Menus_Clam_Cam_Bar_6::Clam_Cam_Bar_6_C::ExecuteUbergraph_Clam_Cam_Bar_6(int32_t EntryPoint) {
    return;
}
