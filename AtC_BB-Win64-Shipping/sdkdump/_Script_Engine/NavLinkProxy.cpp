#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "NavLinkCustomComponent.hpp"
#include "NavLinkProxy.hpp"
void* _Script_Engine::NavLinkProxy::get_PointLinks() {
    return (void*)((uintptr_t)this + 0x328);
}
void* _Script_Engine::NavLinkProxy::get_SegmentLinks() {
    return (void*)((uintptr_t)this + 0x338);
}
void _Script_Engine::NavLinkProxy::ReceiveSmartLinkReached(_Script_Engine::Actor* Agent, _Script_CoreUObject::Vector& Destination) {
    return;
}
void _Script_Engine::NavLinkProxy::SetSmartLinkEnabled(bool bEnabled) {
    return;
}
_Script_Engine::NavLinkCustomComponent*& _Script_Engine::NavLinkProxy::get_SmartLinkComp() {
    return *(_Script_Engine::NavLinkCustomComponent**)((uintptr_t)this + 0x348);
}
void* _Script_Engine::NavLinkProxy::get_OnSmartLinkReached() {
    return (void*)((uintptr_t)this + 0x358);
}
void _Script_Engine::NavLinkProxy::set_bSmartLinkIsRelevant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x350 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavLinkProxy::get_bSmartLinkIsRelevant() {
    return (*(uint8_t*)((uintptr_t)this + 0x350 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::NavLinkProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavLinkProxy");
    return result;
}
void _Script_Engine::NavLinkProxy::ResumePathFollowing(_Script_Engine::Actor* Agent) {
    return;
}
bool _Script_Engine::NavLinkProxy::IsSmartLinkEnabled() {
    return;
}
bool _Script_Engine::NavLinkProxy::HasMovingAgents() {
    return;
}
