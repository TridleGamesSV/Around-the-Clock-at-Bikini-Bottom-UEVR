#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Prawn_Anim_BP {
#pragma pack(push, 1)
struct Prawn_Anim_BP_C : public _Script_Engine::AnimInstance {
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_267173944EB38C5A1FA08BBD6F6AE8DD();
    void* get_AnimGraphNode_TransitionResult_04019D3D47E6E43367479F9B3A1C2D89();
    void* get_AnimGraphNode_TransitionResult_B7F763C2471248B3109816B9D0F1AF2A();
    void* get_AnimGraphNode_TransitionResult_A7D8C76D45ACB3C9790778B21C577AFE();
    void* get_AnimGraphNode_TransitionResult_AD8336D142AFC375912A968B55144645();
    void* get_AnimGraphNode_TransitionResult_ACD154004D632070A7452EA59C918D36();
    void* get_AnimGraphNode_TransitionResult_535FA8CC4BCCB3A139954A94D593D6FC();
    void* get_AnimGraphNode_SequencePlayer_68B4A4A24F7F279B3984569F4FB9EFFE();
    void* get_AnimGraphNode_StateResult_F5230FF344A481F35B3A12B55130BB4E();
    void* get_AnimGraphNode_SequencePlayer_0AE002F540F4219079B18DABA76242C2();
    void* get_AnimGraphNode_StateResult_77363DA245152058C4BC9EBF4021790E();
    void* get_AnimGraphNode_SequencePlayer_F70CA3144FDFEEAF5161939253857850();
    void* get_AnimGraphNode_StateResult_79553E104F6B595501F574B664631103();
    void* get_AnimGraphNode_SequencePlayer_FC67E34547BFCAF33764AB90487E4A9D();
    void* get_AnimGraphNode_StateResult_A3A43651421103605E080DB30EE53FCD();
    void* get_AnimGraphNode_SequencePlayer_6CE05DAD40AB05AA77D748966E540443();
    void* get_AnimGraphNode_StateResult_D16C099043F2F27A5F231FB86169678A();
    void* get_AnimGraphNode_SequencePlayer_695F440D45519079E694608BAC8B4E47();
    void* get_AnimGraphNode_StateResult_32BE376F49183DF3EE67118A41BB17B0();
    void* get_AnimGraphNode_StateMachine_42FC35364C2210C4ABF744A2D6B9DB61();
    bool get_Idle();
    void set_Idle(bool value);
    bool get_Sonic_In();
    void set_Sonic_In(bool value);
    bool get_Sonic_Loop();
    void set_Sonic_Loop(bool value);
    bool get_Sonic_Vulnerable();
    void set_Sonic_Vulnerable(bool value);
    bool get_Sonic_Hit();
    void set_Sonic_Hit(bool value);
    bool get_Defeated();
    void set_Defeated(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Prawn_Anim_BP_AnimGraphNode_TransitionResult_AD8336D142AFC375912A968B55144645();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Prawn_Anim_BP_AnimGraphNode_TransitionResult_ACD154004D632070A7452EA59C918D36();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Prawn_Anim_BP_AnimGraphNode_TransitionResult_A7D8C76D45ACB3C9790778B21C577AFE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Prawn_Anim_BP_AnimGraphNode_TransitionResult_535FA8CC4BCCB3A139954A94D593D6FC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Prawn_Anim_BP_AnimGraphNode_TransitionResult_B7F763C2471248B3109816B9D0F1AF2A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Prawn_Anim_BP_AnimGraphNode_TransitionResult_04019D3D47E6E43367479F9B3A1C2D89();
    void ExecuteUbergraph_Prawn_Anim_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
