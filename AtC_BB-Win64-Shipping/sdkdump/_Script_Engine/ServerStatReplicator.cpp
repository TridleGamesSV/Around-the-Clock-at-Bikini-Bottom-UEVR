#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Info.hpp"
#include "ServerStatReplicator.hpp"
void* _Script_Engine::ServerStatReplicator::get_NumInitiallyDormantActors() {
    return (void*)((uintptr_t)this + 0x3bc);
}
bool _Script_Engine::ServerStatReplicator::get_bUpdateStatNet() {
    return (*(uint8_t*)((uintptr_t)this + 0x318 + 0)) & 1 != 0;
}
void* _Script_Engine::ServerStatReplicator::get_NumDormantActors() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void _Script_Engine::ServerStatReplicator::set_bUpdateStatNet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x318 + 0);
    *(uint8_t*)((uintptr_t)this + 0x318 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ServerStatReplicator::get_NumRelevantDeletedActors() {
    return (void*)((uintptr_t)this + 0x3a4);
}
void* _Script_Engine::ServerStatReplicator::get_OutSaturation() {
    return (void*)((uintptr_t)this + 0x328);
}
bool _Script_Engine::ServerStatReplicator::get_bOverwriteClientStats() {
    return (*(uint8_t*)((uintptr_t)this + 0x319 + 0)) & 1 != 0;
}
void _Script_Engine::ServerStatReplicator::set_bOverwriteClientStats(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x319 + 0);
    *(uint8_t*)((uintptr_t)this + 0x319 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ServerStatReplicator::get_Channels() {
    return (void*)((uintptr_t)this + 0x31c);
}
void* _Script_Engine::ServerStatReplicator::get_InRate() {
    return (void*)((uintptr_t)this + 0x320);
}
void* _Script_Engine::ServerStatReplicator::get_OutRate() {
    return (void*)((uintptr_t)this + 0x324);
}
void* _Script_Engine::ServerStatReplicator::get_InLoss() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_Engine::ServerStatReplicator::get_MaxPacketOverhead() {
    return (void*)((uintptr_t)this + 0x32c);
}
void* _Script_Engine::ServerStatReplicator::get_VoiceBytesRecv() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Script_Engine::ServerStatReplicator::get_InRateClientMax() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Script_Engine::ServerStatReplicator::get_InRateClientMin() {
    return (void*)((uintptr_t)this + 0x334);
}
void* _Script_Engine::ServerStatReplicator::get_InRateClientAvg() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_Engine::ServerStatReplicator::get_NetNumClients() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_Engine::ServerStatReplicator::get_InPacketsClientMax() {
    return (void*)((uintptr_t)this + 0x33c);
}
void* _Script_Engine::ServerStatReplicator::get_InPacketsClientMin() {
    return (void*)((uintptr_t)this + 0x340);
}
void* _Script_Engine::ServerStatReplicator::get_InPacketsClientAvg() {
    return (void*)((uintptr_t)this + 0x344);
}
void* _Script_Engine::ServerStatReplicator::get_NumNetGUIDsUnAckd() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Script_Engine::ServerStatReplicator::get_VoicePacketsRecv() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Script_Engine::ServerStatReplicator::get_OutRateClientMax() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Script_Engine::ServerStatReplicator::get_OutRateClientMin() {
    return (void*)((uintptr_t)this + 0x34c);
}
void* _Script_Engine::ServerStatReplicator::get_OutRateClientAvg() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Script_Engine::ServerStatReplicator::get_OutPacketsClientMax() {
    return (void*)((uintptr_t)this + 0x354);
}
void* _Script_Engine::ServerStatReplicator::get_PercentInVoice() {
    return (void*)((uintptr_t)this + 0x38c);
}
void* _Script_Engine::ServerStatReplicator::get_OutPacketsClientMin() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Script_Engine::ServerStatReplicator::get_NumNetGUIDsAckd() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_Engine::ServerStatReplicator::get_OutPacketsClientAvg() {
    return (void*)((uintptr_t)this + 0x35c);
}
void* _Script_Engine::ServerStatReplicator::get_InPackets() {
    return (void*)((uintptr_t)this + 0x364);
}
void* _Script_Engine::ServerStatReplicator::get_OutPackets() {
    return (void*)((uintptr_t)this + 0x368);
}
void* _Script_Engine::ServerStatReplicator::get_InBunches() {
    return (void*)((uintptr_t)this + 0x36c);
}
void* _Script_Engine::ServerStatReplicator::get_OutBunches() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Script_Engine::ServerStatReplicator::get_OutLoss() {
    return (void*)((uintptr_t)this + 0x374);
}
void* _Script_Engine::ServerStatReplicator::get_VoiceBytesSent() {
    return (void*)((uintptr_t)this + 0x37c);
}
void* _Script_Engine::ServerStatReplicator::get_VoicePacketsSent() {
    return (void*)((uintptr_t)this + 0x384);
}
void* _Script_Engine::ServerStatReplicator::get_PercentOutVoice() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_Engine::ServerStatReplicator::get_NumActorChannels() {
    return (void*)((uintptr_t)this + 0x394);
}
void* _Script_Engine::ServerStatReplicator::get_NumConsideredActors() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Script_Engine::ServerStatReplicator::get_PrioritizedActors() {
    return (void*)((uintptr_t)this + 0x39c);
}
void* _Script_Engine::ServerStatReplicator::get_NumRelevantActors() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Script_Engine::ServerStatReplicator::get_NumReplicatedActorAttempts() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_Engine::ServerStatReplicator::get_NumReplicatedActors() {
    return (void*)((uintptr_t)this + 0x3ac);
}
void* _Script_Engine::ServerStatReplicator::get_NumActors() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Script_Engine::ServerStatReplicator::get_NumNetActors() {
    return (void*)((uintptr_t)this + 0x3b4);
}
void* _Script_Engine::ServerStatReplicator::get_NumNetGUIDsPending() {
    return (void*)((uintptr_t)this + 0x3c4);
}
void* _Script_Engine::ServerStatReplicator::get_ObjPathBytes() {
    return (void*)((uintptr_t)this + 0x3cc);
}
void* _Script_Engine::ServerStatReplicator::get_NetGUIDOutRate() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_Engine::ServerStatReplicator::get_NetGUIDInRate() {
    return (void*)((uintptr_t)this + 0x3d4);
}
void* _Script_Engine::ServerStatReplicator::get_NetSaturated() {
    return (void*)((uintptr_t)this + 0x3d8);
}
_Script_CoreUObject::Class* _Script_Engine::ServerStatReplicator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ServerStatReplicator");
    return result;
}
