#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Man_Ray_Anim_BP {
#pragma pack(push, 1)
struct Man_Ray_Anim_BP_C : public _Script_Engine::AnimInstance {
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_3DD77B0E4AEEEADFA45B2F9E9282C230();
    void* get_AnimGraphNode_TransitionResult_34FAF76040290B5B0AB0B9A0F0C6D6BF();
    void* get_AnimGraphNode_TransitionResult_47E6885E471309FEB632CF9790FA63F0();
    void* get_AnimGraphNode_TransitionResult_3FCD00DD47C08B15EC42B59A183D48E1();
    void* get_AnimGraphNode_TransitionResult_B6957C7C4F260DB57733A9B0F8F44E26();
    void* get_AnimGraphNode_TransitionResult_E7FBAE9A485D86011B5ACA9221AE6DDF();
    void* get_AnimGraphNode_TransitionResult_77E36FF54837C1DA38D86FB58307C5A5();
    void* get_AnimGraphNode_TransitionResult_DECCF7974B41CB3C406B32A556FAF22F();
    void* get_AnimGraphNode_TransitionResult_46FE57F940D7AF70B8DF9F83634969EF();
    void* get_AnimGraphNode_TransitionResult_AE1A951C4DD61AFC5D45B3A78EF4D6F1();
    void* get_AnimGraphNode_TransitionResult_E45CE15A41C5731C1183A58B2C72AE84();
    void* get_AnimGraphNode_TransitionResult_6C74E1B14C88818EEBE04B8101B92114();
    void* get_AnimGraphNode_TransitionResult_59260CB1483EC470B48FF2B1AAC23889();
    void* get_AnimGraphNode_TransitionResult_70FF2A9C4D4F5B78C081C889E3DDC7EC();
    void* get_AnimGraphNode_TransitionResult_E0BE2FCB4A14084AB96948A3A6963B75();
    void* get_AnimGraphNode_TransitionResult_18592A1F406CB3D07640068FBCC6FC26();
    void* get_AnimGraphNode_TransitionResult_BB51F9874FACDBEAC4A58FBFD3850450();
    void* get_AnimGraphNode_TransitionResult_457A5A3F4F89F9C0404F9091C51C0BBD();
    void* get_AnimGraphNode_TransitionResult_F60EEC0E4B4A1E9E46B1F7A6A10F8261();
    void* get_AnimGraphNode_TransitionResult_E732BEAF41F65AC8AB1F93B2234845C5();
    void* get_AnimGraphNode_TransitionResult_EA9D6DF3466DACDAB8D0889C6F871A39();
    void* get_AnimGraphNode_TransitionResult_017BE9D84962BE754C7E048F5D0BDC02();
    void* get_AnimGraphNode_TransitionResult_E316393543471E871C66888E1690C57B();
    void* get_AnimGraphNode_TransitionResult_FF66EA7648778B4FA6B7C9AF2C5BA426();
    void* get_AnimGraphNode_TransitionResult_292FE6F148D258DF8FA609BF922B3DC0();
    void* get_AnimGraphNode_TransitionResult_ABE13618460D0A1C30EA15A2ECF8A7F5();
    void* get_AnimGraphNode_SequencePlayer_40ABD57D4E2E64A140B3CABCF000DD5E();
    void* get_AnimGraphNode_StateResult_D7AB42014B24C9EE6436CCAD4F8C899B();
    void* get_AnimGraphNode_SequencePlayer_2635928D47AE79C5B0A0B7B239F1EEC4();
    void* get_AnimGraphNode_StateResult_49E7EA72409FEFC8E8F5E18B45933790();
    void* get_AnimGraphNode_SequencePlayer_0E1AC23F4B90B66FFAA2EF83C30C3434();
    void* get_AnimGraphNode_StateResult_92CEB1AE425BA58B4B470F8E987020F0();
    void* get_AnimGraphNode_SequencePlayer_8F691D7D4AE2FFF1E602CB8B048F65BE();
    void* get_AnimGraphNode_StateResult_6E29C17A4E087A4C27F1838AD3FF929A();
    void* get_AnimGraphNode_SequencePlayer_952630484CB187F9757261B0BD653EB5();
    void* get_AnimGraphNode_StateResult_AC5AD28B454F5234FE803EBF50A1818F();
    void* get_AnimGraphNode_SequencePlayer_B26305FF4AFD81319717969808BAF05D();
    void* get_AnimGraphNode_StateResult_1CC6575E40E8866B78E788AE25B3A35D();
    void* get_AnimGraphNode_SequencePlayer_8CB9B2304365B3D60B91428A97EE7254();
    void* get_AnimGraphNode_StateResult_7E97F02C4A389FD066508CB9BBC312B5();
    void* get_AnimGraphNode_SequencePlayer_00004E134D8845BC1248C39E1F159AC4();
    void* get_AnimGraphNode_StateResult_21C750EA40832019EE2E9FA80672A6A6();
    void* get_AnimGraphNode_SequencePlayer_592EA0E7480F6F5A1481EC8D464A7F92();
    void* get_AnimGraphNode_StateResult_C8A262654CDD57C467F71BBB4FCF33C0();
    void* get_AnimGraphNode_SequencePlayer_7068BD1547F3A88C5F2C09BD369ABB60();
    void* get_AnimGraphNode_StateResult_C39EE59847BD16EB8B1A28B7C9261285();
    void* get_AnimGraphNode_SequencePlayer_93F3DE184B0C46010A2CC1BD1A74FC68();
    void* get_AnimGraphNode_StateResult_825039CD465D76CF456BEBA0CED0C3AC();
    void* get_AnimGraphNode_StateMachine_255FC0BB47DDC74A4D6B83808882C0EE();
    bool get_Idle();
    void set_Idle(bool value);
    bool get_Freeze();
    void set_Freeze(bool value);
    bool get_Heat();
    void set_Heat(bool value);
    bool get_Vulnerable();
    void set_Vulnerable(bool value);
    bool get_Change();
    void set_Change(bool value);
    bool get_Counter_1();
    void set_Counter_1(bool value);
    bool get_Counter_2();
    void set_Counter_2(bool value);
    bool get_Counter_3();
    void set_Counter_3(bool value);
    bool get_Counter_Hit();
    void set_Counter_Hit(bool value);
    bool get_Defeated();
    void set_Defeated(bool value);
    bool get_Recover();
    void set_Recover(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_E45CE15A41C5731C1183A58B2C72AE84();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_6C74E1B14C88818EEBE04B8101B92114();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_AE1A951C4DD61AFC5D45B3A78EF4D6F1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_59260CB1483EC470B48FF2B1AAC23889();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_70FF2A9C4D4F5B78C081C889E3DDC7EC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_E0BE2FCB4A14084AB96948A3A6963B75();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_46FE57F940D7AF70B8DF9F83634969EF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_18592A1F406CB3D07640068FBCC6FC26();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_BB51F9874FACDBEAC4A58FBFD3850450();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_457A5A3F4F89F9C0404F9091C51C0BBD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_DECCF7974B41CB3C406B32A556FAF22F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_F60EEC0E4B4A1E9E46B1F7A6A10F8261();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_E732BEAF41F65AC8AB1F93B2234845C5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_EA9D6DF3466DACDAB8D0889C6F871A39();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_77E36FF54837C1DA38D86FB58307C5A5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_017BE9D84962BE754C7E048F5D0BDC02();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_E316393543471E871C66888E1690C57B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_FF66EA7648778B4FA6B7C9AF2C5BA426();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_E7FBAE9A485D86011B5ACA9221AE6DDF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_292FE6F148D258DF8FA609BF922B3DC0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_ABE13618460D0A1C30EA15A2ECF8A7F5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_B6957C7C4F260DB57733A9B0F8F44E26();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_3FCD00DD47C08B15EC42B59A183D48E1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_47E6885E471309FEB632CF9790FA63F0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Man_Ray_Anim_BP_AnimGraphNode_TransitionResult_34FAF76040290B5B0AB0B9A0F0C6D6BF();
    void ExecuteUbergraph_Man_Ray_Anim_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
