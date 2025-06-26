#include "PalUIAimReticleBase.h"

UPalUIAimReticleBase::UPalUIAimReticleBase() {
    this->bHideDefaultReticle = true;
}

bool UPalUIAimReticleBase::ShouldHideDefaultReticle() const {
    return false;
}




UPalStaticItemDataBase* UPalUIAimReticleBase::GetCurrentWeaponStaticItemData() const {
    return NULL;
}

UPalDynamicWeaponItemDataBase* UPalUIAimReticleBase::GetCurrentWeaponDynamicItemData() const {
    return NULL;
}

APalWeaponBase* UPalUIAimReticleBase::GetCurrentWeaponActor() const {
    return NULL;
}

void UPalUIAimReticleBase::DeactivateReticle() {
}

void UPalUIAimReticleBase::ActivateReticle(const FPalItemId& WeaponItemId) {
}


