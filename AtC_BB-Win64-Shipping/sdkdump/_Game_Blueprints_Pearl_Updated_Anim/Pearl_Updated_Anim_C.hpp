#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Pearl_Updated_Anim {
#pragma pack(push, 1)
struct Pearl_Updated_Anim_C : public _Script_Engine::AnimInstance {
    void* get_UberGraphFrame();
    void* get_AnimGraphNode_Root_9AC295584AD5559196A7CD9D5722AC2A();
    void* get_AnimGraphNode_TransitionResult_AA4D0EC84964375FE2B52B857B18CFA4();
    void* get_AnimGraphNode_TransitionResult_0EB3DA574D2C489D2437EC8EE5AA6E56();
    void* get_AnimGraphNode_TransitionResult_97DDC4B3414A47385A14D891F16941CF();
    void* get_AnimGraphNode_TransitionResult_51167C0D468C84F2F44756913BBAFD1F();
    void* get_AnimGraphNode_TransitionResult_A890A18140573CDD2511368C125A40BD();
    void* get_AnimGraphNode_TransitionResult_BD90BEA9464098699BEB24AF9B89D35A();
    void* get_AnimGraphNode_TransitionResult_B5A9A843428122DF8DE661B36CBBF464();
    void* get_AnimGraphNode_TransitionResult_20577D3E43AF54B48A1FF99FF0B9AF09();
    void* get_AnimGraphNode_TransitionResult_5AA14DB446AEFC25E0223FA074D3F42F();
    void* get_AnimGraphNode_TransitionResult_BF974AB94090B01FEBA1E0891749E92F();
    void* get_AnimGraphNode_TransitionResult_A163E73C4FE18CF3F897F98E0A9BE622();
    void* get_AnimGraphNode_TransitionResult_68CE534949B1AD8C026E04BED9BD221E();
    void* get_AnimGraphNode_TransitionResult_B170B6654DB171A3EE91E9880F9BDD57();
    void* get_AnimGraphNode_TransitionResult_4353032A4BC8B6EC6D929E8E524D9865();
    void* get_AnimGraphNode_TransitionResult_0D014D0B4454A2AC83FBDFAA3A8BD710();
    void* get_AnimGraphNode_TransitionResult_F500A96B4A53889F16B3F6B86A753147();
    void* get_AnimGraphNode_SequencePlayer_BB43ADA142414CF330CE669786A111F5();
    void* get_AnimGraphNode_StateResult_A7A531B94767F4B16560B3AFE0900011();
    void* get_AnimGraphNode_SequencePlayer_95CE0AB743F77220C6160EA6FF5F94F8();
    void* get_AnimGraphNode_StateResult_1C4F22DE442BE800E0AE3FBD165EBBDD();
    void* get_AnimGraphNode_SequencePlayer_465543544220CFABC3BE709A03CCA3AC();
    void* get_AnimGraphNode_StateResult_D55BD4224C9F5D49DDD2ADA82A22C645();
    void* get_AnimGraphNode_SequencePlayer_CEE63B764D043957241A1A9AF5695CEA();
    void* get_AnimGraphNode_StateResult_31AF04B9454FDC38CE8385931B9FA2B2();
    void* get_AnimGraphNode_SequencePlayer_9DBB18AF41B4703E05C269B7DBE32A83();
    void* get_AnimGraphNode_StateResult_CF55F95148F81A958E41A1BB808A7493();
    void* get_AnimGraphNode_StateMachine_063A26EE4103CEC909162793DCB4837C();
    bool get_Idle();
    void set_Idle(bool value);
    bool get_Walk();
    void set_Walk(bool value);
    bool get_Searching_Awake();
    void set_Searching_Awake(bool value);
    bool get_Run_Awake();
    void set_Run_Awake(bool value);
    bool get_Jumpscare();
    void set_Jumpscare(bool value);
    static _Script_CoreUObject::Class* static_class();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_BD90BEA9464098699BEB24AF9B89D35A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_B5A9A843428122DF8DE661B36CBBF464();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_20577D3E43AF54B48A1FF99FF0B9AF09();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_A890A18140573CDD2511368C125A40BD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_5AA14DB446AEFC25E0223FA074D3F42F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_BF974AB94090B01FEBA1E0891749E92F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_A163E73C4FE18CF3F897F98E0A9BE622();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_51167C0D468C84F2F44756913BBAFD1F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_68CE534949B1AD8C026E04BED9BD221E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_B170B6654DB171A3EE91E9880F9BDD57();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_4353032A4BC8B6EC6D929E8E524D9865();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_97DDC4B3414A47385A14D891F16941CF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_0D014D0B4454A2AC83FBDFAA3A8BD710();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_F500A96B4A53889F16B3F6B86A753147();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_0EB3DA574D2C489D2437EC8EE5AA6E56();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_Pearl_Updated_Anim_AnimGraphNode_TransitionResult_AA4D0EC84964375FE2B52B857B18CFA4();
    void ExecuteUbergraph_Pearl_Updated_Anim(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
