#include "..\FUObjectArray.hpp"
#include "Die_Prowler_KK_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Game_Blueprints_Die_Prowler_KK::Die_Prowler_KK_C::UserConstructionScript0() {
    return;
}
_Script_Engine::SaveGame*& _Game_Blueprints_Die_Prowler_KK::Die_Prowler_KK_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x328);
}
void* _Game_Blueprints_Die_Prowler_KK::Die_Prowler_KK_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Game_Blueprints_Die_Prowler_KK::Die_Prowler_KK_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Die_Prowler_KK.Die_Prowler_KK_C");
    return result;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Die_Prowler_KK::Die_Prowler_KK_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
void _Game_Blueprints_Die_Prowler_KK::Die_Prowler_KK_C::ExecuteUbergraph_Die_Prowler_KK(int32_t EntryPoint) {
    return;
}
void _Game_Blueprints_Die_Prowler_KK::Die_Prowler_KK_C::ReceiveBeginPlay0() {
    return;
}
