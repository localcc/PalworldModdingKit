#include "PalUIWorldSettingBase.h"

UPalUIWorldSettingBase::UPalUIWorldSettingBase() {
}

bool UPalUIWorldSettingBase::TryRequestWorldNameFilter(const FString& NewWorldName) {
    return false;
}

void UPalUIWorldSettingBase::OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}



bool UPalUIWorldSettingBase::CompleteSetting(const FPalOptionWorldSettings& NewSetting) {
    return false;
}


