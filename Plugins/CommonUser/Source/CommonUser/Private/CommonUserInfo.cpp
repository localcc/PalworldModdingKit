#include "CommonUserInfo.h"

UCommonUserInfo::UCommonUserInfo() {
    this->LocalPlayerIndex = -1;
    this->bCanBeGuest = false;
    this->bIsGuest = false;
    this->InitializationState = ECommonUserInitializationState::Invalid;
}

ECommonUserAvailability UCommonUserInfo::GetPrivilegeAvailability(ECommonUserPrivilege Privilege) const {
    return ECommonUserAvailability::Unknown;
}

FString UCommonUserInfo::GetNickname() const {
    return TEXT("");
}

FUniqueNetIdRepl UCommonUserInfo::GetNetId(ECommonUserOnlineContext Context) const {
    return FUniqueNetIdRepl{};
}

FString UCommonUserInfo::GetDebugString() const {
    return TEXT("");
}

ECommonUserPrivilegeResult UCommonUserInfo::GetCachedPrivilegeResult(ECommonUserPrivilege Privilege, ECommonUserOnlineContext Context) const {
    return ECommonUserPrivilegeResult::Unknown;
}


