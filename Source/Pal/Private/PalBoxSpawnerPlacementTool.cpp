#include "PalBoxSpawnerPlacementTool.h"
#include "Components/BoxComponent.h"

APalBoxSpawnerPlacementTool::APalBoxSpawnerPlacementTool() {
    this->BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
}

