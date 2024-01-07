#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_TwistCorrectiveNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_RemappedMax() {
    return *(float*)((uintptr_t)this + 0xd8);
}
float& _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_RangeMax() {
    return *(float*)((uintptr_t)this + 0xd0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_BaseFrame() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_Curve() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_TwistFrame() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_TwistPlaneNormalAxis() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_RemappedMin() {
    return *(float*)((uintptr_t)this + 0xd4);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode");
    return result;
}
