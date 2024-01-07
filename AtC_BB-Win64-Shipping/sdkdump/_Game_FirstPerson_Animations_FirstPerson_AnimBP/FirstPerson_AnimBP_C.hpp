#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_FirstPerson_Animations_FirstPerson_AnimBP {
#pragma pack(push, 1)
struct FirstPerson_AnimBP_C : public _Script_Engine::AnimInstance {
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_1DF598784F4A087A4ED10A805C775AC8();
    void* get_AnimGraphNode_TransitionResult_4131F91E42FDB54FF5DD91A066AB1DA9();
    void* get_AnimGraphNode_TransitionResult_BE4969EC42DCCA83F5840886A21837B4();
    void* get_AnimGraphNode_TransitionResult_347C8B8C492E53C47E4920936AD839BB();
    void* get_AnimGraphNode_TransitionResult_854B9544452B2F8E3F881F9BE08BECF2();
    void* get_AnimGraphNode_TransitionResult_8A01D6CF4F0B0F51FE4CA5A764B5EEC3();
    void* get_AnimGraphNode_TransitionResult_0B7A998B4BE23AA1BB491A8285E0A9B8();
    void* get_AnimGraphNode_TransitionResult_11CEF6874DD32F1F65F466A685EEFC5C();
    void* get_AnimGraphNode_TransitionResult_0689E4004D4C712938DD7488256EB31F();
    void* get_AnimGraphNode_TransitionResult_90E5425A44147384EC5E4A91CC9FFFEB();
    void* get_AnimGraphNode_TransitionResult_B688CDA6475D20A3DFFEA6A50825A3D9();
    void* get_AnimGraphNode_TransitionResult_06C05A2D4666E0C77F9BCE94EF1321F6();
    void* get_AnimGraphNode_TransitionResult_1F5339874DA943C4AD23AC9AADE27D13();
    void* get_AnimGraphNode_TransitionResult_DF5EA38F40899E6FA34A95A078F6AC7B();
    void* get_AnimGraphNode_TransitionResult_B368400946B18E8B82462BA54F4BB849();
    void* get_AnimGraphNode_TransitionResult_FD08A51A4E3E4A767C7ED6B9E0A8B8C8();
    void* get_AnimGraphNode_TransitionResult_B15D7EAA46138A38EAF1CCAD3110ACB7();
    void* get_AnimGraphNode_TransitionResult_48D99FDB45417C13E36EACAAE42B170C();
    void* get_AnimGraphNode_TransitionResult_B5DDFA79429FC4BF1C4F8CBB70238C6C();
    void* get_AnimGraphNode_TransitionResult_85199580474F789AFD86E6AC6C7A37B8();
    void* get_AnimGraphNode_SequencePlayer_38A55DA344DCC3FCED54EE8117794F36();
    void* get_AnimGraphNode_StateResult_79C4E0564AFA09F6C9C2179F97811C99();
    void* get_AnimGraphNode_SequencePlayer_BC6877544D23F52BA12F8183BEFADC6A();
    void* get_AnimGraphNode_StateResult_681C03FC442920720F1AC58EF60387D5();
    void* get_AnimGraphNode_SequencePlayer_534FA3BA40E6E981D0A241BA056755B2();
    void* get_AnimGraphNode_StateResult_4E2FE0E544D0FA315E025D8ED35D9EC4();
    void* get_AnimGraphNode_SequencePlayer_6185C6CD492FBBA77199998F8E64BA49();
    void* get_AnimGraphNode_StateResult_22EFEF3344C16D03398133927FDEB383();
    void* get_AnimGraphNode_SequencePlayer_C6641E0144D1F470927AA89C762FE920();
    void* get_AnimGraphNode_StateResult_7193846E40FEA5A17832388CFB6D5ECA();
    void* get_AnimGraphNode_SequencePlayer_BFF64F4B46D7BCDA664E36A93E4AC4AA();
    void* get_AnimGraphNode_StateResult_DEFCC83E421E50B38F25819E1EB93A5B();
    void* get_AnimGraphNode_SequencePlayer_4869ECD8456855570F8CB5A7ECB06A59();
    void* get_AnimGraphNode_StateResult_ADB52C394181B8382543E7B06CC0E78F();
    void* get_AnimGraphNode_StateMachine_885684DE4B0E2CE3646364873E1871B5();
    void* get_AnimGraphNode_Slot_3BF6EDDF4D71635E122E509C22B58E95();
    bool get_IsMoving();
    void set_IsMoving(bool value);
    bool get_bIsInAir();
    void set_bIsInAir(bool value);
    bool get_Idle();
    void set_Idle(bool value);
    bool get_Walking();
    void set_Walking(bool value);
    bool get_Running();
    void set_Running(bool value);
    bool get_Crouching();
    void set_Crouching(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_90E5425A44147384EC5E4A91CC9FFFEB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_0B7A998B4BE23AA1BB491A8285E0A9B8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B688CDA6475D20A3DFFEA6A50825A3D9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_06C05A2D4666E0C77F9BCE94EF1321F6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_1F5339874DA943C4AD23AC9AADE27D13();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_8A01D6CF4F0B0F51FE4CA5A764B5EEC3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_DF5EA38F40899E6FA34A95A078F6AC7B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B368400946B18E8B82462BA54F4BB849();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_0689E4004D4C712938DD7488256EB31F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_FD08A51A4E3E4A767C7ED6B9E0A8B8C8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_854B9544452B2F8E3F881F9BE08BECF2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B15D7EAA46138A38EAF1CCAD3110ACB7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_48D99FDB45417C13E36EACAAE42B170C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B5DDFA79429FC4BF1C4F8CBB70238C6C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_347C8B8C492E53C47E4920936AD839BB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_85199580474F789AFD86E6AC6C7A37B8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_BE4969EC42DCCA83F5840886A21837B4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_4131F91E42FDB54FF5DD91A066AB1DA9();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_11CEF6874DD32F1F65F466A685EEFC5C();
    void AnimNotify_Footstep();
    void ExecuteUbergraph_FirstPerson_AnimBP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
