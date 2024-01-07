#include "..\FUObjectArray.hpp"
#include "AnimCustomInstance.hpp"
#include "AnimSequencerInstance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimSequencerInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimGraphRuntime.AnimSequencerInstance");
    return result;
}
