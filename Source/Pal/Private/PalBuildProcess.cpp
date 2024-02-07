#include "PalBuildProcess.h"
#include "Net/UnrealNetwork.h"

UPalBuildProcess::UPalBuildProcess() {
    this->State = EPalBuildProcessState::Completed;
    this->BuildWork = NULL;
}

void UPalBuildProcess::OnRep_StateChanged() {
}

void UPalBuildProcess::OnRep_BuildWork() {
}

void UPalBuildProcess::OnReflectFinishBuildWork(UPalWorkBase* Work) {
}

void UPalBuildProcess::OnFinishWorkInServer(UPalWorkBase* Work) {
}

bool UPalBuildProcess::IsCompleted() const {
    return false;
}

UPalWorkProgress* UPalBuildProcess::GetWorkProgress() const {
    return NULL;
}

void UPalBuildProcess::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBuildProcess, State);
    DOREPLIFETIME(UPalBuildProcess, BuildWork);
}


