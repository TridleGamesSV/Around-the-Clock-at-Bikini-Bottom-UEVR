#include "..\FUObjectArray.hpp"
#include "SceneCapture2D_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneCapture2D.hpp"
void* _Game_Blueprints_SceneCapture2D_BP::SceneCapture2D_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x330);
}
void _Game_Blueprints_SceneCapture2D_BP::SceneCapture2D_BP_C::ExecuteUbergraph_SceneCapture2D_BP(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_Blueprints_SceneCapture2D_BP::SceneCapture2D_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/SceneCapture2D_BP.SceneCapture2D_BP_C");
    return result;
}
void _Game_Blueprints_SceneCapture2D_BP::SceneCapture2D_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_SceneCapture2D_BP::SceneCapture2D_BP_C::ReceiveBeginPlay() {
    return;
}
