#include "PalDungeonExit.h"

APalDungeonExit::APalDungeonExit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bStartPoint = false;
}

void APalDungeonExit::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalDungeonExit::OnResponseDialogExitDungeon(const bool bResponse) {
}

bool APalDungeonExit::IsStartPoint() const {
    return false;
}

FTransform APalDungeonExit::GetWarpPoint_Implementation() const {
    return FTransform{};
}


