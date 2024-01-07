#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameInstance.hpp"
#include "GameViewportClient.hpp"
#include "PendingNetGame.hpp"
#include "WorldContext.hpp"
void* _Script_Engine::WorldContext::get_ObjectReferencers() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_Engine::WorldContext::get_LastURL() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Engine::WorldContext::get_LastRemoteURL() {
    return (void*)((uintptr_t)this + 0x158);
}
_Script_Engine::PendingNetGame*& _Script_Engine::WorldContext::get_PendingNetGame() {
    return *(_Script_Engine::PendingNetGame**)((uintptr_t)this + 0x1c8);
}
void* _Script_Engine::WorldContext::get_PackagesToFullyLoad() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_Engine::WorldContext::get_LoadedLevelsForPendingMapChange() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_Engine::WorldContext::get_PendingLevelStreamingStatusUpdates() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_Engine::GameViewportClient*& _Script_Engine::WorldContext::get_GameViewport() {
    return *(_Script_Engine::GameViewportClient**)((uintptr_t)this + 0x238);
}
_Script_Engine::GameInstance*& _Script_Engine::WorldContext::get_OwningGameInstance() {
    return *(_Script_Engine::GameInstance**)((uintptr_t)this + 0x240);
}
void* _Script_Engine::WorldContext::get_ActiveNetDrivers() {
    return (void*)((uintptr_t)this + 0x248);
}
_Script_CoreUObject::Class* _Script_Engine::WorldContext::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.WorldContext");
    return result;
}
