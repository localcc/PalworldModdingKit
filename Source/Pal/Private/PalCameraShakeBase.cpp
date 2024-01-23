#include "PalCameraShakeBase.h"

UPalCameraShakeBase::UPalCameraShakeBase() : UCameraShakeBase(FObjectInitializer()) {
    this->CurveAsset = NULL;
    this->OscillationDuration = 0.00f;
    this->OscillationBlendInTime = 0.00f;
    this->OscillationBlendOutTime = 0.00f;
    this->OscillatorTimeRemaining = 0.00f;
}

