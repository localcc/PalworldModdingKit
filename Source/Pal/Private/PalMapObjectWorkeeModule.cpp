#include "PalMapObjectWorkeeModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectWorkeeModule::UPalMapObjectWorkeeModule() {
    this->TargetWork = NULL;
}

void UPalMapObjectWorkeeModule::OnRep_TargetWork() {
}

UPalWorkProgress* UPalMapObjectWorkeeModule::GetWorkProgress() const {
    return NULL;
}

UPalWorkBase* UPalMapObjectWorkeeModule::GetWork() const {
    return NULL;
}

void UPalMapObjectWorkeeModule::CallOrRegisterOnReadyWork(FPalMapObjectWorkeeModuleWorkDelegate Delegate) {
}

void UPalMapObjectWorkeeModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectWorkeeModule, TargetWork);
}


