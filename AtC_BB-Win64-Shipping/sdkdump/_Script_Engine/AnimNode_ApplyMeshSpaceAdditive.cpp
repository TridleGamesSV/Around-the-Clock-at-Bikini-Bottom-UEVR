#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_ApplyMeshSpaceAdditive.hpp"
#include "AnimNode_Base.hpp"
int32_t& _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_Base() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_ApplyMeshSpaceAdditive");
    return result;
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_Additive() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::AnimNode_ApplyMeshSpaceAdditive::get_ActualAlpha() {
    return *(float*)((uintptr_t)this + 0x70);
}
