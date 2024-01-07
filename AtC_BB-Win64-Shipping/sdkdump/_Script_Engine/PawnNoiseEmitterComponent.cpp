#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "ActorComponent.hpp"
#include "PawnNoiseEmitterComponent.hpp"
float& _Script_Engine::PawnNoiseEmitterComponent::get_LastLocalNoiseVolume() {
    return *(float*)((uintptr_t)this + 0x10c);
}
float& _Script_Engine::PawnNoiseEmitterComponent::get_LastRemoteNoiseVolume() {
    return *(float*)((uintptr_t)this + 0x104);
}
void* _Script_Engine::PawnNoiseEmitterComponent::get_LastRemoteNoisePosition() {
    return (void*)((uintptr_t)this + 0xf4);
}
bool _Script_Engine::PawnNoiseEmitterComponent::get_bAIPerceptionSystemCompatibilityMode() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void _Script_Engine::PawnNoiseEmitterComponent::set_bAIPerceptionSystemCompatibilityMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PawnNoiseEmitterComponent::get_NoiseLifetime() {
    return *(float*)((uintptr_t)this + 0x100);
}
float& _Script_Engine::PawnNoiseEmitterComponent::get_LastRemoteNoiseTime() {
    return *(float*)((uintptr_t)this + 0x108);
}
float& _Script_Engine::PawnNoiseEmitterComponent::get_LastLocalNoiseTime() {
    return *(float*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_Engine::PawnNoiseEmitterComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PawnNoiseEmitterComponent");
    return result;
}
void _Script_Engine::PawnNoiseEmitterComponent::MakeNoise(_Script_Engine::Actor* NoiseMaker, float Loudness, _Script_CoreUObject::Vector& NoiseLocation) {
    return;
}
