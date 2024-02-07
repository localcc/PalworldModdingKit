#include "AsyncAction_CommonUserInitialize.h"

UAsyncAction_CommonUserInitialize::UAsyncAction_CommonUserInitialize() {
}

UAsyncAction_CommonUserInitialize* UAsyncAction_CommonUserInitialize::LoginForOnlinePlay(UCommonUserSubsystem* Target, int32 LocalPlayerIndex) {
    return NULL;
}

UAsyncAction_CommonUserInitialize* UAsyncAction_CommonUserInitialize::InitializeForLocalPlay(UCommonUserSubsystem* Target, int32 LocalPlayerIndex, FInputDeviceId PrimaryInputDevice, bool bCanUseGuestLogin) {
    return NULL;
}

void UAsyncAction_CommonUserInitialize::HandleInitializationComplete(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext) {
}


