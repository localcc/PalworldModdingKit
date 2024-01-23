#include "PalBaseCampModuleEnergy.h"
#include "Net/UnrealNetwork.h"

void UPalBaseCampModuleEnergy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModuleEnergy, FunctionArray);
}

UPalBaseCampModuleEnergy::UPalBaseCampModuleEnergy() {
}

