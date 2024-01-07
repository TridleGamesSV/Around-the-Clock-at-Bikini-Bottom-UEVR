#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameViewportClient.hpp"
#include "LocalPlayer.hpp"
#include "Player.hpp"
bool _Script_Engine::LocalPlayer::get_bSentSplitJoin() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
_Script_Engine::GameViewportClient*& _Script_Engine::LocalPlayer::get_ViewportClient() {
    return *(_Script_Engine::GameViewportClient**)((uintptr_t)this + 0x58);
}
void* _Script_Engine::LocalPlayer::get_PendingLevelPlayerControllerClass() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::LocalPlayer::get_AspectRatioAxisConstraint() {
    return (void*)((uintptr_t)this + 0x7c);
}
_Script_CoreUObject::Class* _Script_Engine::LocalPlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LocalPlayer");
    return result;
}
int32_t& _Script_Engine::LocalPlayer::get_ControllerId() {
    return *(int32_t*)((uintptr_t)this + 0xf0);
}
void _Script_Engine::LocalPlayer::set_bSentSplitJoin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
