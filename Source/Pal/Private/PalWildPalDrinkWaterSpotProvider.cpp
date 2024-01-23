#include "PalWildPalDrinkWaterSpotProvider.h"

bool UPalWildPalDrinkWaterSpotProvider::RequestReservation(AActor* LeaderPal, FVector WildPalSpawnerCenter, int32 MemberNum, FGuid& OutSpotID) {
    return false;
}

UPalWildDrinkWaterSpot* UPalWildPalDrinkWaterSpotProvider::FindSpot(FGuid SpotID) {
    return NULL;
}

void UPalWildPalDrinkWaterSpotProvider::CancelReservation(FGuid SpotID) {
}

void UPalWildPalDrinkWaterSpotProvider::AddDrinkWaterSpot(FVector ActorLocation, TArray<FVector> GoalLocations) {
}

UPalWildPalDrinkWaterSpotProvider::UPalWildPalDrinkWaterSpotProvider() {
}

