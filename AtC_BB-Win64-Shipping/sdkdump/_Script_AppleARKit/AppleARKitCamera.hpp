#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AppleARKit {
#pragma pack(push, 1)
struct AppleARKitCamera {
    void* get_TrackingQuality();
    void* get_Transform();
    void* get_Orientation();
    void* get_Translation();
    void* get_ImageResolution();
    void* get_FocalLength();
    void* get_PrincipalPoint();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
