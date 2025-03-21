#include "PalMapObjectItemBoothModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectItemBoothModel::UPalMapObjectItemBoothModel() {
    this->StoreContainer = NULL;
    this->WorkAffection = NULL;
}

void UPalMapObjectItemBoothModel::RequestTrade_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectItemBoothModel::RequestTrade(const int32 TradeIndex, const int32 GroupCount) {
}

void UPalMapObjectItemBoothModel::RequestTogglePrivateLock() {
}

void UPalMapObjectItemBoothModel::RequestSortStore_ServerInternal() {
}

void UPalMapObjectItemBoothModel::RequestSortStore() {
}

void UPalMapObjectItemBoothModel::RequestRemoveTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectItemBoothModel::RequestRemoveTradeInfo(const int32 TradeInfoIndex) {
}

void UPalMapObjectItemBoothModel::RequestPrivateLock_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectItemBoothModel::RequestCreateTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectItemBoothModel::RequestCreateTradeInfo(const FPalItemBoothTradeInfo& TradeInfo) {
}

void UPalMapObjectItemBoothModel::RequestChangeTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectItemBoothModel::RequestChangeTradeInfo(const int32 TradeInfoIndex, const FPalItemBoothTradeInfo& TradeInfo) {
}

void UPalMapObjectItemBoothModel::ReleasePrivateLock_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectItemBoothModel::OnUpdateStoreContents(UPalItemContainer* Container) {
}

void UPalMapObjectItemBoothModel::OnRep_TradeInfos() {
}

void UPalMapObjectItemBoothModel::OnRep_TargetContainer() {
}

void UPalMapObjectItemBoothModel::OnRep_PrivateLockPlayerUId() {
}

bool UPalMapObjectItemBoothModel::IsLockedPrivateByLocalPlayer() const {
    return false;
}

void UPalMapObjectItemBoothModel::GetTradeInfos(TArray<FPalItemBoothTradeInfo>& OutTradeInfo) const {
}

int32 UPalMapObjectItemBoothModel::GetTargetItemStock(const FName StaticItemId) const {
    return 0;
}

void UPalMapObjectItemBoothModel::GetStoreItemContainer(UPalItemContainer*& TargetContainer) const {
}

void UPalMapObjectItemBoothModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectItemBoothModel, StoreContainer);
    DOREPLIFETIME(UPalMapObjectItemBoothModel, TradeInfos);
    DOREPLIFETIME(UPalMapObjectItemBoothModel, PrivateLockPlayerUId);
}


