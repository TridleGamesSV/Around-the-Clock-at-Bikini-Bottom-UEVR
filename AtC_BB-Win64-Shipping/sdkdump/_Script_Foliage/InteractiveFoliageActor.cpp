#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "InteractiveFoliageActor.hpp"
_Script_Engine::CapsuleComponent*& _Script_Foliage::InteractiveFoliageActor::get_CapsuleComponent() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x328);
}
void* _Script_Foliage::InteractiveFoliageActor::get_FoliageVelocity() {
    return (void*)((uintptr_t)this + 0x33c);
}
void* _Script_Foliage::InteractiveFoliageActor::get_TouchingActorEntryPosition() {
    return (void*)((uintptr_t)this + 0x330);
}
float& _Script_Foliage::InteractiveFoliageActor::get_MaxTouchImpulse() {
    return *(float*)((uintptr_t)this + 0x378);
}
void* _Script_Foliage::InteractiveFoliageActor::get_FoliageForce() {
    return (void*)((uintptr_t)this + 0x348);
}
float& _Script_Foliage::InteractiveFoliageActor::get_FoliageDamageImpulseScale() {
    return *(float*)((uintptr_t)this + 0x360);
}
void* _Script_Foliage::InteractiveFoliageActor::get_FoliagePosition() {
    return (void*)((uintptr_t)this + 0x354);
}
float& _Script_Foliage::InteractiveFoliageActor::get_FoliageStiffness() {
    return *(float*)((uintptr_t)this + 0x368);
}
float& _Script_Foliage::InteractiveFoliageActor::get_FoliageTouchImpulseScale() {
    return *(float*)((uintptr_t)this + 0x364);
}
float& _Script_Foliage::InteractiveFoliageActor::get_FoliageStiffnessQuadratic() {
    return *(float*)((uintptr_t)this + 0x36c);
}
float& _Script_Foliage::InteractiveFoliageActor::get_FoliageDamping() {
    return *(float*)((uintptr_t)this + 0x370);
}
float& _Script_Foliage::InteractiveFoliageActor::get_MaxDamageImpulse() {
    return *(float*)((uintptr_t)this + 0x374);
}
float& _Script_Foliage::InteractiveFoliageActor::get_MaxForce() {
    return *(float*)((uintptr_t)this + 0x37c);
}
float& _Script_Foliage::InteractiveFoliageActor::get_Mass() {
    return *(float*)((uintptr_t)this + 0x380);
}
_Script_CoreUObject::Class* _Script_Foliage::InteractiveFoliageActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.InteractiveFoliageActor");
    return result;
}
void _Script_Foliage::InteractiveFoliageActor::CapsuleTouched(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& OverlapInfo) {
    return;
}
