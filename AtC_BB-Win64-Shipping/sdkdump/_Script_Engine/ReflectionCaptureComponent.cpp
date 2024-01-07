#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BillboardComponent.hpp"
#include "ReflectionCaptureComponent.hpp"
#include "SceneComponent.hpp"
#include "TextureCube.hpp"
void* _Script_Engine::ReflectionCaptureComponent::get_ReflectionSourceType() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_Engine::BillboardComponent*& _Script_Engine::ReflectionCaptureComponent::get_CaptureOffsetComponent() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Script_Engine::ReflectionCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ReflectionCaptureComponent");
    return result;
}
_Script_Engine::TextureCube*& _Script_Engine::ReflectionCaptureComponent::get_Cubemap() {
    return *(_Script_Engine::TextureCube**)((uintptr_t)this + 0x2a0);
}
float& _Script_Engine::ReflectionCaptureComponent::get_SourceCubemapAngle() {
    return *(float*)((uintptr_t)this + 0x2a8);
}
float& _Script_Engine::ReflectionCaptureComponent::get_Brightness() {
    return *(float*)((uintptr_t)this + 0x2ac);
}
void* _Script_Engine::ReflectionCaptureComponent::get_CaptureOffset() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_Engine::ReflectionCaptureComponent::get_MapBuildDataId() {
    return (void*)((uintptr_t)this + 0x2bc);
}
