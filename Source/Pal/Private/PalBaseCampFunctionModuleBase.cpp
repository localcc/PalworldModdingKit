#include "PalBaseCampFunctionModuleBase.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampFunctionModuleBase::UPalBaseCampFunctionModuleBase() {
    this->bTriggeredReady = false;
}

void UPalBaseCampFunctionModuleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampFunctionModuleBase, OwnerBaseCampId);
}


