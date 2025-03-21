#include "PalEnemyCampTreasureBoxSpawnerComponent.h"

UPalEnemyCampTreasureBoxSpawnerComponent::UPalEnemyCampTreasureBoxSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLotteryByMultiTreasureBoxLotteryParameters = false;
}

void UPalEnemyCampTreasureBoxSpawnerComponent::OnDisposedSpawnedModel_ServerInternal(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options) {
}



