#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneEvalTemplateBase.hpp"
namespace _Script_MovieScene {
struct MovieSceneSection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneEvalTemplate : public MovieSceneEvalTemplateBase {
    void* get_CompletionMode();
    _Script_MovieScene::MovieSceneSection*& get_SourceSection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
