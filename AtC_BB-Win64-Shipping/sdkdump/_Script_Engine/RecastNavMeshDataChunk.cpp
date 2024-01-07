#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationDataChunk.hpp"
#include "RecastNavMeshDataChunk.hpp"
_Script_CoreUObject::Class* _Script_Engine::RecastNavMeshDataChunk::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RecastNavMeshDataChunk");
    return result;
}
