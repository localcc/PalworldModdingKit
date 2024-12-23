#include "PalMapObjectRequireElementalActionModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectRequireElementalActionModule::UPalMapObjectRequireElementalActionModule() {
    this->bExistsAssignLocation = false;
}

FName UPalMapObjectRequireElementalActionModule::GetAssignDefineId() const {
    return NAME_None;
}

void UPalMapObjectRequireElementalActionModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectRequireElementalActionModule, AssignDefineId);
}


