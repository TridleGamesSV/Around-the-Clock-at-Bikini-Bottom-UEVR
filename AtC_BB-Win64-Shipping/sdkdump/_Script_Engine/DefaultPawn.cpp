#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DefaultPawn.hpp"
#include "Pawn.hpp"
#include "PawnMovementComponent.hpp"
#include "SphereComponent.hpp"
#include "StaticMeshComponent.hpp"
_Script_Engine::PawnMovementComponent*& _Script_Engine::DefaultPawn::get_MovementComponent() {
    return *(_Script_Engine::PawnMovementComponent**)((uintptr_t)this + 0x380);
}
float& _Script_Engine::DefaultPawn::get_BaseTurnRate() {
    return *(float*)((uintptr_t)this + 0x378);
}
_Script_Engine::SphereComponent*& _Script_Engine::DefaultPawn::get_CollisionComponent() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x388);
}
float& _Script_Engine::DefaultPawn::get_BaseLookUpRate() {
    return *(float*)((uintptr_t)this + 0x37c);
}
void _Script_Engine::DefaultPawn::LookUpAtRate(float Rate) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Script_Engine::DefaultPawn::get_MeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x390);
}
bool _Script_Engine::DefaultPawn::get_bAddDefaultMovementBindings() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::DefaultPawn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DefaultPawn");
    return result;
}
void _Script_Engine::DefaultPawn::set_bAddDefaultMovementBindings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::DefaultPawn::TurnAtRate(float Rate) {
    return;
}
void _Script_Engine::DefaultPawn::MoveUp_World(float Val) {
    return;
}
void _Script_Engine::DefaultPawn::MoveRight(float Val) {
    return;
}
void _Script_Engine::DefaultPawn::MoveForward(float Val) {
    return;
}
