#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkMessageBusFramework {
#pragma pack(push, 1)
struct LiveLinkPongMessage {
    void* get_ProviderName();
    void* get_MachineName();
    void* get_PollRequest();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
