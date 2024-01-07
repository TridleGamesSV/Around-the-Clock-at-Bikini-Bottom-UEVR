#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_OculusHMD {
struct HmdUserProfile;
}
namespace _Script_OculusHMD {
#pragma pack(push, 1)
struct OculusFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void ShowLoadingSplashScreen();
    void ShowLoadingIcon(_Script_Engine::Texture2D* Texture);
    void SetTiledMultiresLevel(void* Level);
    void SetPositionScale3D(_Script_CoreUObject::Vector PosScale3D);
    void SetLoadingSplashParams(void* TexturePath, _Script_CoreUObject::Vector DistanceInMeters, _Script_CoreUObject::Vector2D SizeInMeters, _Script_CoreUObject::Vector RotationAxis, float RotationDeltaInDeg);
    void SetDisplayFrequency(float RequestedFrequency);
    void SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel);
    void SetBaseRotationAndPositionOffset(_Script_CoreUObject::Rotator BaseRot, _Script_CoreUObject::Vector PosOffset, void* Options);
    void SetBaseRotationAndBaseOffsetInMeters(_Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector BaseOffsetInMeters, void* Options);
    bool IsPowerLevelStateThrottled();
    bool IsPowerLevelStateMinimum();
    bool IsLoadingIconEnabled();
    bool IsDeviceTracked(void* DeviceType);
    bool IsControllerActive();
    bool IsAutoLoadingSplashScreenEnabled();
    void HideLoadingSplashScreen(bool bClear);
    void HideLoadingIcon();
    bool HasSystemOverlayPresent();
    bool HasInputFocus();
    bool GetUserProfile(_Script_OculusHMD::HmdUserProfile& Profile);
    void* GetTiledMultiresLevel();
    float GetTemperatureInCelsius();
    void GetRawSensorData(_Script_CoreUObject::Vector& AngularAcceleration, _Script_CoreUObject::Vector& LinearAcceleration, _Script_CoreUObject::Vector& AngularVelocity, _Script_CoreUObject::Vector& LinearVelocity, float& TimeInSeconds, void* DeviceType);
    void GetPose(_Script_CoreUObject::Rotator& DeviceRotation, _Script_CoreUObject::Vector& DevicePosition, _Script_CoreUObject::Vector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, _Script_CoreUObject::Vector PositionScale);
    void GetLoadingSplashParams(void*& TexturePath, _Script_CoreUObject::Vector& DistanceInMeters, _Script_CoreUObject::Vector2D& SizeInMeters, _Script_CoreUObject::Vector& RotationAxis, float& RotationDeltaInDeg);
    void GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization);
    void* GetGearVRControllerHandedness();
    void* GetDeviceName();
    float GetCurrentDisplayFrequency();
    float GetBatteryLevel();
    void GetBaseRotationAndPositionOffset(_Script_CoreUObject::Rotator& OutRot, _Script_CoreUObject::Vector& OutPosOffset);
    void GetBaseRotationAndBaseOffsetInMeters(_Script_CoreUObject::Rotator& OutRotation, _Script_CoreUObject::Vector& OutBaseOffsetInMeters);
    void* GetAvailableDisplayFrequencies();
    void EnableAutoLoadingSplashScreen(bool bAutoShowEnabled);
    void EnableArmModel(bool bArmModelEnable);
    void ClearLoadingSplashScreens();
    bool AreHeadPhonesPluggedIn();
    void AddLoadingSplashScreen(_Script_Engine::Texture2D* Texture, _Script_CoreUObject::Vector TranslationInMeters, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector2D SizeInMeters, _Script_CoreUObject::Rotator DeltaRotation, bool bClearBeforeAdd);
}; // Size: 0x28
#pragma pack(pop)
}
