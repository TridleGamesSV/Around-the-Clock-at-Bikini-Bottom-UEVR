#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "SlateDataSheet.hpp"
_Script_Engine::Texture2D*& _Script_UMG::SlateDataSheet::get_DataTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_UMG::SlateDataSheet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.SlateDataSheet");
    return result;
}
