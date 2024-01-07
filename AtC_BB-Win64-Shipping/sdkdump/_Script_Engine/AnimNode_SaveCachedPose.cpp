#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_Base.hpp"
#include "AnimNode_SaveCachedPose.hpp"
void* _Script_Engine::AnimNode_SaveCachedPose::get_Pose() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_SaveCachedPose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_SaveCachedPose");
    return result;
}
void* _Script_Engine::AnimNode_SaveCachedPose::get_CachePoseName() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::AnimNode_SaveCachedPose::get_GlobalWeight() {
    return *(float*)((uintptr_t)this + 0x50);
}
