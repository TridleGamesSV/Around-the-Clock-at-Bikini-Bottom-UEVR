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
struct MovieSceneActorReferenceSectionTemplate : public _Script_MovieScene::MovieSceneEvalTemplate {
    void* get_PropertyData();
    void* get_ActorGuidIndexCurve();
    void* get_ActorGuids();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
