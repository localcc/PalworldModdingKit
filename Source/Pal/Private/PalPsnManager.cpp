#include "PalPsnManager.h"

UPalPsnManager::UPalPsnManager() {
}

void UPalPsnManager::WithOnlineIdForParameter(const UPalIndividualCharacterParameter* InParameter, const FString& InName, FString& outName) {
}

void UPalPsnManager::WithOnlineIdForHandle(const UPalIndividualCharacterHandle* InHandle, const FString& InName, FString& outName) {
}

void UPalPsnManager::WithOnlineId(const FGuid& PlayerUId, const FString& InName, FString& outName) const {
}

bool UPalPsnManager::TryGetOnlineId(const FGuid& PlayerUId, FString& OutOnlineId) const {
    return false;
}

void UPalPsnManager::ShowPlayerProfile(const FString& UserId) {
}

void UPalPsnManager::ShowCommunicatonRestrictionSystemDialog() const {
}

void UPalPsnManager::SetCrossPlayPremiumFeature(bool bFlag) {
}

void UPalPsnManager::SetCompleteSetupInGame(bool flag) {
}

bool UPalPsnManager::IsRequiredEULA() const {
    return false;
}

bool UPalPsnManager::IsChatDisabled() const {
    return false;
}

bool UPalPsnManager::IsBlockedUser(const FGuid& PlayerUId) const {
    return false;
}

void UPalPsnManager::GetNickNameWithOnlineID(const FPalIndividualCharacterSaveParameter& SaveParam, FString& outName) {
}

void UPalPsnManager::GetLoggedInPlayerNames(TArray<FString>& OutNames) {
}

void UPalPsnManager::GetEULALanguageCode(FString& LanguageCode) const {
}

void UPalPsnManager::AgreeEULA() {
}


