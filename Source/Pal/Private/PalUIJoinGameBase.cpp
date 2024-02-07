#include "PalUIJoinGameBase.h"

UPalUIJoinGameBase::UPalUIJoinGameBase() {
    this->bIsShowIgnoreVersionServer = false;
}

void UPalUIJoinGameBase::RequestOfficialServerIPRange() {
}

void UPalUIJoinGameBase::RequestGetServerList(EPalUIServerListFilterType Type, const FString& Region, bool IsCleanCache, bool NextPage) {
}

void UPalUIJoinGameBase::OnCompleteOfficialServerIPRange(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}


void UPalUIJoinGameBase::OnCompleteFindSessions(bool IsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr) {
}

void UPalUIJoinGameBase::ConnectServerByAddress(const FString& Address, int32 Port) {
}

void UPalUIJoinGameBase::ConnectServer(const FPalUIServerDisplayData& ServerDisplayData) {
}

void UPalUIJoinGameBase::CollectServerDisplayInfo(const FPalUIServerDataCollectInfo& CollectInfo, TArray<FPalUIServerDisplayData>& OutServerInfo) {
}


