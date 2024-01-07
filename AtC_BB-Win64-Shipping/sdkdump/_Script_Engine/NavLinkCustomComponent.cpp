#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavLinkCustomComponent.hpp"
#include "NavRelevantComponent.hpp"
void* _Script_Engine::NavLinkCustomComponent::get_NavLinkUserId() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::NavLinkCustomComponent::get_LinkDirection() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::NavLinkCustomComponent::get_EnabledAreaClass() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Engine::NavLinkCustomComponent::get_DisabledAreaClass() {
    return (void*)((uintptr_t)this + 0x138);
}
bool _Script_Engine::NavLinkCustomComponent::get_bLinkEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x15c + 0)) & 1 != 0;
}
void* _Script_Engine::NavLinkCustomComponent::get_LinkRelativeEnd() {
    return (void*)((uintptr_t)this + 0x14c);
}
void* _Script_Engine::NavLinkCustomComponent::get_LinkRelativeStart() {
    return (void*)((uintptr_t)this + 0x140);
}
void _Script_Engine::NavLinkCustomComponent::set_bLinkEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15c + 0);
    *(uint8_t*)((uintptr_t)this + 0x15c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavLinkCustomComponent::get_bNotifyWhenEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x15c + 0)) & 2 != 0;
}
void _Script_Engine::NavLinkCustomComponent::set_bNotifyWhenEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15c + 0);
    *(uint8_t*)((uintptr_t)this + 0x15c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::NavLinkCustomComponent::get_bNotifyWhenDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x15c + 0)) & 4 != 0;
}
void _Script_Engine::NavLinkCustomComponent::set_bNotifyWhenDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15c + 0);
    *(uint8_t*)((uintptr_t)this + 0x15c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavLinkCustomComponent::get_bCreateBoxObstacle() {
    return (*(uint8_t*)((uintptr_t)this + 0x15c + 0)) & 8 != 0;
}
void _Script_Engine::NavLinkCustomComponent::set_bCreateBoxObstacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15c + 0);
    *(uint8_t*)((uintptr_t)this + 0x15c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::NavLinkCustomComponent::get_ObstacleOffset() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::NavLinkCustomComponent::get_ObstacleExtent() {
    return (void*)((uintptr_t)this + 0x16c);
}
void* _Script_Engine::NavLinkCustomComponent::get_ObstacleAreaClass() {
    return (void*)((uintptr_t)this + 0x178);
}
float& _Script_Engine::NavLinkCustomComponent::get_BroadcastRadius() {
    return *(float*)((uintptr_t)this + 0x180);
}
float& _Script_Engine::NavLinkCustomComponent::get_BroadcastInterval() {
    return *(float*)((uintptr_t)this + 0x184);
}
void* _Script_Engine::NavLinkCustomComponent::get_BroadcastChannel() {
    return (void*)((uintptr_t)this + 0x188);
}
_Script_CoreUObject::Class* _Script_Engine::NavLinkCustomComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavLinkCustomComponent");
    return result;
}
