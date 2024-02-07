#include "PalCharacterCameraComponent.h"

UPalCharacterCameraComponent::UPalCharacterCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WalkFOV = 90.00f;
    this->SprintFOV = 100.00f;
    this->SprintFOVInterpSpeed = 1.00f;
    this->PostProcessInterpTime = 0.10f;
    this->DepthOfFieldFocalDistance_NoAim = 0.00f;
    this->DepthOfFieldDepthBlurAmount_NoAim = 1.00f;
    this->DepthOfFieldDepthBlurRadius_NoAim = 0.00f;
    this->DepthOfFieldFstop_NoAim = 4.00f;
    this->DepthOfFieldFocalDistance_Aim = 0.00f;
    this->DepthOfFieldDepthBlurAmount_Aim = 1.00f;
    this->DepthOfFieldDepthBlurRadius_Aim = 0.00f;
    this->DepthOfFieldFstop_Aim = 4.00f;
    this->bIsDynamicDOFFocalDistance = false;
    this->DynamicDOFFocalDistanceSpeed = 100.00f;
    this->DynamicDOFFocalDistanceMAX = 10000.00f;
    this->bIsEnableSpeedBlur = false;
    this->DynamicSpeedBlurMaterial = NULL;
    this->SpeedBlurInterpSpeed = 0.10f;
    this->MinSpeedBlurSpeed = 100.00f;
    this->MaxSpeedBlurSpeed = 500.00f;
    this->MaxSpeedBlurAlpha = 1.00f;
    this->bIsEnableAimBlur = false;
    this->DynamicAimBlurMaterial = NULL;
    this->BlendInAimBlurInterpTime = 0.10f;
    this->BlendOutAimBlurInterpTime = 0.50f;
    this->AimFOVInterpTime = 0.01f;
    this->AimFOV = 75.00f;
    this->RotateSpeedRate = 1.00f;
    this->DynamicSpeedBlurMaterialDynamic = NULL;
    this->DynamicAimBlurMaterialDynamic = NULL;
}

void UPalCharacterCameraComponent::OnStartAim() {
}

void UPalCharacterCameraComponent::OnEndAim() {
}


