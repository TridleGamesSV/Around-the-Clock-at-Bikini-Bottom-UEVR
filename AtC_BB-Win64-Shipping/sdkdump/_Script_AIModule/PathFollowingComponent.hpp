#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct NavMovementComponent;
}
namespace _Script_Engine {
struct NavigationData;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct PathFollowingComponent : public _Script_Engine::ActorComponent {
    _Script_Engine::NavMovementComponent*& get_MovementComp();
    _Script_Engine::NavigationData*& get_MyNavData();
    static _Script_CoreUObject::Class* static_class();
    void OnNavDataRegistered(_Script_Engine::NavigationData* NavData);
    void OnActorBump(_Script_Engine::Actor* SelfActor, _Script_Engine::Actor* OtherActor, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    _Script_CoreUObject::Vector GetPathDestination();
    void* GetPathActionType();
}; // Size: 0x28
#pragma pack(pop)
}
