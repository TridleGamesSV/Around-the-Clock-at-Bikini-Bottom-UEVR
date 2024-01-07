#include "..\FUObjectArray.hpp"
#include "Spongebob_Stand_Clamtorch_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::PointLightComponent*& _Game_Blueprints_Spongebob_Stand_Clamtorch_BP::Spongebob_Stand_Clamtorch_BP_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Spongebob_Stand_Clamtorch_BP::Spongebob_Stand_Clamtorch_BP_C::get_Clam_Torch() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Spongebob_Stand_Clamtorch_BP::Spongebob_Stand_Clamtorch_BP_C::get_Leg2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Spongebob_Stand_Clamtorch_BP::Spongebob_Stand_Clamtorch_BP_C::get_Leg1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_CoreUObject::Class* _Game_Blueprints_Spongebob_Stand_Clamtorch_BP::Spongebob_Stand_Clamtorch_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Spongebob_Stand_Clamtorch_BP.Spongebob_Stand_Clamtorch_BP_C");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Spongebob_Stand_Clamtorch_BP::Spongebob_Stand_Clamtorch_BP_C::get_Spongebob() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
void _Game_Blueprints_Spongebob_Stand_Clamtorch_BP::Spongebob_Stand_Clamtorch_BP_C::UserConstructionScript() {
    return;
}
