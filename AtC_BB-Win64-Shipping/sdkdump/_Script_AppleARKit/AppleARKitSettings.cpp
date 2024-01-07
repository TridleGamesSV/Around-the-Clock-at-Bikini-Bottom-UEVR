#include "..\FUObjectArray.hpp"
#include "AppleARKitSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_AppleARKit::AppleARKitSettings::get_DefaultFaceTrackingLiveLinkSubjectName() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_AppleARKit::AppleARKitSettings::get_bEnableLiveLinkForFaceTracking() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_AppleARKit::AppleARKitSettings::set_bEnableLiveLinkForFaceTracking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AppleARKit::AppleARKitSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AppleARKit.AppleARKitSettings");
    return result;
}
int32_t& _Script_AppleARKit::AppleARKitSettings::get_LiveLinkPublishingPort() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_AppleARKit::AppleARKitSettings::get_DefaultFaceTrackingDirection() {
    return (void*)((uintptr_t)this + 0x38);
}
