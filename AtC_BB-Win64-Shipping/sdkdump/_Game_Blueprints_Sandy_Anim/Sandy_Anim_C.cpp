#include "..\FUObjectArray.hpp"
#include "Sandy_Anim_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
void* _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::get_AnimGraphNode_SequencePlayer_050988C44D6E542C54CDAF90D4DF526C() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::get_AnimGraphNode_SequencePlayer_867F7BE749EE38AD79BCB382CE69D9FA() {
    return (void*)((uintptr_t)this + 0x548);
}
void* _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::get_AnimGraphNode_Root_50BDB9594B3832F020648EAB23F343B1() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::get_AnimGraphNode_TransitionResult_EC3EDB854944AA0127B63F83574F980C() {
    return (void*)((uintptr_t)this + 0x410);
}
void* _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::get_AnimGraphNode_StateMachine_2AC00DF7450EF2D681CD769A8AE1CD30() {
    return (void*)((uintptr_t)this + 0x600);
}
void* _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::get_AnimGraphNode_StateResult_04DAB7744F996BCF188D9AB27C4E11B6() {
    return (void*)((uintptr_t)this + 0x500);
}
void* _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::get_AnimGraphNode_StateResult_B6DE4B344EC4DA85CC4344B3CA0643D8() {
    return (void*)((uintptr_t)this + 0x5b8);
}
bool _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::get_Jumpscare() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d8 + 0)) & 1 != 0;
}
void _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::set_Jumpscare(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Blueprints/Sandy_Anim.Sandy_Anim_C");
    return result;
}
void _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Sandy_Anim_AnimGraphNode_TransitionResult_EC3EDB854944AA0127B63F83574F980C() {
    return;
}
void _Game_Blueprints_Sandy_Anim::Sandy_Anim_C::ExecuteUbergraph_Sandy_Anim(int32_t EntryPoint) {
    return;
}
