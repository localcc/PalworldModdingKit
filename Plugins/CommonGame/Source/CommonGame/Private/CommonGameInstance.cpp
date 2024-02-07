#include "CommonGameInstance.h"

UCommonGameInstance::UCommonGameInstance() {
    this->RequestedSession = NULL;
}

void UCommonGameInstance::HandleSystemMessage(FGameplayTag MessageType, FText Title, FText Message) {
}

void UCommonGameInstance::HandlePrivilegeChanged(const UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability) {
}


