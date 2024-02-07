#include "PalMapObjectModelEffect.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelEffect::UPalMapObjectModelEffect() {
}

void UPalMapObjectModelEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelEffect, RepInfoArray);
}


