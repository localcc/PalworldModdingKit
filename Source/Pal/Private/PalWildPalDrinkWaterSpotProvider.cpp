#include "PalWildPalDrinkWaterSpotProvider.h"

UPalWildPalDrinkWaterSpotProvider::UPalWildPalDrinkWaterSpotProvider() {
}

bool UPalWildPalDrinkWaterSpotProvider::RequestReservation(AActor* LeaderPal, FVector WildPalSpawnerCenter, int32 MemberNum, FGuid& OutSpotID) {
    return false;
}

UPalWildDrinkWaterSpot* UPalWildPalDrinkWaterSpotProvider::FindSpot(FGuid SpotId) {
    return NULL;
}

void UPalWildPalDrinkWaterSpotProvider::CancelReservation(FGuid SpotId) {
}

void UPalWildPalDrinkWaterSpotProvider::AddDrinkWaterSpot(FVector ActorLocation, TArray<FVector> GoalLocations) {
}


