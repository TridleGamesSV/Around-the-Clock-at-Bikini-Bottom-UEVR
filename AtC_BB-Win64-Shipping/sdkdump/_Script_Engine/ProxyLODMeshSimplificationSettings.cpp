#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "ProxyLODMeshSimplificationSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::ProxyLODMeshSimplificationSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ProxyLODMeshSimplificationSettings");
    return result;
}
void* _Script_Engine::ProxyLODMeshSimplificationSettings::get_ProxyLODMeshReductionModuleName() {
    return (void*)((uintptr_t)this + 0x38);
}
