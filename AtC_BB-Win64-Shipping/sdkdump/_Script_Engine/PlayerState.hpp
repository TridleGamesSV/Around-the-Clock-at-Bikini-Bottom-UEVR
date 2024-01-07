#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Info.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlayerState : public Info {
    float& get_Score();
    void* get_Ping();
    void* get_PlayerName();
    int32_t& get_PlayerId();
    bool get_bIsSpectator();
    void set_bIsSpectator(bool value);
    bool get_bOnlySpectator();
    void set_bOnlySpectator(bool value);
    bool get_bIsABot();
    void set_bIsABot(bool value);
    bool get_bIsInactive();
    void set_bIsInactive(bool value);
    bool get_bFromPreviousLevel();
    void set_bFromPreviousLevel(bool value);
    int32_t& get_StartTime();
    void* get_EngineMessageClass();
    void* get_SavedNetworkAddress();
    void* get_UniqueId();
    void* get_PlayerNamePrivate();
    bool get_bShouldUpdateReplicatedPing();
    void set_bShouldUpdateReplicatedPing(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ReceiveOverrideWith(_Script_Engine::PlayerState* OldPlayerState);
    void ReceiveCopyProperties(_Script_Engine::PlayerState* NewPlayerState);
    void OnRep_UniqueId();
    void OnRep_Score();
    void OnRep_PlayerName();
    void OnRep_PlayerId();
    void OnRep_bIsInactive();
    void* GetPlayerName();
}; // Size: 0x28
#pragma pack(pop)
}
