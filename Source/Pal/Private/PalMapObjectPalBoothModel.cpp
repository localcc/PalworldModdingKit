#include "PalMapObjectPalBoothModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectPalBoothModel::UPalMapObjectPalBoothModel() {
    this->WorkAffection = NULL;
}

void UPalMapObjectPalBoothModel::RequestTrade_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectPalBoothModel::RequestTrade(const int32 TradeIndex) {
}

void UPalMapObjectPalBoothModel::RequestTogglePrivateLock() {
}

void UPalMapObjectPalBoothModel::RequestRemoveTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectPalBoothModel::RequestRemoveTradeInfo(const int32 TradeInfoIndex) {
}

void UPalMapObjectPalBoothModel::RequestPrivateLock_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectPalBoothModel::RequestCreateTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectPalBoothModel::RequestCreateTradeInfo(const FPalPalBoothTradeInfo& TradeInfo) {
}

void UPalMapObjectPalBoothModel::RequestChangeTradeInfo_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectPalBoothModel::RequestChangeTradeInfo(const int32 TradeInfoIndex, const FPalPalBoothTradeInfo& TradeInfo) {
}

void UPalMapObjectPalBoothModel::ReleasePrivateLock_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectPalBoothModel::OnRep_TradeInfos() {
}

void UPalMapObjectPalBoothModel::OnRep_PrivateLockPlayerUId() {
}

bool UPalMapObjectPalBoothModel::IsLockedPrivateByLocalPlayer() const {
    return false;
}

void UPalMapObjectPalBoothModel::GetTradeInfos(TArray<FPalPalBoothTradeInfo>& OutTradeInfo) const {
}

FName UPalMapObjectPalBoothModel::GetSoldPalCharacterID(int32 TradeIndex) const {
    return NAME_None;
}

UPalIndividualCharacterSlot* UPalMapObjectPalBoothModel::GetBoothPalByIndividualId(const FPalInstanceID IndividualId) {
    return NULL;
}

void UPalMapObjectPalBoothModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectPalBoothModel, TradeInfos);
    DOREPLIFETIME(UPalMapObjectPalBoothModel, PrivateLockPlayerUId);
    DOREPLIFETIME(UPalMapObjectPalBoothModel, SoldPalIds);
}


