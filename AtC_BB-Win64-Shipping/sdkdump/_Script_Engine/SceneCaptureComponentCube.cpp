#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SceneCaptureComponent.hpp"
#include "SceneCaptureComponentCube.hpp"
#include "TextureRenderTargetCube.hpp"
_Script_Engine::TextureRenderTargetCube*& _Script_Engine::SceneCaptureComponentCube::get_TextureTarget() {
    return *(_Script_Engine::TextureRenderTargetCube**)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Script_Engine::SceneCaptureComponentCube::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCaptureComponentCube");
    return result;
}
void _Script_Engine::SceneCaptureComponentCube::CaptureScene() {
    return;
}
