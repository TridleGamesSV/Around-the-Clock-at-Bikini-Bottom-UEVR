#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Iron_Dogfish_Dying_Anim {
#pragma pack(push, 1)
struct Iron_Dogfish_Dying_Anim_C : public _Script_Engine::AnimInstance {
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_73DBFF3B4B1716D59931F6BD4B710404();
    void* get_AnimGraphNode_TransitionResult_90019AAC498713FB30C3AD94E7EF12B1();
    void* get_AnimGraphNode_SequencePlayer_A90400004F58FCF75524B39078FCF4EE();
    void* get_AnimGraphNode_StateResult_3B62EB6442CBB3C34879BEB80A76AEC4();
    void* get_AnimGraphNode_SequencePlayer_DE4A69C041D28AD50B2AF1A7C848C655();
    void* get_AnimGraphNode_StateResult_41F876EC47F784B2D838509E1F842823();
    void* get_AnimGraphNode_StateMachine_32A01C2341525EB463658383FE6B44FC();
    bool get_Dead();
    void set_Dead(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Iron_Dogfish_Dying_Anim_AnimGraphNode_TransitionResult_90019AAC498713FB30C3AD94E7EF12B1();
    void ExecuteUbergraph_Iron_Dogfish_Dying_Anim(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
