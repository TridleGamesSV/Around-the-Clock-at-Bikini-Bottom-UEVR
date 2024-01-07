#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameInstance.hpp"
#include "PlatformGameInstance.hpp"
void* _Script_Engine::PlatformGameInstance::get_ApplicationWillDeactivateDelegate() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationHasReactivatedDelegate() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationWillTerminateDelegate() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationWillEnterBackgroundDelegate() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationHasEnteredForegroundDelegate() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationRegisteredForRemoteNotificationsDelegate() {
    return (void*)((uintptr_t)this + 0x138);
}
_Script_CoreUObject::Class* _Script_Engine::PlatformGameInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlatformGameInstance");
    return result;
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationRegisteredForUserNotificationsDelegate() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationFailedToRegisterForRemoteNotificationsDelegate() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedRemoteNotificationDelegate() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedLocalNotificationDelegate() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_Engine::PlatformGameInstance::get_ApplicationReceivedScreenOrientationChangedNotificationDelegate() {
    return (void*)((uintptr_t)this + 0x188);
}
