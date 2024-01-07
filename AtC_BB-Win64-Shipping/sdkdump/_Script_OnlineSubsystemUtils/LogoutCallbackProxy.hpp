#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct LogoutCallbackProxy : public _Script_Engine::BlueprintAsyncActionBase {
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_OnlineSubsystemUtils::LogoutCallbackProxy* Logout(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController);
}; // Size: 0x28
#pragma pack(pop)
}
