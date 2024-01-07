#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AsyncActionLoadPrimaryAssetBase.hpp"
#include "AsyncActionLoadPrimaryAssetList.hpp"
void* _Script_Engine::AsyncActionLoadPrimaryAssetList::get_Completed() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::AsyncActionLoadPrimaryAssetList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AsyncActionLoadPrimaryAssetList");
    return result;
}
_Script_Engine::AsyncActionLoadPrimaryAssetList* _Script_Engine::AsyncActionLoadPrimaryAssetList::AsyncLoadPrimaryAssetList(void*& PrimaryAssetList, void*& LoadBundles) {
    return;
}
