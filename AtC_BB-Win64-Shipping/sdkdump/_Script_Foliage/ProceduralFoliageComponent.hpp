#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Foliage {
struct ProceduralFoliageSpawner;
}
namespace _Script_Engine {
struct Volume;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct ProceduralFoliageComponent : public _Script_Engine::ActorComponent {
    _Script_Foliage::ProceduralFoliageSpawner*& get_FoliageSpawner();
    float& get_TileOverlap();
    _Script_Engine::Volume*& get_SpawningVolume();
    void* get_ProceduralGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
