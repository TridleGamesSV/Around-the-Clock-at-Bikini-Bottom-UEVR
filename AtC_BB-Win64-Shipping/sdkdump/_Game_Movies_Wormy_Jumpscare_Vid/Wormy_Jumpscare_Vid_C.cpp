#include "..\FUObjectArray.hpp"
#include "Wormy_Jumpscare_Vid_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_Movies_Wormy_Jumpscare_Vid::Wormy_Jumpscare_Vid_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_Movies_Wormy_Jumpscare_Vid::Wormy_Jumpscare_Vid_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_Movies_Wormy_Jumpscare_Vid::Wormy_Jumpscare_Vid_C::get_Image_10() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x218);
}
void _Game_Movies_Wormy_Jumpscare_Vid::Wormy_Jumpscare_Vid_C::ExecuteUbergraph_Wormy_Jumpscare_Vid(int32_t EntryPoint) {
    return;
}
_Script_MediaAssets::MediaPlayer*& _Game_Movies_Wormy_Jumpscare_Vid::Wormy_Jumpscare_Vid_C::get_Media_Player() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Game_Movies_Wormy_Jumpscare_Vid::Wormy_Jumpscare_Vid_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/Movies/Wormy_Jumpscare_Vid.Wormy_Jumpscare_Vid_C");
    return result;
}
void _Game_Movies_Wormy_Jumpscare_Vid::Wormy_Jumpscare_Vid_C::Construct0() {
    return;
}
