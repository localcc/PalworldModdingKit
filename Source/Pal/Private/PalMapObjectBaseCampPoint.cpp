#include "PalMapObjectBaseCampPoint.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectBaseCampPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectBaseCampPoint, BaseCampId);
}

UPalMapObjectBaseCampPoint::UPalMapObjectBaseCampPoint() {
    this->PalBoxWiget = NULL;
    this->CampTaskWiget = NULL;
}

