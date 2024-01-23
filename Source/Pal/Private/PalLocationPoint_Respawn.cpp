#include "PalLocationPoint_Respawn.h"
#include "Net/UnrealNetwork.h"

void UPalLocationPoint_Respawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPoint_Respawn, RespawnPointID);
}

UPalLocationPoint_Respawn::UPalLocationPoint_Respawn() {
}

