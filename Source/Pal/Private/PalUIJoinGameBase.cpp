#include "PalUIJoinGameBase.h"

UPalUIJoinGameBase::UPalUIJoinGameBase() {
    this->bIsShowIgnoreVersionServer = false;
    this->ServerFilterType = EPalUIServerListFilterType::Official;
    this->CurrentPage = 1;
    this->PageSize = 0;
    this->IsNextPage = false;
    this->IsCheckedInputPassword = false;
    this->SaveConfigCategoryName = TEXT("JoinGameSettings");
}

void UPalUIJoinGameBase::SaveConfigValue() {
}

void UPalUIJoinGameBase::RequestOfficialServerIPRange() {
}

void UPalUIJoinGameBase::RequestGetServerList(EPalUIServerListFilterType Type, EPalUIServerListSortType SortType, const FString& Region, int32 PageOffset, const FString& SearchWord) {
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


