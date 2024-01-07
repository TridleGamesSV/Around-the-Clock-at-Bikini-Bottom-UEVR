#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_TwoWayBlend : public _Script_Engine::AnimNode_Base {
    void* get_A();
    void* get_B();
    float& get_Alpha();
    void* get_AlphaScaleBias();
    float& get_InternalBlendAlpha();
    bool get_bAIsRelevant();
    void set_bAIsRelevant(bool value);
    bool get_bBIsRelevant();
    void set_bBIsRelevant(bool value);
    bool get_bResetChildOnActivation();
    void set_bResetChildOnActivation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
