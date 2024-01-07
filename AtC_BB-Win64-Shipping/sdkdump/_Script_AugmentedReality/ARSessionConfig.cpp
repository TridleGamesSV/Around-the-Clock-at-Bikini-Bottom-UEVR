#include "..\FUObjectArray.hpp"
#include "ARSessionConfig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
void* _Script_AugmentedReality::ARSessionConfig::get_SessionType() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_AugmentedReality::ARSessionConfig::set_bEnableAutomaticCameraOverlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AugmentedReality::ARSessionConfig::get_PlaneDetectionMode() {
    return (void*)((uintptr_t)this + 0x31);
}
void* _Script_AugmentedReality::ARSessionConfig::get_LightEstimationMode() {
    return (void*)((uintptr_t)this + 0x32);
}
void* _Script_AugmentedReality::ARSessionConfig::get_FrameSyncMode() {
    return (void*)((uintptr_t)this + 0x33);
}
bool _Script_AugmentedReality::ARSessionConfig::get_bEnableAutomaticCameraOverlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
bool _Script_AugmentedReality::ARSessionConfig::get_bEnableAutomaticCameraTracking() {
    return (*(uint8_t*)((uintptr_t)this + 0x35 + 0)) & 1 != 0;
}
void _Script_AugmentedReality::ARSessionConfig::set_bEnableAutomaticCameraTracking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35 + 0);
    *(uint8_t*)((uintptr_t)this + 0x35 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSessionConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARSessionConfig");
    return result;
}
