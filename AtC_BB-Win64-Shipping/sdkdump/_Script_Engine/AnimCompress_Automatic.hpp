#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCompress.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimCompress_Automatic : public AnimCompress {
    float& get_MaxEndEffectorError();
    bool get_bTryFixedBitwiseCompression();
    void set_bTryFixedBitwiseCompression(bool value);
    bool get_bTryPerTrackBitwiseCompression();
    void set_bTryPerTrackBitwiseCompression(bool value);
    bool get_bTryLinearKeyRemovalCompression();
    void set_bTryLinearKeyRemovalCompression(bool value);
    bool get_bTryIntervalKeyRemoval();
    void set_bTryIntervalKeyRemoval(bool value);
    bool get_bRunCurrentDefaultCompressor();
    void set_bRunCurrentDefaultCompressor(bool value);
    bool get_bAutoReplaceIfExistingErrorTooGreat();
    void set_bAutoReplaceIfExistingErrorTooGreat(bool value);
    bool get_bRaiseMaxErrorToExisting();
    void set_bRaiseMaxErrorToExisting(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
