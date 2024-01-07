#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SourceEffectChainEntry.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct SoundEffectSourcePresetChain;
}
namespace _Script_Engine {
struct SoundEffectSubmixPreset;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct AudioMixerBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetBypassSourceEffectChainEntry(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);
    void RemoveSourceEffectFromPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);
    void RemoveMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
    int32_t GetNumberOfEntriesInSourceEffectChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain);
    void ClearMasterSubmixEffects(_Script_CoreUObject::Object* WorldContextObject);
    void AddSourceEffectToPresetChain(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSourcePresetChain* PresetChain, _Script_Engine::SourceEffectChainEntry Entry);
    void AddMasterSubmixEffect(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::SoundEffectSubmixPreset* SubmixEffectPreset);
}; // Size: 0x28
#pragma pack(pop)
}
