#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DropTimecode.hpp"
int32_t& _Script_LinearTimecode::DropTimecode::get_Minutes() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_LinearTimecode::DropTimecode::get_Hours() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_LinearTimecode::DropTimecode::get_Seconds() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_LinearTimecode::DropTimecode::get_Frame() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_LinearTimecode::DropTimecode::get_Drop() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_LinearTimecode::DropTimecode::get_Clock() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_LinearTimecode::DropTimecode::get_FrameRate() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_LinearTimecode::DropTimecode::get_Color() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_LinearTimecode::DropTimecode::get_Forward() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_LinearTimecode::DropTimecode::get_NewFrame() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_LinearTimecode::DropTimecode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LinearTimecode.DropTimecode");
    return result;
}
