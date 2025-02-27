#include "PalBaseCampPassiveEffect_AllWorkSpeed.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampPassiveEffect_AllWorkSpeed::UPalBaseCampPassiveEffect_AllWorkSpeed() {
    this->WorkSpeedAdditionalRate = 1.00f;
}

void UPalBaseCampPassiveEffect_AllWorkSpeed::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampPassiveEffect_AllWorkSpeed, WorkSpeedAdditionalRate);
}


