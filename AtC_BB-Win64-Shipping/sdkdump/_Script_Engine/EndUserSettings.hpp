#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EndUserSettings : public _Script_CoreUObject::Object {
    bool get_bSendAnonymousUsageDataToEpic();
    void set_bSendAnonymousUsageDataToEpic(bool value);
    bool get_bSendMeanTimeBetweenFailureDataToEpic();
    void set_bSendMeanTimeBetweenFailureDataToEpic(bool value);
    bool get_bAllowUserIdInUsageData();
    void set_bAllowUserIdInUsageData(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
