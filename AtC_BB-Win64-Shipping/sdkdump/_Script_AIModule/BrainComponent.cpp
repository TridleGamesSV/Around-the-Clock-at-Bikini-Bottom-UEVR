#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "BlackboardComponent.hpp"
#include "BrainComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
_Script_AIModule::BlackboardComponent*& _Script_AIModule::BrainComponent::get_BlackboardComp() {
    return *(_Script_AIModule::BlackboardComponent**)((uintptr_t)this + 0xf8);
}
bool _Script_AIModule::BrainComponent::IsPaused() {
    return;
}
bool _Script_AIModule::BrainComponent::IsRunning() {
    return;
}
void _Script_AIModule::BrainComponent::RestartLogic() {
    return;
}
_Script_AIModule::AIController*& _Script_AIModule::BrainComponent::get_AIOwner() {
    return *(_Script_AIModule::AIController**)((uintptr_t)this + 0x100);
}
void _Script_AIModule::BrainComponent::StopLogic(void* Reason) {
    return;
}
_Script_CoreUObject::Class* _Script_AIModule::BrainComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BrainComponent");
    return result;
}
