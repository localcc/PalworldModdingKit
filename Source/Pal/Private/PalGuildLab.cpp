#include "PalGuildLab.h"
#include "Net/UnrealNetwork.h"

UPalGuildLab::UPalGuildLab() {
}

void UPalGuildLab::OnRep_CurrentResearchId(const FName OldValue) {
}

void UPalGuildLab::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGuildLab, ResearchRepInfoArray);
    DOREPLIFETIME(UPalGuildLab, ResearchEffectRepInfoArray);
    DOREPLIFETIME(UPalGuildLab, CurrentResearchId);
}


