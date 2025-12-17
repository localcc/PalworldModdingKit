#include "PalUIJoinGameInputCodeBase.h"

UPalUIJoinGameInputCodeBase::UPalUIJoinGameInputCodeBase() {
    this->EnableUIInputFlagName = TEXT("WaitingFindSessions_InviteCode");
}

void UPalUIJoinGameInputCodeBase::VerifyPassword(const FString& InputPassword) {
}

void UPalUIJoinGameInputCodeBase::VerifyInviteCode(const FString& InputCode) {
}



void UPalUIJoinGameInputCodeBase::OnCompletedJoinSession(bool IsSuccess, JoinSessionResultType Type) {
}

void UPalUIJoinGameInputCodeBase::OnCompletedFindSessions(bool IsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr) {
}


