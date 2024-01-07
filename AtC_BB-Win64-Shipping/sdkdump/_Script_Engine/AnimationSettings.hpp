#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimationSettings : public DeveloperSettings {
    int32_t& get_CompressCommandletVersion();
    void* get_KeyEndEffectorsMatchNameArray();
    void* get_DefaultCompressionAlgorithm();
    void* get_RotationCompressionFormat();
    void* get_TranslationCompressionFormat();
    float& get_MaxCurveError();
    float& get_AlternativeCompressionThreshold();
    bool get_ForceRecompression();
    void set_ForceRecompression(bool value);
    bool get_bOnlyCheckForMissingSkeletalMeshes();
    void set_bOnlyCheckForMissingSkeletalMeshes(bool value);
    bool get_bForceBelowThreshold();
    void set_bForceBelowThreshold(bool value);
    bool get_bFirstRecompressUsingCurrentOrDefault();
    void set_bFirstRecompressUsingCurrentOrDefault(bool value);
    bool get_bRaiseMaxErrorToExisting();
    void set_bRaiseMaxErrorToExisting(bool value);
    bool get_bTryFixedBitwiseCompression();
    void set_bTryFixedBitwiseCompression(bool value);
    bool get_bTryPerTrackBitwiseCompression();
    void set_bTryPerTrackBitwiseCompression(bool value);
    bool get_bTryLinearKeyRemovalCompression();
    void set_bTryLinearKeyRemovalCompression(bool value);
    bool get_bTryIntervalKeyRemoval();
    void set_bTryIntervalKeyRemoval(bool value);
    bool get_bEnablePerformanceLog();
    void set_bEnablePerformanceLog(bool value);
    bool get_bStripAnimationDataOnDedicatedServer();
    void set_bStripAnimationDataOnDedicatedServer(bool value);
    bool get_bTickAnimationOnSkeletalMeshInit();
    void set_bTickAnimationOnSkeletalMeshInit(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
