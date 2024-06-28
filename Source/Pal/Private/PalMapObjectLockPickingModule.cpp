#include "PalMapObjectLockPickingModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectLockPickingModule::UPalMapObjectLockPickingModule() {
    this->bAnyonePicking = false;
}

void UPalMapObjectLockPickingModule::OnEndPickingGame_Client(UPalHUDDispatchParameterBase* Param) {
}

void UPalMapObjectLockPickingModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectLockPickingModule, bAnyonePicking);
}


