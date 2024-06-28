#include "PalMapObjectSupplyStorageModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectSupplyStorageModel::UPalMapObjectSupplyStorageModel() {
}

void UPalMapObjectSupplyStorageModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectSupplyStorageModel, LocationId);
}


