#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Larry_Anim_BP {
#pragma pack(push, 1)
struct Larry_Anim_BP_C : public _Script_Engine::AnimInstance {
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_63C065CD4337C851E78C749E22B81A87();
    void* get_AnimGraphNode_TransitionResult_E87B73AB4D53215C922324A99C1FD3AC();
    void* get_AnimGraphNode_TransitionResult_2C426D5C44FB1C4C7C01AC89A3F11818();
    void* get_AnimGraphNode_TransitionResult_9C9CDC9B49E8B818133B6482D57A5E98();
    void* get_AnimGraphNode_TransitionResult_140BA3384D00E96B08CDD3BD137346FB();
    void* get_AnimGraphNode_TransitionResult_442A31D84AC316F56947AFAB89EE38B9();
    void* get_AnimGraphNode_TransitionResult_33E6726B452DB4A95D42E78CB176C445();
    void* get_AnimGraphNode_TransitionResult_8B25E59946F3D57A2C50BB966D86EF98();
    void* get_AnimGraphNode_TransitionResult_945D93834D14A5ED69FBFD9DD68933CF();
    void* get_AnimGraphNode_TransitionResult_0D090E3E4827CCE26E27AC83EF6E28B4();
    void* get_AnimGraphNode_TransitionResult_904B039D4E77216228C35BB0B07BBCE8();
    void* get_AnimGraphNode_TransitionResult_FDF52D2C4D2D4DA5777810B1DE1B1581();
    void* get_AnimGraphNode_TransitionResult_79BCF8C449930721C97553979092DCC6();
    void* get_AnimGraphNode_SequencePlayer_DD166D544E9AD6528EF03A948BAD2006();
    void* get_AnimGraphNode_StateResult_199DF80A4613B2CD938529AF7B2FD94D();
    void* get_AnimGraphNode_SequencePlayer_F09836EE4FED6DBC9C3E3381FDF1627E();
    void* get_AnimGraphNode_StateResult_9A9F0319434ED7A649CEFFB0AC821D3A();
    void* get_AnimGraphNode_SequencePlayer_04DA65D74A86552C7466E2B5ABB9F7AB();
    void* get_AnimGraphNode_StateResult_D0DBA2E84E2AD29BB6C4BDA7697C91E9();
    void* get_AnimGraphNode_SequencePlayer_C7F3350047D7557A9728FC993FF00153();
    void* get_AnimGraphNode_StateResult_46A2D26A4314EA00CEFBAF8A6EAB4BE6();
    void* get_AnimGraphNode_StateMachine_B908B94E467298AD3F1B328698BEC9A9();
    bool get_Idle();
    void set_Idle(bool value);
    bool get_Walk();
    void set_Walk(bool value);
    bool get_Run();
    void set_Run(bool value);
    bool get_Punch();
    void set_Punch(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_442A31D84AC316F56947AFAB89EE38B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_33E6726B452DB4A95D42E78CB176C445();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_140BA3384D00E96B08CDD3BD137346FB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_8B25E59946F3D57A2C50BB966D86EF98();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_945D93834D14A5ED69FBFD9DD68933CF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_0D090E3E4827CCE26E27AC83EF6E28B4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_9C9CDC9B49E8B818133B6482D57A5E98();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_904B039D4E77216228C35BB0B07BBCE8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_FDF52D2C4D2D4DA5777810B1DE1B1581();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_79BCF8C449930721C97553979092DCC6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_2C426D5C44FB1C4C7C01AC89A3F11818();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Larry_Anim_BP_AnimGraphNode_TransitionResult_E87B73AB4D53215C922324A99C1FD3AC();
    void ExecuteUbergraph_Larry_Anim_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
