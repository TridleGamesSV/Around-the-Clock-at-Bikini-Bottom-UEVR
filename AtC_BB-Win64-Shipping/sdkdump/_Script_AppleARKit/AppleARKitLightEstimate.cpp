#include "..\FUObjectArray.hpp"
#include "AppleARKitLightEstimate.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AppleARKit::AppleARKitLightEstimate::get_bIsValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_AppleARKit::AppleARKitLightEstimate::set_bIsValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AppleARKit::AppleARKitLightEstimate::get_AmbientIntensity() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AppleARKit::AppleARKitLightEstimate::get_AmbientColorTemperatureKelvin() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AppleARKit::AppleARKitLightEstimate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AppleARKit.AppleARKitLightEstimate");
    return result;
}
