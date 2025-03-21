#include "PalOnlineUtility.h"

UPalOnlineUtility::UPalOnlineUtility() {
}

bool UPalOnlineUtility::UnMutePlayer(const UObject* WorldContextObject, const FString& UserId) {
    return false;
}

bool UPalOnlineUtility::UnBlockPlayer(const UObject* WorldContextObject, const FString& UserId) {
    return false;
}

bool UPalOnlineUtility::ShowWebURL(const UObject* WorldContextObject, const FString& InURL) {
    return false;
}

void UPalOnlineUtility::ShowProfileUI(const UObject* WorldContextObject, const FString& UserId) {
}

bool UPalOnlineUtility::SetDisplayTermsOfService(const UObject* WorldContextObject, int32 InNumber) {
    return false;
}

void UPalOnlineUtility::RequestGetEuraVersions(const UObject* WorldContextObject) {
}

bool UPalOnlineUtility::MutePlayer(const UObject* WorldContextObject, const FString& UserId) {
    return false;
}

bool UPalOnlineUtility::IsOpenListenServer(const UObject* WorldContextObject) {
    return false;
}

bool UPalOnlineUtility::IsMutePlayerByPlayerUId(const UObject* WorldContextObject, const FGuid& PlayerUId, bool& bOutMute) {
    return false;
}

bool UPalOnlineUtility::IsMutePlayer(const UObject* WorldContextObject, const FString& UserId, bool& bOutMute) {
    return false;
}

bool UPalOnlineUtility::IsDisplayTermsOfService(const UObject* WorldContextObject, int32 InNumber) {
    return false;
}

bool UPalOnlineUtility::IsDenyCommunicationByPlayerUId(const UObject* WorldContextObject, const FGuid& PlayerUId, bool& bOutDeny) {
    return false;
}

bool UPalOnlineUtility::IsDenyCommunication(const UObject* WorldContextObject, const FString& UserId, bool& bOutDeny) {
    return false;
}

bool UPalOnlineUtility::IsBlockPlayerByPlayerUId(const UObject* WorldContextObject, const FGuid& PlayerUId, bool& bOutBlock) {
    return false;
}

bool UPalOnlineUtility::IsBlockPlayer(const UObject* WorldContextObject, const FString& UserId, bool& bOutBlock) {
    return false;
}

bool UPalOnlineUtility::GetUserIdByPlayerUIdInSession(const UObject* WorldContextObject, FGuid InPlayerUId, FString& OutUserId) {
    return false;
}

bool UPalOnlineUtility::GetPlayerUIdByUserIdInSession(const UObject* WorldContextObject, const FString& InUserId, FGuid& OutPlayerUId) {
    return false;
}

APalPlayerState* UPalOnlineUtility::GetPlayerStateByUserIdInSession(const UObject* WorldContextObject, const FString& InUserId) {
    return NULL;
}

EPalPlayerPlatform UPalOnlineUtility::GetPlayerPlatformByUserId(const UObject* WorldContextObject, const FString& UserId) {
    return EPalPlayerPlatform::None;
}

FString UPalOnlineUtility::GetPlayerNicknameByUserId(const UObject* WorldContextObject, const FString& UserId) {
    return TEXT("");
}

FString UPalOnlineUtility::GetPlayerNameByUserIdInSession(const UObject* WorldContextObject, const FString& InUserId) {
    return TEXT("");
}

TArray<FPalOptionOnlineIds> UPalOnlineUtility::GetMutePlayerList(const UObject* WorldContextObject) {
    return TArray<FPalOptionOnlineIds>();
}

TArray<FPalOptionOnlineIds> UPalOnlineUtility::GetBlockPlayerList(const UObject* WorldContextObject) {
    return TArray<FPalOptionOnlineIds>();
}

bool UPalOnlineUtility::CheckUserResolvePrivilege(const UObject* WorldContextObject, const EPalUserPrivilege Privilege, bool UIOpen) {
    return false;
}

bool UPalOnlineUtility::BlockPlayer(const UObject* WorldContextObject, const FString& UserId, bool& bOutKicked) {
    return false;
}


