#include "PalMapObjectModelEffect.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectModelEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelEffect, RepInfoArray);
}

UPalMapObjectModelEffect::UPalMapObjectModelEffect() {
}

