#include "..\FUObjectArray.hpp"
#include "Sandy_Chase_Music_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Game_Blueprints_Sandy_Chase_Music_BP::Sandy_Chase_Music_BP_C::UserConstructionScript0() {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Sandy_Chase_Music_BP::Sandy_Chase_Music_BP_C::get_Chase_Music() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Sandy_Chase_Music_BP::Sandy_Chase_Music_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Sandy_Chase_Music_BP::Sandy_Chase_Music_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Sandy_Chase_Music_BP.Sandy_Chase_Music_BP_C");
    return result;
}
