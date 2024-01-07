#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TableViewBase.hpp"
#include "Widget.hpp"
_Script_CoreUObject::Class* _Script_UMG::TableViewBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.TableViewBase");
    return result;
}
