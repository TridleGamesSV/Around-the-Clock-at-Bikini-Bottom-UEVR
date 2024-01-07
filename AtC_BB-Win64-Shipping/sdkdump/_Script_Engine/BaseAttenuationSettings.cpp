#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BaseAttenuationSettings.hpp"
float& _Script_Engine::BaseAttenuationSettings::get_FalloffDistance() {
    return *(float*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::BaseAttenuationSettings::get_DistanceAlgorithm() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BaseAttenuationSettings::get_AttenuationShape() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::BaseAttenuationSettings::get_CustomAttenuationCurve() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::BaseAttenuationSettings::get_dBAttenuationAtMax() {
    return *(float*)((uintptr_t)this + 0x8c);
}
void* _Script_Engine::BaseAttenuationSettings::get_AttenuationShapeExtents() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::BaseAttenuationSettings::get_ConeOffset() {
    return *(float*)((uintptr_t)this + 0x9c);
}
_Script_CoreUObject::Class* _Script_Engine::BaseAttenuationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BaseAttenuationSettings");
    return result;
}
