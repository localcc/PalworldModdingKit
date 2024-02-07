#include "PalWildDrinkWaterSpot.h"

UPalWildDrinkWaterSpot::UPalWildDrinkWaterSpot() {
    this->IsReserved = false;
}

bool UPalWildDrinkWaterSpot::SetAssignPointToMember(TArray<AActor*> MemberList) {
    return false;
}

FVector UPalWildDrinkWaterSpot::GetActorLocation() {
    return FVector{};
}


