#include "PalGameModeLogin.h"

APalGameModeLogin::APalGameModeLogin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APalGameModeLogin::OnSwitchUserUICompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr) {
}

void APalGameModeLogin::OnLoginEOSCompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr) {
}

void APalGameModeLogin::OnLoginCompleted(const UPocketpairUserInfo* UserInfo, bool bSuccess, const FString& ErrorStr) {
}

void APalGameModeLogin::OnConfirmAlert_MultiplayRestricted(bool bSuccess) {
}

void APalGameModeLogin::OnConfirmAlert_EOSLogin(bool bSuccess) {
}

void APalGameModeLogin::OnCloseEalryAccess(bool _) {
}



