#include "PalDungeonGimmick_BulletLauncher.h"

APalDungeonGimmick_BulletLauncher::APalDungeonGimmick_BulletLauncher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoTriggerOnBeginPlay = false;
    this->LaunchInterval = 0.10f;
    this->bLaunchInfinitely = false;
    this->LaunchCount = 1;
}



