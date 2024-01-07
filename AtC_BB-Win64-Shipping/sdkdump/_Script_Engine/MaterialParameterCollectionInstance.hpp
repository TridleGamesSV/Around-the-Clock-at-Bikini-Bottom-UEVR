#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct MaterialParameterCollection;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialParameterCollectionInstance : public _Script_CoreUObject::Object {
    _Script_Engine::MaterialParameterCollection*& get_Collection();
    _Script_Engine::World*& get_World();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
