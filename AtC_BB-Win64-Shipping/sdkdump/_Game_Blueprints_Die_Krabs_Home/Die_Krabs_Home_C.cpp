#include "..\FUObjectArray.hpp"
#include "Die_Krabs_Home_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::SceneComponent*& _Game_Blueprints_Die_Krabs_Home::Die_Krabs_Home_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
void* _Game_Blueprints_Die_Krabs_Home::Die_Krabs_Home_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Game_Blueprints_Die_Krabs_Home::Die_Krabs_Home_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Die_Krabs_Home.Die_Krabs_Home_C");
    return result;
}
void _Game_Blueprints_Die_Krabs_Home::Die_Krabs_Home_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Die_Krabs_Home::Die_Krabs_Home_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Die_Krabs_Home::Die_Krabs_Home_C::ExecuteUbergraph_Die_Krabs_Home(int32_t EntryPoint) {
    return;
}
