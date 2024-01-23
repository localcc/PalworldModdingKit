#include "PalMapObjectFastTravelPointModel.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectFastTravelPointModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectFastTravelPointModel, LocationInstanceId);
}

UPalMapObjectFastTravelPointModel::UPalMapObjectFastTravelPointModel() {
}

