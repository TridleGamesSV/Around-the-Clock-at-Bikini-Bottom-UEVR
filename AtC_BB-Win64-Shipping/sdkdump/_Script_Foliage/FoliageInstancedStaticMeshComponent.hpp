#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\HierarchicalInstancedStaticMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct FoliageInstancedStaticMeshComponent : public _Script_Engine::HierarchicalInstancedStaticMeshComponent {
    void* get_OnInstanceTakePointDamage();
    void* get_OnInstanceTakeRadialDamage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
