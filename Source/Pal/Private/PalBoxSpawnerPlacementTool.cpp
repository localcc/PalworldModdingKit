#include "PalBoxSpawnerPlacementTool.h"
#include "Components/BoxComponent.h"

APalBoxSpawnerPlacementTool::APalBoxSpawnerPlacementTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
}


