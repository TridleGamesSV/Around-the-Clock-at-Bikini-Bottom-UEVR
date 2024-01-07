#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MaterialParameterCollection.hpp"
#include "MaterialParameterCollectionInstance.hpp"
#include "World.hpp"
_Script_Engine::MaterialParameterCollection*& _Script_Engine::MaterialParameterCollectionInstance::get_Collection() {
    return *(_Script_Engine::MaterialParameterCollection**)((uintptr_t)this + 0x30);
}
_Script_Engine::World*& _Script_Engine::MaterialParameterCollectionInstance::get_World() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialParameterCollectionInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialParameterCollectionInstance");
    return result;
}
