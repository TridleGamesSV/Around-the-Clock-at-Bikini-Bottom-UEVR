#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequenceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneSkeletalAnimationParams {
    _Script_Engine::AnimSequenceBase*& get_Animation();
    float& get_StartOffset();
    float& get_EndOffset();
    float& get_PlayRate();
    bool get_bReverse();
    void set_bReverse(bool value);
    void* get_SlotName();
    void* get_Weight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
