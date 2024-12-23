#include "PalMetalDetector.h"
#include "EPalWeaponType.h"

APalMetalDetector::APalMetalDetector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponType = EPalWeaponType::MetalDetector;
    this->IsRequiredBullet = false;
    this->IsUnnecessaryDynamicData = true;
    this->BasePulseInterval = 1.50f;
    this->BasePulseIntervalMin = 0.50f;
    this->BasePulseFadeoutTime = 0.50f;
    this->DetectorRange = 300.00f;
    this->NearestDetectorObject = NULL;
}

void APalMetalDetector::OnChangedHiddenWeapon(bool bInHidden) {
}




