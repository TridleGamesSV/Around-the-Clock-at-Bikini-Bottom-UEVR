#include "..\FUObjectArray.hpp"
#include "RBFParams.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::RBFParams::get_Function() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_AnimGraphRuntime::RBFParams::get_TargetDimensions() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::RBFParams::get_DistanceMethod() {
    return (void*)((uintptr_t)this + 0x9);
}
float& _Script_AnimGraphRuntime::RBFParams::get_Radius() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AnimGraphRuntime::RBFParams::get_WeightThreshold() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_AnimGraphRuntime::RBFParams::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0xa);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::RBFParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.RBFParams");
    return result;
}
