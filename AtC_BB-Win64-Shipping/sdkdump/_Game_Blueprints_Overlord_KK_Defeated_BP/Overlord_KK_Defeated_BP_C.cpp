#include "..\FUObjectArray.hpp"
#include "Overlord_KK_Defeated_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_Engine::SceneComponent*& _Game_Blueprints_Overlord_KK_Defeated_BP::Overlord_KK_Defeated_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x330);
}
void* _Game_Blueprints_Overlord_KK_Defeated_BP::Overlord_KK_Defeated_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Overlord_KK_Defeated_BP::Overlord_KK_Defeated_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Blueprints_Overlord_KK_Defeated_BP::Overlord_KK_Defeated_BP_C::get_SkeletalMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_Blueprints_Overlord_KK_Defeated_BP::Overlord_KK_Defeated_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Overlord_KK_Defeated_BP.Overlord_KK_Defeated_BP_C");
    return result;
}
int32_t& _Game_Blueprints_Overlord_KK_Defeated_BP::Overlord_KK_Defeated_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x338);
}
void _Game_Blueprints_Overlord_KK_Defeated_BP::Overlord_KK_Defeated_BP_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Overlord_KK_Defeated_BP::Overlord_KK_Defeated_BP_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Overlord_KK_Defeated_BP::Overlord_KK_Defeated_BP_C::ExecuteUbergraph_Overlord_KK_Defeated_BP(int32_t EntryPoint) {
    return;
}
