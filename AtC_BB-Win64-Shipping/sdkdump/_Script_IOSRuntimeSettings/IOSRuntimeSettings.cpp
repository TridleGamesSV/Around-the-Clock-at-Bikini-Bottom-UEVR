#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "IOSRuntimeSettings.hpp"
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bEnableGameCenterSupport() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bGenerateXCArchive() {
    return (*(uint8_t*)((uintptr_t)this + 0x35 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bEnableRemoteNotificationsSupport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bUseRSync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bEnableGameCenterSupport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bEnableCloudKitSupport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bEnableCloudKitSupport() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 2 != 0;
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bEnableRemoteNotificationsSupport() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 4 != 0;
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bSupportsMetal() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bSupportsMetal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bSupportsLandscapeLeftOrientation() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 4 != 0;
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bSupportsMetalMRT() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bSupportsMetalMRT(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bCookPVRTCTextures() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bCookPVRTCTextures(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bShipForBitcode() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bCookASTCTextures() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bCookASTCTextures(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_AdditionalLinkerFlags() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bSupportsOpenGLES2() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bSupportsOpenGLES2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bSupportsLandscapeRightOrientation() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 8 != 0;
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_EnableRemoteShaderCompile() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_EnableRemoteShaderCompile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bGeneratedSYMFile() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bGeneratedSYMFile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bUseRemoteAsVirtualJoystick() {
    return (*(uint8_t*)((uintptr_t)this + 0xba + 0)) & 1 != 0;
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bGeneratedSYMBundle() {
    return (*(uint8_t*)((uintptr_t)this + 0x33 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bGeneratedSYMBundle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x33 + 0);
    *(uint8_t*)((uintptr_t)this + 0x33 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bGenerateCrashReportSymbols() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bGenerateCrashReportSymbols(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bSupportsLandscapeLeftOrientation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bGenerateXCArchive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35 + 0);
    *(uint8_t*)((uintptr_t)this + 0x35 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bDevForArmV7() {
    return (*(uint8_t*)((uintptr_t)this + 0x36 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bDevForArmV7(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x36 + 0);
    *(uint8_t*)((uintptr_t)this + 0x36 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bDevForArm64() {
    return (*(uint8_t*)((uintptr_t)this + 0x37 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bDevForArm64(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37 + 0);
    *(uint8_t*)((uintptr_t)this + 0x37 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bSupportsUpsideDownOrientation() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 2 != 0;
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bDevForArmV7S() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bDevForArmV7S(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bShipForArmV7() {
    return (*(uint8_t*)((uintptr_t)this + 0x39 + 0)) & 1 != 0;
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_RSyncUsername() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bShipForArmV7(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x39 + 0);
    *(uint8_t*)((uintptr_t)this + 0x39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bShipForArm64() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bShipForArm64(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bSupportsPortraitOrientation() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bShipForArmV7S() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bShipForArmV7S(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bShipForBitcode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_AdditionalShippingLinkerFlags() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_RemoteServerName() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bUseRSync() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_DeltaCopyInstallPath() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_SSHPrivateKeyLocation() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_SSHPrivateKeyOverridePath() {
    return (void*)((uintptr_t)this + 0xa8);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bTreatRemoteAsSeparateController() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bTreatRemoteAsSeparateController(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bAllowRemoteRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0xb9 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bAllowRemoteRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bUseRemoteAsVirtualJoystick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba + 0);
    *(uint8_t*)((uintptr_t)this + 0xba + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bUseRemoteAbsoluteDpadValues() {
    return (*(uint8_t*)((uintptr_t)this + 0xbb + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bUseRemoteAbsoluteDpadValues(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbb + 0);
    *(uint8_t*)((uintptr_t)this + 0xbb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bSupportsPortraitOrientation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bSupportsUpsideDownOrientation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bSupportsLandscapeRightOrientation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_BundleDisplayName() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_BundleName() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_BundleIdentifier() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_VersionInfo() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_FrameRateLock() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_MinimumiOSVersion() {
    return (void*)((uintptr_t)this + 0x101);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bSupportsIPad() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bSupportsIPad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bSupportsIPhone() {
    return (*(uint8_t*)((uintptr_t)this + 0x104 + 0)) & 2 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bSupportsIPhone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x104 + 0);
    *(uint8_t*)((uintptr_t)this + 0x104 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_AdditionalPlistData() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bEnableFacebookSupport() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bEnableFacebookSupport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_FacebookAppID() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_MobileProvision() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_SigningCertificate() {
    return (void*)((uintptr_t)this + 0x140);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bAutomaticSigning() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bAutomaticSigning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_IOSTeamID() {
    return (void*)((uintptr_t)this + 0x158);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bDisableHTTPS() {
    return (*(uint8_t*)((uintptr_t)this + 0x168 + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bDisableHTTPS(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x168 + 0);
    *(uint8_t*)((uintptr_t)this + 0x168 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_MaxShaderLanguageVersion() {
    return (void*)((uintptr_t)this + 0x169);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_UseFastIntrinsics() {
    return (*(uint8_t*)((uintptr_t)this + 0x16a + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_UseFastIntrinsics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16a + 0);
    *(uint8_t*)((uintptr_t)this + 0x16a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_EnableMathOptimisations() {
    return (*(uint8_t*)((uintptr_t)this + 0x16b + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_EnableMathOptimisations(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16b + 0);
    *(uint8_t*)((uintptr_t)this + 0x16b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_bUseIntegratedKeyboard() {
    return (*(uint8_t*)((uintptr_t)this + 0x16c + 0)) & 1 != 0;
}
void _Script_IOSRuntimeSettings::IOSRuntimeSettings::set_bUseIntegratedKeyboard(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16c + 0);
    *(uint8_t*)((uintptr_t)this + 0x16c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_AudioSampleRate() {
    return *(int32_t*)((uintptr_t)this + 0x170);
}
int32_t& _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_AudioCallbackBufferFrameSize() {
    return *(int32_t*)((uintptr_t)this + 0x174);
}
int32_t& _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_AudioNumBuffersToEnqueue() {
    return *(int32_t*)((uintptr_t)this + 0x178);
}
int32_t& _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_AudioMaxChannels() {
    return *(int32_t*)((uintptr_t)this + 0x17c);
}
int32_t& _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_AudioNumSourceWorkers() {
    return *(int32_t*)((uintptr_t)this + 0x180);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_SpatializationPlugin() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_ReverbPlugin() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_IOSRuntimeSettings::IOSRuntimeSettings::get_OcclusionPlugin() {
    return (void*)((uintptr_t)this + 0x1a8);
}
_Script_CoreUObject::Class* _Script_IOSRuntimeSettings::IOSRuntimeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/IOSRuntimeSettings.IOSRuntimeSettings");
    return result;
}
