#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct NavLinkCustomComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavLinkProxy : public Actor {
    void* get_PointLinks();
    void* get_SegmentLinks();
    _Script_Engine::NavLinkCustomComponent*& get_SmartLinkComp();
    bool get_bSmartLinkIsRelevant();
    void set_bSmartLinkIsRelevant(bool value);
    void* get_OnSmartLinkReached();
    static _Script_CoreUObject::Class* static_class();
    void SetSmartLinkEnabled(bool bEnabled);
    void ResumePathFollowing(_Script_Engine::Actor* Agent);
    void ReceiveSmartLinkReached(_Script_Engine::Actor* Agent, _Script_CoreUObject::Vector& Destination);
    bool IsSmartLinkEnabled();
    bool HasMovingAgents();
}; // Size: 0x28
#pragma pack(pop)
}
