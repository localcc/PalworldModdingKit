#include "PalPlayerDataPalDimensionStorage.h"
#include "Net/UnrealNetwork.h"

UPalPlayerDataPalDimensionStorage::UPalPlayerDataPalDimensionStorage() {
    this->CurrentPage = 0;
}

void UPalPlayerDataPalDimensionStorage::OnUpdatedLockerData(const TArray<int32>& UpdatedDataIndexArray) {
}

void UPalPlayerDataPalDimensionStorage::OnUpdateCurrentControllingPage(const FGuid& PlayerUId, int32 NewPageNum) {
}

void UPalPlayerDataPalDimensionStorage::OnTimeoutPlayer(const FGuid& TimeoutPlayerUId) {
}

void UPalPlayerDataPalDimensionStorage::OnSortedLockerData() {
}

void UPalPlayerDataPalDimensionStorage::OnRep_PageData() {
}

void UPalPlayerDataPalDimensionStorage::OnRep_CurrentPage() {
}

int32 UPalPlayerDataPalDimensionStorage::GetDimensionStoragePageNum(const UObject* WorldContextObject) {
    return 0;
}

void UPalPlayerDataPalDimensionStorage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerDataPalDimensionStorage, CurrentPage);
    DOREPLIFETIME(UPalPlayerDataPalDimensionStorage, PageReplicationData);
}


