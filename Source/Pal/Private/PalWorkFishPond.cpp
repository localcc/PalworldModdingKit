#include "PalWorkFishPond.h"
#include "Net/UnrealNetwork.h"

UPalWorkFishPond::UPalWorkFishPond() {
}

void UPalWorkFishPond::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkFishPond, CraftSpeeds);
}


