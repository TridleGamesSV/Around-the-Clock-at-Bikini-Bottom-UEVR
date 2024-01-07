#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_IOSRuntimeSettings {
#pragma pack(push, 1)
struct IOSRuntimeSettings : public _Script_CoreUObject::Object {
    bool get_bEnableGameCenterSupport();
    void set_bEnableGameCenterSupport(bool value);
    bool get_bEnableCloudKitSupport();
    void set_bEnableCloudKitSupport(bool value);
    bool get_bEnableRemoteNotificationsSupport();
    void set_bEnableRemoteNotificationsSupport(bool value);
    bool get_bSupportsMetal();
    void set_bSupportsMetal(bool value);
    bool get_bSupportsMetalMRT();
    void set_bSupportsMetalMRT(bool value);
    bool get_bCookPVRTCTextures();
    void set_bCookPVRTCTextures(bool value);
    bool get_bCookASTCTextures();
    void set_bCookASTCTextures(bool value);
    bool get_bSupportsOpenGLES2();
    void set_bSupportsOpenGLES2(bool value);
    bool get_EnableRemoteShaderCompile();
    void set_EnableRemoteShaderCompile(bool value);
    bool get_bGeneratedSYMFile();
    void set_bGeneratedSYMFile(bool value);
    bool get_bGeneratedSYMBundle();
    void set_bGeneratedSYMBundle(bool value);
    bool get_bGenerateCrashReportSymbols();
    void set_bGenerateCrashReportSymbols(bool value);
    bool get_bGenerateXCArchive();
    void set_bGenerateXCArchive(bool value);
    bool get_bDevForArmV7();
    void set_bDevForArmV7(bool value);
    bool get_bDevForArm64();
    void set_bDevForArm64(bool value);
    bool get_bDevForArmV7S();
    void set_bDevForArmV7S(bool value);
    bool get_bShipForArmV7();
    void set_bShipForArmV7(bool value);
    bool get_bShipForArm64();
    void set_bShipForArm64(bool value);
    bool get_bShipForArmV7S();
    void set_bShipForArmV7S(bool value);
    bool get_bShipForBitcode();
    void set_bShipForBitcode(bool value);
    void* get_AdditionalLinkerFlags();
    void* get_AdditionalShippingLinkerFlags();
    void* get_RemoteServerName();
    bool get_bUseRSync();
    void set_bUseRSync(bool value);
    void* get_RSyncUsername();
    void* get_DeltaCopyInstallPath();
    void* get_SSHPrivateKeyLocation();
    void* get_SSHPrivateKeyOverridePath();
    bool get_bTreatRemoteAsSeparateController();
    void set_bTreatRemoteAsSeparateController(bool value);
    bool get_bAllowRemoteRotation();
    void set_bAllowRemoteRotation(bool value);
    bool get_bUseRemoteAsVirtualJoystick();
    void set_bUseRemoteAsVirtualJoystick(bool value);
    bool get_bUseRemoteAbsoluteDpadValues();
    void set_bUseRemoteAbsoluteDpadValues(bool value);
    bool get_bSupportsPortraitOrientation();
    void set_bSupportsPortraitOrientation(bool value);
    bool get_bSupportsUpsideDownOrientation();
    void set_bSupportsUpsideDownOrientation(bool value);
    bool get_bSupportsLandscapeLeftOrientation();
    void set_bSupportsLandscapeLeftOrientation(bool value);
    bool get_bSupportsLandscapeRightOrientation();
    void set_bSupportsLandscapeRightOrientation(bool value);
    void* get_BundleDisplayName();
    void* get_BundleName();
    void* get_BundleIdentifier();
    void* get_VersionInfo();
    void* get_FrameRateLock();
    void* get_MinimumiOSVersion();
    bool get_bSupportsIPad();
    void set_bSupportsIPad(bool value);
    bool get_bSupportsIPhone();
    void set_bSupportsIPhone(bool value);
    void* get_AdditionalPlistData();
    bool get_bEnableFacebookSupport();
    void set_bEnableFacebookSupport(bool value);
    void* get_FacebookAppID();
    void* get_MobileProvision();
    void* get_SigningCertificate();
    bool get_bAutomaticSigning();
    void set_bAutomaticSigning(bool value);
    void* get_IOSTeamID();
    bool get_bDisableHTTPS();
    void set_bDisableHTTPS(bool value);
    void* get_MaxShaderLanguageVersion();
    bool get_UseFastIntrinsics();
    void set_UseFastIntrinsics(bool value);
    bool get_EnableMathOptimisations();
    void set_EnableMathOptimisations(bool value);
    bool get_bUseIntegratedKeyboard();
    void set_bUseIntegratedKeyboard(bool value);
    int32_t& get_AudioSampleRate();
    int32_t& get_AudioCallbackBufferFrameSize();
    int32_t& get_AudioNumBuffersToEnqueue();
    int32_t& get_AudioMaxChannels();
    int32_t& get_AudioNumSourceWorkers();
    void* get_SpatializationPlugin();
    void* get_ReverbPlugin();
    void* get_OcclusionPlugin();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
