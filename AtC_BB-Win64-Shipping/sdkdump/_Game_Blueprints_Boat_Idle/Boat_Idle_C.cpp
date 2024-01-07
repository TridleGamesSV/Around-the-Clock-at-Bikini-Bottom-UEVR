#include "..\FUObjectArray.hpp"
#include "Boat_Idle_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Blueprints_Boat_Idle::Boat_Idle_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Boat_Idle::Boat_Idle_C::get_Boat() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Boat_Idle::Boat_Idle_C::get_Idle() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Boat_Idle::Boat_Idle_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Boat_Idle::Boat_Idle_C::get_PointLight2() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::SpotLightComponent*& _Game_Blueprints_Boat_Idle::Boat_Idle_C::get_SpotLight1() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Boat_Idle::Boat_Idle_C::get_PointLight1() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::SpotLightComponent*& _Game_Blueprints_Boat_Idle::Boat_Idle_C::get_SpotLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x750);
}
_Script_CoreUObject::Class* _Game_Blueprints_Boat_Idle::Boat_Idle_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Boat_Idle.Boat_Idle_C");
    return result;
}
void _Game_Blueprints_Boat_Idle::Boat_Idle_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Boat_Idle::Boat_Idle_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Boat_Idle::Boat_Idle_C::ExecuteUbergraph_Boat_Idle(int32_t EntryPoint) {
    return;
}
