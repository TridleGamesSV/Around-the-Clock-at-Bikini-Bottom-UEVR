#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "LiveLinkDrivenComponent.hpp"
void* _Script_LiveLink::LiveLinkDrivenComponent::get_ActorTransformBone() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_LiveLink::LiveLinkDrivenComponent::get_SubjectName() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_LiveLink::LiveLinkDrivenComponent::get_bModifyActorTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
void _Script_LiveLink::LiveLinkDrivenComponent::set_bModifyActorTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_LiveLink::LiveLinkDrivenComponent::set_bSetRelativeLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x101 + 0);
    *(uint8_t*)((uintptr_t)this + 0x101 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LiveLink::LiveLinkDrivenComponent::get_bSetRelativeLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x101 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkDrivenComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkDrivenComponent");
    return result;
}
