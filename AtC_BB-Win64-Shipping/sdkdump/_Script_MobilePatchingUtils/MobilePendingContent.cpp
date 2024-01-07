#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MobileInstalledContent.hpp"
#include "MobilePendingContent.hpp"
_Script_CoreUObject::Class* _Script_MobilePatchingUtils::MobilePendingContent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MobilePatchingUtils.MobilePendingContent");
    return result;
}
void _Script_MobilePatchingUtils::MobilePendingContent::StartInstall(void* OnSucceeded, void* OnFailed) {
    return;
}
float _Script_MobilePatchingUtils::MobilePendingContent::GetTotalDownloadedSize() {
    return;
}
float _Script_MobilePatchingUtils::MobilePendingContent::GetRequiredDiskSpace() {
    return;
}
float _Script_MobilePatchingUtils::MobilePendingContent::GetDownloadSpeed() {
    return;
}
void* _Script_MobilePatchingUtils::MobilePendingContent::GetDownloadStatusText() {
    return;
}
float _Script_MobilePatchingUtils::MobilePendingContent::GetInstallProgress() {
    return;
}
float _Script_MobilePatchingUtils::MobilePendingContent::GetDownloadSize() {
    return;
}
