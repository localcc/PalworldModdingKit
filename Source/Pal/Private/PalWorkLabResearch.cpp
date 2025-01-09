#include "PalWorkLabResearch.h"
#include "Net/UnrealNetwork.h"

UPalWorkLabResearch::UPalWorkLabResearch() {
}

void UPalWorkLabResearch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkLabResearch, ResearchId);
}


