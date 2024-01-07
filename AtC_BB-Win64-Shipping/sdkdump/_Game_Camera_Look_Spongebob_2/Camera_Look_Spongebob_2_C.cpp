#include "..\FUObjectArray.hpp"
#include "Camera_Look_Spongebob_2_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::SceneComponent*& _Game_Camera_Look_Spongebob_2::Camera_Look_Spongebob_2_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x328);
}
void* _Game_Camera_Look_Spongebob_2::Camera_Look_Spongebob_2_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::CameraComponent*& _Game_Camera_Look_Spongebob_2::Camera_Look_Spongebob_2_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Camera_Look_Spongebob_2::Camera_Look_Spongebob_2_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Camera_Look_Spongebob_2.Camera_Look_Spongebob_2_C");
    return result;
}
void _Game_Camera_Look_Spongebob_2::Camera_Look_Spongebob_2_C::UserConstructionScript0() {
    return;
}
void _Game_Camera_Look_Spongebob_2::Camera_Look_Spongebob_2_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Camera_Look_Spongebob_2::Camera_Look_Spongebob_2_C::ExecuteUbergraph_Camera_Look_Spongebob_2(int32_t EntryPoint) {
    return;
}
