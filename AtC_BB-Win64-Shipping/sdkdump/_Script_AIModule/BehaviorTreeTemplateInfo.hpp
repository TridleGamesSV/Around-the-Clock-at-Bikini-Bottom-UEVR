#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_AIModule {
struct BTCompositeNode;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BehaviorTreeTemplateInfo {
    _Script_AIModule::BehaviorTree*& get_Asset();
    _Script_AIModule::BTCompositeNode*& get_Template();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
