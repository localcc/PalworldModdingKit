#include "PalBuildObjectGenerateEnergy.h"
#include "Net/UnrealNetwork.h"

APalBuildObjectGenerateEnergy::APalBuildObjectGenerateEnergy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerating = false;
}

void APalBuildObjectGenerateEnergy::OnUpdateWorkAssigned_ServerInternal(UPalWorkBase* Work) {
}


void APalBuildObjectGenerateEnergy::OnRep_Generating(const bool bOldValue) {
}


void APalBuildObjectGenerateEnergy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalBuildObjectGenerateEnergy, bGenerating);
}


