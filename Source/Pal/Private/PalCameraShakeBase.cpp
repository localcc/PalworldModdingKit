#include "PalCameraShakeBase.h"

UPalCameraShakeBase::UPalCameraShakeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurveAsset = NULL;
    this->OscillationDuration = 0.00f;
    this->OscillationBlendInTime = 0.00f;
    this->OscillationBlendOutTime = 0.00f;
    this->OscillatorTimeRemaining = 0.00f;
}


