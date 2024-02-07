#include "PalMapObjectFastTravelPointModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectFastTravelPointModel::UPalMapObjectFastTravelPointModel() {
}

void UPalMapObjectFastTravelPointModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectFastTravelPointModel, LocationInstanceId);
}


