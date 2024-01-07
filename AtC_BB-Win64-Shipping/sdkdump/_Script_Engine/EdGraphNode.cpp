#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "EdGraphNode.hpp"
void* _Script_Engine::EdGraphNode::get_DeprecatedPins() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Engine::EdGraphNode::get_NodePosX() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::EdGraphNode::get_EnabledState() {
    return (void*)((uintptr_t)this + 0x59);
}
int32_t& _Script_Engine::EdGraphNode::get_NodePosY() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
bool _Script_Engine::EdGraphNode::get_bUserSetEnabledState() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 1 != 0;
}
int32_t& _Script_Engine::EdGraphNode::get_NodeWidth() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Engine::EdGraphNode::get_NodeHeight() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::EdGraphNode::get_AdvancedPinDisplay() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::EdGraphNode::get_NodeComment() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_Engine::EdGraphNode::set_bUserSetEnabledState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::EdGraphNode::get_bIsNodeEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 4 != 0;
}
void _Script_Engine::EdGraphNode::set_bIsNodeEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::EdGraphNode::set_bCommentBubbleVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::EdGraphNode::get_bHasCompilerMessage() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 16 != 0;
}
void _Script_Engine::EdGraphNode::set_bHasCompilerMessage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::EdGraphNode::get_bCommentBubblePinned() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 32 != 0;
}
void _Script_Engine::EdGraphNode::set_bCommentBubblePinned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::EdGraphNode::get_NodeGuid() {
    return (void*)((uintptr_t)this + 0x88);
}
bool _Script_Engine::EdGraphNode::get_bCommentBubbleVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 64 != 0;
}
bool _Script_Engine::EdGraphNode::get_bCommentBubbleMakeVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b + 0)) & 128 != 0;
}
void _Script_Engine::EdGraphNode::set_bCommentBubbleMakeVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
int32_t& _Script_Engine::EdGraphNode::get_ErrorType() {
    return *(int32_t*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::EdGraphNode::get_ErrorMsg() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::EdGraphNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.EdGraphNode");
    return result;
}
