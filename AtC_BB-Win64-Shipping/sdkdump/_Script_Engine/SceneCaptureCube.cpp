#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DrawFrustumComponent.hpp"
#include "SceneCapture.hpp"
#include "SceneCaptureComponentCube.hpp"
#include "SceneCaptureCube.hpp"
void _Script_Engine::SceneCaptureCube::OnInterpToggle(bool bEnable) {
    return;
}
_Script_Engine::SceneCaptureComponentCube*& _Script_Engine::SceneCaptureCube::get_CaptureComponentCube() {
    return *(_Script_Engine::SceneCaptureComponentCube**)((uintptr_t)this + 0x320);
}
_Script_Engine::DrawFrustumComponent*& _Script_Engine::SceneCaptureCube::get_DrawFrustum() {
    return *(_Script_Engine::DrawFrustumComponent**)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Script_Engine::SceneCaptureCube::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCaptureCube");
    return result;
}
