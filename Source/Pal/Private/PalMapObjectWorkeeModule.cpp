#include "PalMapObjectWorkeeModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectWorkeeModule::UPalMapObjectWorkeeModule() {
    this->TargetWork = NULL;
    this->bCannotApproachByWork = false;
}

void UPalMapObjectWorkeeModule::OnRep_TargetWork() {
}

void UPalMapObjectWorkeeModule::OnRep_CannotApproachByWork() {
}

UPalWorkProgress* UPalMapObjectWorkeeModule::GetWorkProgress() const {
    return NULL;
}

UPalWorkBase* UPalMapObjectWorkeeModule::GetWork() const {
    return NULL;
}

bool UPalMapObjectWorkeeModule::CannotApproachByWork() const {
    return false;
}

void UPalMapObjectWorkeeModule::CallOrRegisterOnReadyWork(FPalMapObjectWorkeeModuleWorkDelegate Delegate) {
}

void UPalMapObjectWorkeeModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectWorkeeModule, TargetWork);
    DOREPLIFETIME(UPalMapObjectWorkeeModule, bCannotApproachByWork);
}


