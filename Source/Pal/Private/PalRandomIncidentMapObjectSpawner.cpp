#include "PalRandomIncidentMapObjectSpawner.h"
#include "Components/SceneComponent.h"

APalRandomIncidentMapObjectSpawner::APalRandomIncidentMapObjectSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void APalRandomIncidentMapObjectSpawner::SpawnEgg(const FName MonsterId, const FVector& SpawnOffset) {
}

void APalRandomIncidentMapObjectSpawner::SpawnDropItem(FName ItemId, int32 DropNum, const FVector& SpawnOffset) {
}

void APalRandomIncidentMapObjectSpawner::OnFinishedSpawningEgg(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}

void APalRandomIncidentMapObjectSpawner::OnFinishedSpawningDropItem(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}


