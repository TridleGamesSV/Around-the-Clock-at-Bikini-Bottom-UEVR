#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AsyncActionChangePrimaryAssetBundles.hpp"
#include "AsyncActionLoadPrimaryAssetBase.hpp"
void* _Script_Engine::AsyncActionChangePrimaryAssetBundles::get_Completed() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::AsyncActionChangePrimaryAssetBundles::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AsyncActionChangePrimaryAssetBundles");
    return result;
}
_Script_Engine::AsyncActionChangePrimaryAssetBundles* _Script_Engine::AsyncActionChangePrimaryAssetBundles::AsyncChangeBundleStateForPrimaryAssetList(void*& PrimaryAssetList, void*& AddBundles, void*& RemoveBundles) {
    return;
}
_Script_Engine::AsyncActionChangePrimaryAssetBundles* _Script_Engine::AsyncActionChangePrimaryAssetBundles::AsyncChangeBundleStateForMatchingPrimaryAssets(void*& NewBundles, void*& OldBundles) {
    return;
}
