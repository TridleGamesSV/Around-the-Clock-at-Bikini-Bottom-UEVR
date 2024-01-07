#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScene.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
#include "WidgetAnimation.hpp"
void* _Script_UMG::WidgetAnimation::get_OnAnimationStarted() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Script_UMG::WidgetAnimation::get_OnAnimationFinished() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_UMG::WidgetAnimation::get_AnimationBindings() {
    return (void*)((uintptr_t)this + 0x3d8);
}
_Script_MovieScene::MovieScene*& _Script_UMG::WidgetAnimation::get_MovieScene() {
    return *(_Script_MovieScene::MovieScene**)((uintptr_t)this + 0x3d0);
}
float _Script_UMG::WidgetAnimation::GetEndTime() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::WidgetAnimation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetAnimation");
    return result;
}
float _Script_UMG::WidgetAnimation::GetStartTime() {
    return;
}
