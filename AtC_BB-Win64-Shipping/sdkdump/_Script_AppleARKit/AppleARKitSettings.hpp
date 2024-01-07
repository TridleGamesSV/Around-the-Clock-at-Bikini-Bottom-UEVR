#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AppleARKit {
#pragma pack(push, 1)
struct AppleARKitSettings : public _Script_CoreUObject::Object {
    bool get_bEnableLiveLinkForFaceTracking();
    void set_bEnableLiveLinkForFaceTracking(bool value);
    int32_t& get_LiveLinkPublishingPort();
    void* get_DefaultFaceTrackingLiveLinkSubjectName();
    void* get_DefaultFaceTrackingDirection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
