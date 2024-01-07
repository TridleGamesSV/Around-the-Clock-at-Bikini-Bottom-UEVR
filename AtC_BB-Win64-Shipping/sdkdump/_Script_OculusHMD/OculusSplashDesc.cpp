#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OculusSplashDesc.hpp"
void* _Script_OculusHMD::OculusSplashDesc::get_TextureOffset() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_OculusHMD::OculusSplashDesc::get_TexturePath() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OculusHMD::OculusSplashDesc::get_TransformInMeters() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_OculusHMD::OculusSplashDesc::get_QuadSizeInMeters() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_OculusHMD::OculusSplashDesc::get_DeltaRotation() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_OculusHMD::OculusSplashDesc::set_bNoAlphaChannel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_OculusHMD::OculusSplashDesc::get_TextureScale() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_OculusHMD::OculusSplashDesc::get_bNoAlphaChannel() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_OculusHMD::OculusSplashDesc::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OculusHMD.OculusSplashDesc");
    return result;
}
