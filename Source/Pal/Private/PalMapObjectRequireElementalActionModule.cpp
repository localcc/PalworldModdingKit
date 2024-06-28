#include "PalMapObjectRequireElementalActionModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectRequireElementalActionModule::UPalMapObjectRequireElementalActionModule() {
}

FName UPalMapObjectRequireElementalActionModule::GetAssignDefineId() const {
    return NAME_None;
}

void UPalMapObjectRequireElementalActionModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectRequireElementalActionModule, AssignDefineId);
}


