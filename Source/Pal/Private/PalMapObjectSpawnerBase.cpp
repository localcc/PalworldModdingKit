#include "PalMapObjectSpawnerBase.h"
#include "Components/SceneComponent.h"

APalMapObjectSpawnerBase::APalMapObjectSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ProbabilityRespawn = 100;
    this->LotteryCoolTimeMinutes = 60.00f;
    this->LocateSphere = NULL;
    this->State = EPalMapObjectSpawnerState::Init;
}

void APalMapObjectSpawnerBase::OnWorldMapObjectSpawnableInServer() {
}


