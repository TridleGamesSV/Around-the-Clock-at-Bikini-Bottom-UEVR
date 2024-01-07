#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "MediaPlaneParameters.hpp"
void* _Script_MediaCompositing::MediaPlaneParameters::get_TextureParameterName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::MaterialInterface*& _Script_MediaCompositing::MediaPlaneParameters::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x0);
}
void* _Script_MediaCompositing::MediaPlaneParameters::get_FixedSize() {
    return (void*)((uintptr_t)this + 0x1c);
}
bool _Script_MediaCompositing::MediaPlaneParameters::get_bFillScreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_MediaCompositing::MediaPlaneParameters::set_bFillScreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MediaCompositing::MediaPlaneParameters::get_FillScreenAmount() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_MediaCompositing::MediaPlaneParameters::get_DynamicMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x30);
}
_Script_Engine::Texture*& _Script_MediaCompositing::MediaPlaneParameters::get_RenderTexture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x28);
}
_Script_Engine::Texture*& _Script_MediaCompositing::MediaPlaneParameters::get_MediaTexture() {
    return *(_Script_Engine::Texture**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MediaPlaneParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaCompositing.MediaPlaneParameters");
    return result;
}
