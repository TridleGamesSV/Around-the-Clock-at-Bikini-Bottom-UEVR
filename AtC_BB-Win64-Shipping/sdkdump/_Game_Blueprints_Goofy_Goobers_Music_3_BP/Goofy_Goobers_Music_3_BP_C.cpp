#include "..\FUObjectArray.hpp"
#include "Goofy_Goobers_Music_3_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
_Script_Engine::AudioComponent*& _Game_Blueprints_Goofy_Goobers_Music_3_BP::Goofy_Goobers_Music_3_BP_C::get_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Goofy_Goobers_Music_3_BP::Goofy_Goobers_Music_3_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Goofy_Goobers_Music_3_BP::Goofy_Goobers_Music_3_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_Blueprints_Goofy_Goobers_Music_3_BP::Goofy_Goobers_Music_3_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Goofy_Goobers_Music_3_BP.Goofy_Goobers_Music_3_BP_C");
    return result;
}
void _Game_Blueprints_Goofy_Goobers_Music_3_BP::Goofy_Goobers_Music_3_BP_C::UserConstructionScript0() {
    return;
}
