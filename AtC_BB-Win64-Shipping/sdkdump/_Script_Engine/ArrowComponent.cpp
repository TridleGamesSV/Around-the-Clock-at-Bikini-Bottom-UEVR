#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "ArrowComponent.hpp"
#include "PrimitiveComponent.hpp"
void* _Script_Engine::ArrowComponent::get_ArrowColor() {
    return (void*)((uintptr_t)this + 0x660);
}
bool _Script_Engine::ArrowComponent::get_bTreatAsASprite() {
    return (*(uint8_t*)((uintptr_t)this + 0x670 + 0)) & 1 != 0;
}
void _Script_Engine::ArrowComponent::SetArrowColor(_Script_CoreUObject::LinearColor NewColor) {
    return;
}
bool _Script_Engine::ArrowComponent::get_bIsScreenSizeScaled() {
    return (*(uint8_t*)((uintptr_t)this + 0x668 + 0)) & 1 != 0;
}
float& _Script_Engine::ArrowComponent::get_ArrowSize() {
    return *(float*)((uintptr_t)this + 0x664);
}
float& _Script_Engine::ArrowComponent::get_ScreenSize() {
    return *(float*)((uintptr_t)this + 0x66c);
}
void _Script_Engine::ArrowComponent::set_bIsScreenSizeScaled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x668 + 0);
    *(uint8_t*)((uintptr_t)this + 0x668 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ArrowComponent::set_bTreatAsASprite(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x670 + 0);
    *(uint8_t*)((uintptr_t)this + 0x670 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ArrowComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ArrowComponent");
    return result;
}
