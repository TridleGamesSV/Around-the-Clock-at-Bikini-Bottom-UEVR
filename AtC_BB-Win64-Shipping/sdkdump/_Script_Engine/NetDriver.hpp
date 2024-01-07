#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct NetConnection;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_CoreUObject {
struct Package;
}
namespace _Script_CoreUObject {
struct Property;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NetDriver : public _Script_CoreUObject::Object {
    void* get_NetConnectionClassName();
    int32_t& get_MaxDownloadSize();
    bool get_bClampListenServerTickRate();
    void set_bClampListenServerTickRate(bool value);
    int32_t& get_NetServerMaxTickRate();
    int32_t& get_MaxInternetClientRate();
    int32_t& get_MaxClientRate();
    float& get_ServerTravelPause();
    float& get_SpawnPrioritySeconds();
    float& get_RelevantTimeout();
    float& get_KeepAliveTime();
    float& get_InitialConnectTimeout();
    float& get_ConnectionTimeout();
    float& get_TimeoutMultiplierForUnoptimizedBuilds();
    bool get_bNoTimeouts();
    void set_bNoTimeouts(bool value);
    _Script_Engine::NetConnection*& get_ServerConnection();
    void* get_ClientConnections();
    _Script_Engine::World*& get_World();
    _Script_CoreUObject::Package*& get_WorldPackage();
    void* get_NetConnectionClass();
    _Script_CoreUObject::Property*& get_RoleProperty();
    _Script_CoreUObject::Property*& get_RemoteRoleProperty();
    void* get_NetDriverName();
    float& get_Time();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
