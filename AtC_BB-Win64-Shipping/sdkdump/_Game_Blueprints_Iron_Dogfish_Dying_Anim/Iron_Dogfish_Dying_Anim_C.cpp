#include "..\FUObjectArray.hpp"
#include "Iron_Dogfish_Dying_Anim_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
void* _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::get_AnimGraphNode_Root_73DBFF3B4B1716D59931F6BD4B710404() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::get_AnimGraphNode_StateResult_41F876EC47F784B2D838509E1F842823() {
    return (void*)((uintptr_t)this + 0x5b8);
}
void* _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::get_AnimGraphNode_StateResult_3B62EB6442CBB3C34879BEB80A76AEC4() {
    return (void*)((uintptr_t)this + 0x500);
}
void* _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::get_AnimGraphNode_TransitionResult_90019AAC498713FB30C3AD94E7EF12B1() {
    return (void*)((uintptr_t)this + 0x410);
}
void* _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::get_AnimGraphNode_SequencePlayer_DE4A69C041D28AD50B2AF1A7C848C655() {
    return (void*)((uintptr_t)this + 0x548);
}
void* _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::get_AnimGraphNode_SequencePlayer_A90400004F58FCF75524B39078FCF4EE() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::get_AnimGraphNode_StateMachine_32A01C2341525EB463658383FE6B44FC() {
    return (void*)((uintptr_t)this + 0x600);
}
bool _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::get_Dead() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d8 + 0)) & 1 != 0;
}
void _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::set_Dead(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"AnimBlueprintGeneratedClass /Game/Blueprints/Iron_Dogfish_Dying_Anim.Iron_Dogfish_Dying_Anim_C");
    return result;
}
void _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Iron_Dogfish_Dying_Anim_AnimGraphNode_TransitionResult_90019AAC498713FB30C3AD94E7EF12B1() {
    return;
}
void _Game_Blueprints_Iron_Dogfish_Dying_Anim::Iron_Dogfish_Dying_Anim_C::ExecuteUbergraph_Iron_Dogfish_Dying_Anim(int32_t EntryPoint) {
    return;
}
