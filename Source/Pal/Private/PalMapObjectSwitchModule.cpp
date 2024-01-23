#include "PalMapObjectSwitchModule.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectSwitchModule::OnRep_SwitchState() {
}

EPalMapObjectSwitchState UPalMapObjectSwitchModule::GetSwitchState() const {
    return EPalMapObjectSwitchState::On;
}

void UPalMapObjectSwitchModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectSwitchModule, SwitchState);
}

UPalMapObjectSwitchModule::UPalMapObjectSwitchModule() {
    this->SwitchState = EPalMapObjectSwitchState::Off;
}

