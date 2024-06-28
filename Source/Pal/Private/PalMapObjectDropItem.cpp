#include "PalMapObjectDropItem.h"
#include "Net/UnrealNetwork.h"

APalMapObjectDropItem::APalMapObjectDropItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMovementActive = false;
}

void APalMapObjectDropItem::StopMovement_Multicast_Implementation(const FVector& Location, const FRotator& Rotation) {
}

void APalMapObjectDropItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalMapObjectDropItem, bMovementActive);
}


