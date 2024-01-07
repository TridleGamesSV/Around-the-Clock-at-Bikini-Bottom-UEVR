#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "HmdUserProfile.hpp"
#include "OculusFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_OculusHMD::OculusFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OculusHMD.OculusFunctionLibrary");
    return result;
}
void _Script_OculusHMD::OculusFunctionLibrary::ShowLoadingSplashScreen() {
    return;
}
float _Script_OculusHMD::OculusFunctionLibrary::GetTemperatureInCelsius() {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::ShowLoadingIcon(_Script_Engine::Texture2D* Texture) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::SetTiledMultiresLevel(void* Level) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::SetPositionScale3D(_Script_CoreUObject::Vector PosScale3D) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::SetLoadingSplashParams(void* TexturePath, _Script_CoreUObject::Vector DistanceInMeters, _Script_CoreUObject::Vector2D SizeInMeters, _Script_CoreUObject::Vector RotationAxis, float RotationDeltaInDeg) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::GetRawSensorData(_Script_CoreUObject::Vector& AngularAcceleration, _Script_CoreUObject::Vector& LinearAcceleration, _Script_CoreUObject::Vector& AngularVelocity, _Script_CoreUObject::Vector& LinearVelocity, float& TimeInSeconds, void* DeviceType) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::SetDisplayFrequency(float RequestedFrequency) {
    return;
}
float _Script_OculusHMD::OculusFunctionLibrary::GetBatteryLevel() {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::SetBaseRotationAndPositionOffset(_Script_CoreUObject::Rotator BaseRot, _Script_CoreUObject::Vector PosOffset, void* Options) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(_Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector BaseOffsetInMeters, void* Options) {
    return;
}
bool _Script_OculusHMD::OculusFunctionLibrary::IsPowerLevelStateThrottled() {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::GetLoadingSplashParams(void*& TexturePath, _Script_CoreUObject::Vector& DistanceInMeters, _Script_CoreUObject::Vector2D& SizeInMeters, _Script_CoreUObject::Vector& RotationAxis, float& RotationDeltaInDeg) {
    return;
}
bool _Script_OculusHMD::OculusFunctionLibrary::IsPowerLevelStateMinimum() {
    return;
}
bool _Script_OculusHMD::OculusFunctionLibrary::IsLoadingIconEnabled() {
    return;
}
bool _Script_OculusHMD::OculusFunctionLibrary::IsDeviceTracked(void* DeviceType) {
    return;
}
bool _Script_OculusHMD::OculusFunctionLibrary::IsControllerActive() {
    return;
}
bool _Script_OculusHMD::OculusFunctionLibrary::IsAutoLoadingSplashScreenEnabled() {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::HideLoadingSplashScreen(bool bClear) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::HideLoadingIcon() {
    return;
}
bool _Script_OculusHMD::OculusFunctionLibrary::HasSystemOverlayPresent() {
    return;
}
bool _Script_OculusHMD::OculusFunctionLibrary::HasInputFocus() {
    return;
}
bool _Script_OculusHMD::OculusFunctionLibrary::GetUserProfile(_Script_OculusHMD::HmdUserProfile& Profile) {
    return;
}
void* _Script_OculusHMD::OculusFunctionLibrary::GetTiledMultiresLevel() {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::GetPose(_Script_CoreUObject::Rotator& DeviceRotation, _Script_CoreUObject::Vector& DevicePosition, _Script_CoreUObject::Vector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, _Script_CoreUObject::Vector PositionScale) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization) {
    return;
}
void* _Script_OculusHMD::OculusFunctionLibrary::GetGearVRControllerHandedness() {
    return;
}
void* _Script_OculusHMD::OculusFunctionLibrary::GetDeviceName() {
    return;
}
float _Script_OculusHMD::OculusFunctionLibrary::GetCurrentDisplayFrequency() {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::GetBaseRotationAndPositionOffset(_Script_CoreUObject::Rotator& OutRot, _Script_CoreUObject::Vector& OutPosOffset) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(_Script_CoreUObject::Rotator& OutRotation, _Script_CoreUObject::Vector& OutBaseOffsetInMeters) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::ClearLoadingSplashScreens() {
    return;
}
void* _Script_OculusHMD::OculusFunctionLibrary::GetAvailableDisplayFrequencies() {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::EnableAutoLoadingSplashScreen(bool bAutoShowEnabled) {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::EnableArmModel(bool bArmModelEnable) {
    return;
}
bool _Script_OculusHMD::OculusFunctionLibrary::AreHeadPhonesPluggedIn() {
    return;
}
void _Script_OculusHMD::OculusFunctionLibrary::AddLoadingSplashScreen(_Script_Engine::Texture2D* Texture, _Script_CoreUObject::Vector TranslationInMeters, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector2D SizeInMeters, _Script_CoreUObject::Rotator DeltaRotation, bool bClearBeforeAdd) {
    return;
}
