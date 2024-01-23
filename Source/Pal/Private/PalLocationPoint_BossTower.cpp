#include "PalLocationPoint_BossTower.h"
#include "Net/UnrealNetwork.h"

APalBossTower* UPalLocationPoint_BossTower::GetBossTower() const {
    return NULL;
}

void UPalLocationPoint_BossTower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPoint_BossTower, BossTower);
}

UPalLocationPoint_BossTower::UPalLocationPoint_BossTower() {
    this->BossTower = NULL;
}

