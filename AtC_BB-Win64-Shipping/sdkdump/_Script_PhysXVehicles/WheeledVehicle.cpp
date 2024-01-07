#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "WheeledVehicle.hpp"
#include "WheeledVehicleMovementComponent.hpp"
_Script_Engine::SkeletalMeshComponent*& _Script_PhysXVehicles::WheeledVehicle::get_Mesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x378);
}
_Script_PhysXVehicles::WheeledVehicleMovementComponent*& _Script_PhysXVehicles::WheeledVehicle::get_VehicleMovement() {
    return *(_Script_PhysXVehicles::WheeledVehicleMovementComponent**)((uintptr_t)this + 0x380);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::WheeledVehicle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysXVehicles.WheeledVehicle");
    return result;
}
