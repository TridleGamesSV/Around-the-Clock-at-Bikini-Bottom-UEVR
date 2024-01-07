#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavigationGraphNodeComponent : public SceneComponent {
    void* get_Node();
    _Script_Engine::NavigationGraphNodeComponent*& get_NextNodeComponent();
    _Script_Engine::NavigationGraphNodeComponent*& get_PrevNodeComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
