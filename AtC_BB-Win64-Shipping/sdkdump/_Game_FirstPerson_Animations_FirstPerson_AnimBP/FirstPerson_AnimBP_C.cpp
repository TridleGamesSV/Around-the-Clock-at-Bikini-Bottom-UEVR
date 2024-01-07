#include "..\FUObjectArray.hpp"
#include "FirstPerson_AnimBP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::set_bIsInAir(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13d9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x13d9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_Root_1DF598784F4A087A4ED10A805C775AC8() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_8A01D6CF4F0B0F51FE4CA5A764B5EEC3() {
    return (void*)((uintptr_t)this + 0x610);
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_854B9544452B2F8E3F881F9BE08BECF2() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::set_Walking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13db + 0);
    *(uint8_t*)((uintptr_t)this + 0x13db + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_854B9544452B2F8E3F881F9BE08BECF2() {
    return (void*)((uintptr_t)this + 0x590);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_347C8B8C492E53C47E4920936AD839BB() {
    return (void*)((uintptr_t)this + 0x510);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_B368400946B18E8B82462BA54F4BB849() {
    return (void*)((uintptr_t)this + 0xa90);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_4131F91E42FDB54FF5DD91A066AB1DA9() {
    return (void*)((uintptr_t)this + 0x410);
}
bool _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_IsMoving() {
    return (*(uint8_t*)((uintptr_t)this + 0x13d8 + 0)) & 1 != 0;
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_BE4969EC42DCCA83F5840886A21837B4() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_0B7A998B4BE23AA1BB491A8285E0A9B8() {
    return (void*)((uintptr_t)this + 0x690);
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::ExecuteUbergraph_FirstPerson_AnimBP(int32_t EntryPoint) {
    return;
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_11CEF6874DD32F1F65F466A685EEFC5C() {
    return (void*)((uintptr_t)this + 0x710);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_0689E4004D4C712938DD7488256EB31F() {
    return (void*)((uintptr_t)this + 0x790);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_90E5425A44147384EC5E4A91CC9FFFEB() {
    return (void*)((uintptr_t)this + 0x810);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_StateResult_4E2FE0E544D0FA315E025D8ED35D9EC4() {
    return (void*)((uintptr_t)this + 0xf70);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_B688CDA6475D20A3DFFEA6A50825A3D9() {
    return (void*)((uintptr_t)this + 0x890);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_06C05A2D4666E0C77F9BCE94EF1321F6() {
    return (void*)((uintptr_t)this + 0x910);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_1F5339874DA943C4AD23AC9AADE27D13() {
    return (void*)((uintptr_t)this + 0x990);
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_0B7A998B4BE23AA1BB491A8285E0A9B8() {
    return;
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_DF5EA38F40899E6FA34A95A078F6AC7B() {
    return (void*)((uintptr_t)this + 0xa10);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_FD08A51A4E3E4A767C7ED6B9E0A8B8C8() {
    return (void*)((uintptr_t)this + 0xb10);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_SequencePlayer_38A55DA344DCC3FCED54EE8117794F36() {
    return (void*)((uintptr_t)this + 0xd90);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_B15D7EAA46138A38EAF1CCAD3110ACB7() {
    return (void*)((uintptr_t)this + 0xb90);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_48D99FDB45417C13E36EACAAE42B170C() {
    return (void*)((uintptr_t)this + 0xc10);
}
bool _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_Idle() {
    return (*(uint8_t*)((uintptr_t)this + 0x13da + 0)) & 1 != 0;
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_B5DDFA79429FC4BF1C4F8CBB70238C6C() {
    return (void*)((uintptr_t)this + 0xc90);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_TransitionResult_85199580474F789AFD86E6AC6C7A37B8() {
    return (void*)((uintptr_t)this + 0xd10);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_StateResult_79C4E0564AFA09F6C9C2179F97811C99() {
    return (void*)((uintptr_t)this + 0xe00);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_SequencePlayer_BC6877544D23F52BA12F8183BEFADC6A() {
    return (void*)((uintptr_t)this + 0xe48);
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B688CDA6475D20A3DFFEA6A50825A3D9() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_90E5425A44147384EC5E4A91CC9FFFEB() {
    return;
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_StateResult_681C03FC442920720F1AC58EF60387D5() {
    return (void*)((uintptr_t)this + 0xeb8);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_SequencePlayer_534FA3BA40E6E981D0A241BA056755B2() {
    return (void*)((uintptr_t)this + 0xf00);
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_48D99FDB45417C13E36EACAAE42B170C() {
    return;
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_SequencePlayer_6185C6CD492FBBA77199998F8E64BA49() {
    return (void*)((uintptr_t)this + 0xfb8);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_StateResult_22EFEF3344C16D03398133927FDEB383() {
    return (void*)((uintptr_t)this + 0x1028);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_SequencePlayer_C6641E0144D1F470927AA89C762FE920() {
    return (void*)((uintptr_t)this + 0x1070);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_StateResult_7193846E40FEA5A17832388CFB6D5ECA() {
    return (void*)((uintptr_t)this + 0x10e0);
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_DF5EA38F40899E6FA34A95A078F6AC7B() {
    return;
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_StateResult_ADB52C394181B8382543E7B06CC0E78F() {
    return (void*)((uintptr_t)this + 0x1250);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_SequencePlayer_BFF64F4B46D7BCDA664E36A93E4AC4AA() {
    return (void*)((uintptr_t)this + 0x1128);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_StateResult_DEFCC83E421E50B38F25819E1EB93A5B() {
    return (void*)((uintptr_t)this + 0x1198);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_SequencePlayer_4869ECD8456855570F8CB5A7ECB06A59() {
    return (void*)((uintptr_t)this + 0x11e0);
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::BlueprintUpdateAnimation0(float DeltaTimeX) {
    return;
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_StateMachine_885684DE4B0E2CE3646364873E1871B5() {
    return (void*)((uintptr_t)this + 0x1298);
}
void* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_AnimGraphNode_Slot_3BF6EDDF4D71635E122E509C22B58E95() {
    return (void*)((uintptr_t)this + 0x1370);
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::set_IsMoving(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x13d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::set_Crouching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13dd + 0);
    *(uint8_t*)((uintptr_t)this + 0x13dd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_bIsInAir() {
    return (*(uint8_t*)((uintptr_t)this + 0x13d9 + 0)) & 1 != 0;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::set_Idle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13da + 0);
    *(uint8_t*)((uintptr_t)this + 0x13da + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_Walking() {
    return (*(uint8_t*)((uintptr_t)this + 0x13db + 0)) & 1 != 0;
}
bool _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_Running() {
    return (*(uint8_t*)((uintptr_t)this + 0x13dc + 0)) & 1 != 0;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::set_Running(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x13dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::get_Crouching() {
    return (*(uint8_t*)((uintptr_t)this + 0x13dd + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/FirstPerson/Animations/FirstPerson_AnimBP.FirstPerson_AnimBP_C");
    return result;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_06C05A2D4666E0C77F9BCE94EF1321F6() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_1F5339874DA943C4AD23AC9AADE27D13() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_8A01D6CF4F0B0F51FE4CA5A764B5EEC3() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B368400946B18E8B82462BA54F4BB849() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_0689E4004D4C712938DD7488256EB31F() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_FD08A51A4E3E4A767C7ED6B9E0A8B8C8() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B15D7EAA46138A38EAF1CCAD3110ACB7() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_B5DDFA79429FC4BF1C4F8CBB70238C6C() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_347C8B8C492E53C47E4920936AD839BB() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_85199580474F789AFD86E6AC6C7A37B8() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_BE4969EC42DCCA83F5840886A21837B4() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_4131F91E42FDB54FF5DD91A066AB1DA9() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FirstPerson_AnimBP_AnimGraphNode_TransitionResult_11CEF6874DD32F1F65F466A685EEFC5C() {
    return;
}
void _Game_FirstPerson_Animations_FirstPerson_AnimBP::FirstPerson_AnimBP_C::AnimNotify_Footstep() {
    return;
}
