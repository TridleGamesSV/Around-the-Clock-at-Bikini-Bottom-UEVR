#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Package.hpp"
#include "..\_Script_CoreUObject\Property.hpp"
#include "NetConnection.hpp"
#include "NetDriver.hpp"
#include "World.hpp"
void* _Script_Engine::NetDriver::get_NetConnectionClassName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::NetDriver::get_NetConnectionClass() {
    return (void*)((uintptr_t)this + 0xe8);
}
bool _Script_Engine::NetDriver::get_bClampListenServerTickRate() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::NetDriver::get_MaxDownloadSize() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::NetDriver::get_NetServerMaxTickRate() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
void _Script_Engine::NetDriver::set_bClampListenServerTickRate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::NetDriver::get_MaxInternetClientRate() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
int32_t& _Script_Engine::NetDriver::get_MaxClientRate() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::NetDriver::get_ServerTravelPause() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::NetDriver::get_SpawnPrioritySeconds() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::NetDriver::get_RelevantTimeout() {
    return *(float*)((uintptr_t)this + 0x5c);
}
_Script_CoreUObject::Class* _Script_Engine::NetDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NetDriver");
    return result;
}
float& _Script_Engine::NetDriver::get_KeepAliveTime() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::NetDriver::get_InitialConnectTimeout() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::NetDriver::get_ConnectionTimeout() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::NetDriver::get_TimeoutMultiplierForUnoptimizedBuilds() {
    return *(float*)((uintptr_t)this + 0x6c);
}
_Script_CoreUObject::Package*& _Script_Engine::NetDriver::get_WorldPackage() {
    return *(_Script_CoreUObject::Package**)((uintptr_t)this + 0xc0);
}
bool _Script_Engine::NetDriver::get_bNoTimeouts() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
_Script_CoreUObject::Property*& _Script_Engine::NetDriver::get_RemoteRoleProperty() {
    return *(_Script_CoreUObject::Property**)((uintptr_t)this + 0xf8);
}
void _Script_Engine::NetDriver::set_bNoTimeouts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::NetConnection*& _Script_Engine::NetDriver::get_ServerConnection() {
    return *(_Script_Engine::NetConnection**)((uintptr_t)this + 0x78);
}
void* _Script_Engine::NetDriver::get_ClientConnections() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_Engine::World*& _Script_Engine::NetDriver::get_World() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Property*& _Script_Engine::NetDriver::get_RoleProperty() {
    return *(_Script_CoreUObject::Property**)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::NetDriver::get_NetDriverName() {
    return (void*)((uintptr_t)this + 0x100);
}
float& _Script_Engine::NetDriver::get_Time() {
    return *(float*)((uintptr_t)this + 0x150);
}
