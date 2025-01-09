#include "PalBackWeaponBase.h"

APalBackWeaponBase::APalBackWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InFirstOrSecondSlot = false;
    this->IsEquipHand = false;
    this->ownWeaponStaticData = NULL;
    this->ownWeaponDynamicData = NULL;
}

USceneComponent* APalBackWeaponBase::GetMainMesh_Implementation() {
    return NULL;
}

float APalBackWeaponBase::GetDurability() const {
    return 0.0f;
}


