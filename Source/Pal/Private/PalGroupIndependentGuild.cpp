#include "PalGroupIndependentGuild.h"
#include "Net/UnrealNetwork.h"

UPalGroupIndependentGuild::UPalGroupIndependentGuild() {
}

void UPalGroupIndependentGuild::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGroupIndependentGuild, PlayerUId);
    DOREPLIFETIME(UPalGroupIndependentGuild, PlayerInfo);
}


