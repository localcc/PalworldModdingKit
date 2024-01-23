#include "PalDungeonExit.h"

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

APalDungeonExit::APalDungeonExit() {
    this->bStartPoint = false;
}

