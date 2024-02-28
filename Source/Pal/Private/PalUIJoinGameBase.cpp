#include "PalUIJoinGameBase.h"

UPalUIJoinGameBase::UPalUIJoinGameBase() {
    this->bIsShowIgnoreVersionServer = false;
    this->CurrentPage = 1;
    this->PageSize = 0;
    this->IsNextPage = false;
}

void UPalUIJoinGameBase::RequestOfficialServerIPRange() {
}

void UPalUIJoinGameBase::RequestGetServerList(EPalUIServerListFilterType Type, const FString& Region, bool IsCleanCache, bool NextPage, const FString& SearchWord) {
}

void UPalUIJoinGameBase::OnCompleteOfficialServerIPRange(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}


void UPalUIJoinGameBase::OnCompleteFindSessions(bool IsSuccess, const TArray<FBlueprintSessionResult>& Results, const FString& ErrorStr) {
}

void UPalUIJoinGameBase::OnCompleteFindSessionResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}

void UPalUIJoinGameBase::ConnectServerByAddress(const FString& Address, int32 Port) {
}

void UPalUIJoinGameBase::ConnectServer(const FPalUIServerDisplayData& ServerDisplayData) {
}

void UPalUIJoinGameBase::CollectServerDisplayInfo(const FPalUIServerDataCollectInfo& CollectInfo, TArray<FPalUIServerDisplayData>& OutServerInfo) {
}


