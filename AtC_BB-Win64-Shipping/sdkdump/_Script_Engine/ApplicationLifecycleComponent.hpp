#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ApplicationLifecycleComponent : public ActorComponent {
    void* get_ApplicationWillDeactivateDelegate();
    void* get_ApplicationHasReactivatedDelegate();
    void* get_ApplicationWillEnterBackgroundDelegate();
    void* get_ApplicationHasEnteredForegroundDelegate();
    void* get_ApplicationWillTerminateDelegate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
