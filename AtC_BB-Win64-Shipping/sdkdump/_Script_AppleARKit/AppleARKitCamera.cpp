#include "..\FUObjectArray.hpp"
#include "AppleARKitCamera.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AppleARKit::AppleARKitCamera::get_TrackingQuality() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AppleARKit::AppleARKitCamera::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AppleARKit::AppleARKitCamera::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AppleARKit.AppleARKitCamera");
    return result;
}
void* _Script_AppleARKit::AppleARKitCamera::get_Orientation() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_AppleARKit::AppleARKitCamera::get_Translation() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_AppleARKit::AppleARKitCamera::get_ImageResolution() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_AppleARKit::AppleARKitCamera::get_FocalLength() {
    return (void*)((uintptr_t)this + 0x64);
}
void* _Script_AppleARKit::AppleARKitCamera::get_PrincipalPoint() {
    return (void*)((uintptr_t)this + 0x6c);
}
