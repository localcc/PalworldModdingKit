#include "PalWildDrinkWaterSpot.h"

bool UPalWildDrinkWaterSpot::SetAssignPointToMember(TArray<AActor*> MemberList) {
    return false;
}

FVector UPalWildDrinkWaterSpot::GetActorLocation() {
    return FVector{};
}

UPalWildDrinkWaterSpot::UPalWildDrinkWaterSpot() {
    this->IsReserved = false;
}

