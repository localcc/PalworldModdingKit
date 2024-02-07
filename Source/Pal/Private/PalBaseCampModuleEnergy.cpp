#include "PalBaseCampModuleEnergy.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampModuleEnergy::UPalBaseCampModuleEnergy() {
}

void UPalBaseCampModuleEnergy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModuleEnergy, FunctionArray);
}


