#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Nut_Alarm_Anim_BP {
#pragma pack(push, 1)
struct Nut_Alarm_Anim_BP_C : public _Script_Engine::AnimInstance {
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_1DCB228042DF5C73F8D3C9BC3CAF75C1();
    void* get_AnimGraphNode_TransitionResult_BD184D574E23B0DDA17D00A427B22C3F();
    void* get_AnimGraphNode_TransitionResult_32AC6DFD4B53FB1267D47990AC36D514();
    void* get_AnimGraphNode_TransitionResult_0514CF10487D9592D48CDBB68380CB94();
    void* get_AnimGraphNode_TransitionResult_9F4B9FCB4EB54DA8020441B03682977C();
    void* get_AnimGraphNode_TransitionResult_7C93E9BD4E34274C8057C1A1BB1F503D();
    void* get_AnimGraphNode_TransitionResult_8EC789574CE3B4A8FCF92BB3AD7F1003();
    void* get_AnimGraphNode_TransitionResult_91D3FD94488B171CD7442B87921AB0A2();
    void* get_AnimGraphNode_TransitionResult_91443CA14CA8F729C609A9AE72BE471F();
    void* get_AnimGraphNode_TransitionResult_A7514CE940CC9333FB83C58EE0A5B5BB();
    void* get_AnimGraphNode_TransitionResult_2A3ED6D0404228007CDCCBA4D929BC07();
    void* get_AnimGraphNode_TransitionResult_F90CD4CE4CDA02206E4241932F8A01B1();
    void* get_AnimGraphNode_TransitionResult_0F8D6F97497796A94FCB6A8DF6B14BC6();
    void* get_AnimGraphNode_SequencePlayer_DF248DC549F50D2C4AFCFEBEDB53FC41();
    void* get_AnimGraphNode_StateResult_2205F00147736FC978FF05A103E94378();
    void* get_AnimGraphNode_SequencePlayer_17ED367344C49421DE4E0594C4D150FA();
    void* get_AnimGraphNode_StateResult_EE0E106244B7CE57DEE84C90B9721EAA();
    void* get_AnimGraphNode_SequencePlayer_95488C774E8F7B6DADAA21BF2271C904();
    void* get_AnimGraphNode_StateResult_B61BB39B4F9165626A7EE1954F581B11();
    void* get_AnimGraphNode_SequencePlayer_9CEA1F4D4E4A33CEC514B28147B83F72();
    void* get_AnimGraphNode_StateResult_A95779CC4F4D7DBCC734BE9C974A90F0();
    void* get_AnimGraphNode_StateMachine_5BDE9F284882DAD48D27C2A2CF15094D();
    bool get_Idle();
    void set_Idle(bool value);
    bool get_Attack();
    void set_Attack(bool value);
    bool get_Dig();
    void set_Dig(bool value);
    bool get_Emerge();
    void set_Emerge(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_7C93E9BD4E34274C8057C1A1BB1F503D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_8EC789574CE3B4A8FCF92BB3AD7F1003();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_9F4B9FCB4EB54DA8020441B03682977C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_91D3FD94488B171CD7442B87921AB0A2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_91443CA14CA8F729C609A9AE72BE471F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_A7514CE940CC9333FB83C58EE0A5B5BB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_0514CF10487D9592D48CDBB68380CB94();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_2A3ED6D0404228007CDCCBA4D929BC07();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_F90CD4CE4CDA02206E4241932F8A01B1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_0F8D6F97497796A94FCB6A8DF6B14BC6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_32AC6DFD4B53FB1267D47990AC36D514();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Nut_Alarm_Anim_BP_AnimGraphNode_TransitionResult_BD184D574E23B0DDA17D00A427B22C3F();
    void ExecuteUbergraph_Nut_Alarm_Anim_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
