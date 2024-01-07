#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneEventSectionTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    void* get_EventData();
    void* get_EventReceivers();
    bool get_bFireEventsWhenForwards();
    void set_bFireEventsWhenForwards(bool value);
    bool get_bFireEventsWhenBackwards();
    void set_bFireEventsWhenBackwards(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
