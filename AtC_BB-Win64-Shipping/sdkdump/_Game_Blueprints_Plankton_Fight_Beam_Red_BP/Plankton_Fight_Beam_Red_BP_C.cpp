#include "..\FUObjectArray.hpp"
#include "Plankton_Fight_Beam_Red_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
void _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::get_LaserLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x730);
}
void* _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::get_Laser_Light_2() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::get_Laser() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::get_BeamBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::get_Beam() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::get_Body_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x750);
}
int32_t& _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x758);
}
_Script_CoreUObject::Class* _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Plankton_Fight_Beam_Red_BP.Plankton_Fight_Beam_Red_BP_C");
    return result;
}
void _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::BndEvt__Body_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::BndEvt__BeamBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Plankton_Fight_Beam_Red_BP::Plankton_Fight_Beam_Red_BP_C::ExecuteUbergraph_Plankton_Fight_Beam_Red_BP(int32_t EntryPoint) {
    return;
}
