#include "PalMapObjectPlayerSitModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectPlayerSitModel::UPalMapObjectPlayerSitModel() {
    this->bIsPlayerSitting = false;
}

void UPalMapObjectPlayerSitModel::RequestSitPlayer_ServerInternal(const int32 PlayerId) {
}

void UPalMapObjectPlayerSitModel::RequestReleaseSitPlayer_ServerInternal(const int32 PlayerId) {
}

void UPalMapObjectPlayerSitModel::RequestReleaseSitPlayer() {
}

void UPalMapObjectPlayerSitModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectPlayerSitModel, bIsPlayerSitting);
}


