#include "..\FUObjectArray.hpp"
#include "Hushed_Gardens_Calm_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Hushed_Gardens_Calm_BP::Hushed_Gardens_Calm_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Hushed_Gardens_Calm_BP.Hushed_Gardens_Calm_BP_C");
    return result;
}
