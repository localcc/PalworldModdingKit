#include "PalBaseCampPassiveEffect_WorkHard.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampPassiveEffect_WorkHard::UPalBaseCampPassiveEffect_WorkHard() {
    this->WorkHardType = EPalBaseCampPassiveEffectWorkHardType::Normal;
}

void UPalBaseCampPassiveEffect_WorkHard::OnRep_WorkHardType() {
}

EPalBaseCampPassiveEffectWorkHardType UPalBaseCampPassiveEffect_WorkHard::GetWorkHardType() const {
    return EPalBaseCampPassiveEffectWorkHardType::Easy;
}

void UPalBaseCampPassiveEffect_WorkHard::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampPassiveEffect_WorkHard, WorkHardType);
}


