#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavArea.hpp"
#include "NavArea_Obstacle.hpp"
_Script_CoreUObject::Class* _Script_Engine::NavArea_Obstacle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavArea_Obstacle");
    return result;
}
