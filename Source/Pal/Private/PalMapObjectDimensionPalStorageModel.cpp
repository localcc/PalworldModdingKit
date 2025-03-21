#include "PalMapObjectDimensionPalStorageModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectDimensionPalStorageModel::UPalMapObjectDimensionPalStorageModel() {
    this->DimensionPalStorageWidget = NULL;
    this->bPrivateLock = true;
}

void UPalMapObjectDimensionPalStorageModel::UnlockDimensionLocker_ServerInternal(const int32 PlayerId) {
}

void UPalMapObjectDimensionPalStorageModel::OnRep_PrivateLock() {
}

void UPalMapObjectDimensionPalStorageModel::LockDimensionLocker_ServerInternal(const int32 PlayerId) {
}

bool UPalMapObjectDimensionPalStorageModel::CanOpenDimensionPalStorageMenu_LocalPlayer() const {
    return false;
}

void UPalMapObjectDimensionPalStorageModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectDimensionPalStorageModel, bPrivateLock);
}


