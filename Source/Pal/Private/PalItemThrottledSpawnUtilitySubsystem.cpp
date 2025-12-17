#include "PalItemThrottledSpawnUtilitySubsystem.h"

UPalItemThrottledSpawnUtilitySubsystem::UPalItemThrottledSpawnUtilitySubsystem() {
    this->SpawnedItems = 0;
    this->ElapsedSpawnTime = 0.00f;
}

int32 UPalItemThrottledSpawnUtilitySubsystem::IncreaseGridSpawnCounter(const FVector& Location) {
    return 0;
}

uint64 UPalItemThrottledSpawnUtilitySubsystem::GetGridKey(const FVector& Location) const {
    return 0;
}

int32 UPalItemThrottledSpawnUtilitySubsystem::GetCurrentFrameSpawnLimit() const {
    return 0;
}

int32 UPalItemThrottledSpawnUtilitySubsystem::DecreaseGridSpawnCounter(const FVector& Location) {
    return 0;
}

bool UPalItemThrottledSpawnUtilitySubsystem::CanSpawnInGrid(const FVector& Location) const {
    return false;
}


