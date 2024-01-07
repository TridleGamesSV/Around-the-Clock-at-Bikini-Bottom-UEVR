#include "..\FUObjectArray.hpp"
#include "PawnAction.hpp"
#include "PawnAction_Move.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_Engine::Actor*& _Script_AIModule::PawnAction_Move::get_GoalActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0xd0);
}
void* _Script_AIModule::PawnAction_Move::get_GoalLocation() {
    return (void*)((uintptr_t)this + 0xd8);
}
float& _Script_AIModule::PawnAction_Move::get_AcceptableRadius() {
    return *(float*)((uintptr_t)this + 0xe4);
}
void _Script_AIModule::PawnAction_Move::set_bAllowStrafe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::PawnAction_Move::get_bProjectGoalToNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 16 != 0;
}
void* _Script_AIModule::PawnAction_Move::get_FilterClass() {
    return (void*)((uintptr_t)this + 0xe8);
}
void _Script_AIModule::PawnAction_Move::set_bFinishOnOverlap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AIModule::PawnAction_Move::get_bAllowStrafe() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void _Script_AIModule::PawnAction_Move::set_bAbortChildActionOnPathChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_AIModule::PawnAction_Move::get_bFinishOnOverlap() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 2 != 0;
}
bool _Script_AIModule::PawnAction_Move::get_bUsePathfinding() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 4 != 0;
}
void _Script_AIModule::PawnAction_Move::set_bUsePathfinding(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AIModule::PawnAction_Move::get_bAllowPartialPath() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 8 != 0;
}
void _Script_AIModule::PawnAction_Move::set_bAllowPartialPath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_AIModule::PawnAction_Move::set_bProjectGoalToNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_AIModule::PawnAction_Move::get_bUpdatePathToGoal() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 32 != 0;
}
void _Script_AIModule::PawnAction_Move::set_bUpdatePathToGoal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_AIModule::PawnAction_Move::get_bAbortChildActionOnPathChange() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 64 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::PawnAction_Move::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.PawnAction_Move");
    return result;
}
