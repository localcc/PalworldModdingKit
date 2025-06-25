#include "PalDungeonGimmick_DamageVolume.h"

APalDungeonGimmick_DamageVolume::APalDungeonGimmick_DamageVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoTriggerOnBeginPlay = false;
    this->DamageValue = 100.00f;
    this->ActiveCooldown = 1.00f;
    this->ActiveInterval = 1.00f;
    this->bLaunchInfinitely = false;
}



