#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_FirstPersonBP_Patrick_FightingFists_Anim_BP {
#pragma pack(push, 1)
struct Patrick_FightingFists_Anim_BP_C : public _Script_Engine::AnimInstance {
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_FD05589943BB997FD7A4DF935A7EA47D();
    void* get_AnimGraphNode_TransitionResult_83795E754933BF885A8CCBBED1BA127D();
    void* get_AnimGraphNode_TransitionResult_3394ECC1413544F923271E8ED8667251();
    void* get_AnimGraphNode_TransitionResult_B45367C844C8CB5534CD0FAF1D5E14C7();
    void* get_AnimGraphNode_TransitionResult_A27828D54CFEC9C8E522F383DFB6A00F();
    void* get_AnimGraphNode_TransitionResult_8598242440CCC72C503AA4BB50E2D31E();
    void* get_AnimGraphNode_TransitionResult_FD20B22B4F92994DF6BC07A351BE89CF();
    void* get_AnimGraphNode_TransitionResult_11B2FCB34F5B640552F3CF801E4ECEE6();
    void* get_AnimGraphNode_TransitionResult_66940076419F9F5AE461828138547A1E();
    void* get_AnimGraphNode_TransitionResult_4638E2F54B75D8B8EE6B7E874ED35416();
    void* get_AnimGraphNode_TransitionResult_75F56F1246CA0021D93E1D9CEF278382();
    void* get_AnimGraphNode_SequencePlayer_3C1DBF3441F43BD3D7E117AC3BF51460();
    void* get_AnimGraphNode_StateResult_814AE96C4242957DD20F0EB33D3D24B6();
    void* get_AnimGraphNode_SequencePlayer_76C7ED764A0E78119CEB6FBE72773EC8();
    void* get_AnimGraphNode_StateResult_253B58074A26BCA8EC74CDA1266E4B9E();
    void* get_AnimGraphNode_SequencePlayer_807722A94F21B8B7105DE5B64CD26951();
    void* get_AnimGraphNode_StateResult_CDB132044A44362A2D63BF8030551EA2();
    void* get_AnimGraphNode_SequencePlayer_EDD9080F4B423230472468B2473468AC();
    void* get_AnimGraphNode_StateResult_30F48CCF4907DA28A7D8B2B799E95134();
    void* get_AnimGraphNode_SequencePlayer_79C328D34FB744C51C3EDA9C6E328042();
    void* get_AnimGraphNode_StateResult_7308FC434098A698EEA3EBB16950B506();
    void* get_AnimGraphNode_SequencePlayer_B05AA50748134ADA968E4983478B4B43();
    void* get_AnimGraphNode_StateResult_1974D34C4D44607E50C48A96422975F8();
    void* get_AnimGraphNode_StateMachine_04B6EBC94D9748C65054BBABD98FB295();
    bool get_Idle_Fighting();
    void set_Idle_Fighting(bool value);
    bool get_Idle_Blocking();
    void set_Idle_Blocking(bool value);
    bool get_Punch_Attack_1();
    void set_Punch_Attack_1(bool value);
    bool get_Punch_Attack_2();
    void set_Punch_Attack_2(bool value);
    bool get_Punch_Attack_3();
    void set_Punch_Attack_3(bool value);
    bool get_Punch_Attack_4();
    void set_Punch_Attack_4(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Patrick_FightingFists_Anim_BP_AnimGraphNode_TransitionResult_8598242440CCC72C503AA4BB50E2D31E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Patrick_FightingFists_Anim_BP_AnimGraphNode_TransitionResult_FD20B22B4F92994DF6BC07A351BE89CF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Patrick_FightingFists_Anim_BP_AnimGraphNode_TransitionResult_A27828D54CFEC9C8E522F383DFB6A00F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Patrick_FightingFists_Anim_BP_AnimGraphNode_TransitionResult_11B2FCB34F5B640552F3CF801E4ECEE6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Patrick_FightingFists_Anim_BP_AnimGraphNode_TransitionResult_66940076419F9F5AE461828138547A1E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Patrick_FightingFists_Anim_BP_AnimGraphNode_TransitionResult_4638E2F54B75D8B8EE6B7E874ED35416();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Patrick_FightingFists_Anim_BP_AnimGraphNode_TransitionResult_B45367C844C8CB5534CD0FAF1D5E14C7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Patrick_FightingFists_Anim_BP_AnimGraphNode_TransitionResult_75F56F1246CA0021D93E1D9CEF278382();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Patrick_FightingFists_Anim_BP_AnimGraphNode_TransitionResult_3394ECC1413544F923271E8ED8667251();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Patrick_FightingFists_Anim_BP_AnimGraphNode_TransitionResult_83795E754933BF885A8CCBBED1BA127D();
    void ExecuteUbergraph_Patrick_FightingFists_Anim_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
