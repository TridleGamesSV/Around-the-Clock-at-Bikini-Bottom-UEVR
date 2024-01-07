#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackInst.hpp"
namespace _Script_Engine {
struct InterpTrackFloatMaterialParam;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackInstFloatMaterialParam : public InterpTrackInst {
    void* get_MaterialInstances();
    void* get_ResetFloats();
    void* get_PrimitiveMaterialRefs();
    _Script_Engine::InterpTrackFloatMaterialParam*& get_InstancedTrack();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
