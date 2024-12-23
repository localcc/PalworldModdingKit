#include "PalLoginManager.h"

UPalLoginManager::UPalLoginManager() {
}

void UPalLoginManager::OnSwitchUserUICompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr) {
}

void UPalLoginManager::OnLoginEOSCompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr) {
}

void UPalLoginManager::OnLoginCompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr) {
}

void UPalLoginManager::OnConfirmAlert_Login(bool bSuccess) {
}

void UPalLoginManager::OnConfirmAlert_EOSLogin(bool bSuccess) {
}

void UPalLoginManager::FinishLogin() {
}


