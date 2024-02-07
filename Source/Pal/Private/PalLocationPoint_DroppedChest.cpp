#include "PalLocationPoint_DroppedChest.h"
#include "Net/UnrealNetwork.h"

UPalLocationPoint_DroppedChest::UPalLocationPoint_DroppedChest() {
}

FGuid UPalLocationPoint_DroppedChest::GetOwnerPlayerUId() const {
    return FGuid{};
}

void UPalLocationPoint_DroppedChest::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPoint_DroppedChest, OwnerPlayerUId);
}


