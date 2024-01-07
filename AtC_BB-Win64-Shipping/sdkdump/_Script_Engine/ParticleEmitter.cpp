#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ParticleEmitter.hpp"
void* _Script_Engine::ParticleEmitter::get_LODLevels() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::ParticleEmitter::get_EmitterName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::ParticleEmitter::get_DetailMode() {
    return (void*)((uintptr_t)this + 0x5c);
}
void _Script_Engine::ParticleEmitter::set_ConvertedModules(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::ParticleEmitter::get_SubUVDataOffset() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::ParticleEmitter::get_ConvertedModules() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_Engine::ParticleEmitter::get_EmitterRenderMode() {
    return (void*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Engine::ParticleEmitter::get_InitialAllocationCount() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Engine::ParticleEmitter::get_PeakActiveParticles() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
float& _Script_Engine::ParticleEmitter::get_MediumDetailSpawnRateScale() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::ParticleEmitter::get_QualityLevelSpawnRateScale() {
    return *(float*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::ParticleEmitter::get_bIsSoloing() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
bool _Script_Engine::ParticleEmitter::get_bCookedOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleEmitter::set_bIsSoloing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleEmitter::set_bCookedOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleEmitter::get_bDisabledLODsKeepEmitterAlive() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleEmitter::set_bDisabledLODsKeepEmitterAlive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleEmitter::get_bDisableWhenInsignficant() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 8 != 0;
}
void _Script_Engine::ParticleEmitter::set_bDisableWhenInsignficant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::ParticleEmitter::get_SignificanceLevel() {
    return (void*)((uintptr_t)this + 0x64);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleEmitter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleEmitter");
    return result;
}
