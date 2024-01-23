#include "PalGuildInfo.h"
#include "Net/UnrealNetwork.h"

void APalGuildInfo::OnRep_Guild(const UPalGroupGuildBase* OldValue) {
}

void APalGuildInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalGuildInfo, GroupID);
    DOREPLIFETIME(APalGuildInfo, Guild);
}

APalGuildInfo::APalGuildInfo() {
    this->Guild = NULL;
}

