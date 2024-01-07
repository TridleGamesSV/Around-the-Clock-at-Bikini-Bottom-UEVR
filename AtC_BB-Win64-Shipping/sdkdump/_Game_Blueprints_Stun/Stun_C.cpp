#include "..\FUObjectArray.hpp"
#include "Stun_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Game_Blueprints_Stun::Stun_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Stun::Stun_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Stun::Stun_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Stun.Stun_C");
    return result;
}
void _Game_Blueprints_Stun::Stun_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Stun::Stun_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Stun::Stun_C::ExecuteUbergraph_Stun(int32_t EntryPoint) {
    return;
}
