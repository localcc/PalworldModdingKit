#include "PalMapObjectBaseCampPoint.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectBaseCampPoint::UPalMapObjectBaseCampPoint() {
    this->PalBoxWiget = NULL;
    this->CampTaskWiget = NULL;
    this->bForRaidBossArea = false;
}

void UPalMapObjectBaseCampPoint::OnReceiveConfirmSurrenderRaidBossAreaResult(const bool bResult) {
}

void UPalMapObjectBaseCampPoint::OnReceiveConfirmExitRaidBossAreaResult(const bool bResult) {
}

bool UPalMapObjectBaseCampPoint::IsSameGuildInLocalPlayer() const {
    return false;
}

void UPalMapObjectBaseCampPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectBaseCampPoint, BaseCampId);
    DOREPLIFETIME(UPalMapObjectBaseCampPoint, bForRaidBossArea);
}


