#include "PalBackWeaponBase.h"

APalBackWeaponBase::APalBackWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InFirstOrSecondSlot = false;
    this->IsEquipHand = false;
}


