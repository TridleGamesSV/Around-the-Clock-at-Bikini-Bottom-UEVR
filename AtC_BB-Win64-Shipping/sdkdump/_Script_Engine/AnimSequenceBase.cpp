#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequenceBase.hpp"
#include "AnimationAsset.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimSequenceBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimSequenceBase");
    return result;
}
void* _Script_Engine::AnimSequenceBase::get_Notifies() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Script_Engine::AnimSequenceBase::get_SequenceLength() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_Engine::AnimSequenceBase::get_RateScale() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float _Script_Engine::AnimSequenceBase::GetPlayLength() {
    return;
}
void* _Script_Engine::AnimSequenceBase::get_RawCurveData() {
    return (void*)((uintptr_t)this + 0x90);
}
