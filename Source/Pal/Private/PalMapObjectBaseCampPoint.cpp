#include "PalMapObjectBaseCampPoint.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectBaseCampPoint::UPalMapObjectBaseCampPoint() {
    this->PalBoxWiget = NULL;
    this->CampTaskWiget = NULL;
}

bool UPalMapObjectBaseCampPoint::IsSameGuildInLocalPlayer() const {
    return false;
}

void UPalMapObjectBaseCampPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectBaseCampPoint, BaseCampId);
}


