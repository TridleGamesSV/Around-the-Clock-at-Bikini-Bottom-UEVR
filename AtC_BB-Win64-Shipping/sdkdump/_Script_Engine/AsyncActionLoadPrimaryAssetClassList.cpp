#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AsyncActionLoadPrimaryAssetBase.hpp"
#include "AsyncActionLoadPrimaryAssetClassList.hpp"
void* _Script_Engine::AsyncActionLoadPrimaryAssetClassList::get_Completed() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::AsyncActionLoadPrimaryAssetClassList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AsyncActionLoadPrimaryAssetClassList");
    return result;
}
_Script_Engine::AsyncActionLoadPrimaryAssetClassList* _Script_Engine::AsyncActionLoadPrimaryAssetClassList::AsyncLoadPrimaryAssetClassList(void*& PrimaryAssetList, void*& LoadBundles) {
    return;
}
