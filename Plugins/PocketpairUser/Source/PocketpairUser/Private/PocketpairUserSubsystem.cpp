#include "PocketpairUserSubsystem.h"

UPocketpairUserSubsystem::UPocketpairUserSubsystem() {
    this->LocalUserInfo = NULL;
}

void UPocketpairUserSubsystem::UnlockAchievement(const FString& ID, float Percent) {
}

void UPocketpairUserSubsystem::OnSessionInviteReceived(const FString& InviteCode) {
}

FString UPocketpairUserSubsystem::GetTelemetryUserId() const {
    return TEXT("");
}

FString UPocketpairUserSubsystem::GetTelemetrySessionId() const {
    return TEXT("");
}

FSocialId UPocketpairUserSubsystem::GetSocialId(const APlayerController* PlayerController) {
    return FSocialId{};
}

FString UPocketpairUserSubsystem::GetSaveDataUserId() const {
    return TEXT("");
}

int32 UPocketpairUserSubsystem::GetPlayerNo(const APlayerController* PlayerController) {
    return 0;
}

int32 UPocketpairUserSubsystem::GetPingResultCache(const FString& Address) {
    return 0;
}

UPocketpairUserInfo* UPocketpairUserSubsystem::GetLocalUserInfo() const {
    return NULL;
}

FString UPocketpairUserSubsystem::GetInviteCode() const {
    return TEXT("");
}

FName UPocketpairUserSubsystem::GetDefaultOnlineSubsystemName() const {
    return NAME_None;
}

void UPocketpairUserSubsystem::AddPingResultCache(const FString& Address, int32 Ping) {
}


