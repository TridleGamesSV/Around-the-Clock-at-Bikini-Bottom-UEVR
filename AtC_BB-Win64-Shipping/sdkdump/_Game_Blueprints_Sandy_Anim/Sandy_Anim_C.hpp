#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Sandy_Anim {
#pragma pack(push, 1)
struct Sandy_Anim_C : public _Script_Engine::AnimInstance {
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_50BDB9594B3832F020648EAB23F343B1();
    void* get_AnimGraphNode_TransitionResult_EC3EDB854944AA0127B63F83574F980C();
    void* get_AnimGraphNode_SequencePlayer_050988C44D6E542C54CDAF90D4DF526C();
    void* get_AnimGraphNode_StateResult_04DAB7744F996BCF188D9AB27C4E11B6();
    void* get_AnimGraphNode_SequencePlayer_867F7BE749EE38AD79BCB382CE69D9FA();
    void* get_AnimGraphNode_StateResult_B6DE4B344EC4DA85CC4344B3CA0643D8();
    void* get_AnimGraphNode_StateMachine_2AC00DF7450EF2D681CD769A8AE1CD30();
    bool get_Jumpscare();
    void set_Jumpscare(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Sandy_Anim_AnimGraphNode_TransitionResult_EC3EDB854944AA0127B63F83574F980C();
    void ExecuteUbergraph_Sandy_Anim(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
