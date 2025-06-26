#include "PalUVEyeComponent.h"

UPalUVEyeComponent::UPalUVEyeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EyeMaterialIndex = 0;
    this->InterpSpeed = 1.00f;
    this->UVOffsetParameterName = TEXT("UVOffset0");
    this->Target = NULL;
    this->EyeMaterial = NULL;
    this->MeshComponent = NULL;
    this->bIsEnabled = false;
}

void UPalUVEyeComponent::SetUVEyeDisableFlag(FName flagName, bool bIsDisable) {
}

void UPalUVEyeComponent::SetTargetLocationDirect(FVector InLocation) {
}

void UPalUVEyeComponent::SetTargetActor(USceneComponent* InTarget, FName InBoneName) {
}

void UPalUVEyeComponent::SetEyeCurve(float InX, float InY) {
}

void UPalUVEyeComponent::ResetEyeCurve() {
}

bool UPalUVEyeComponent::IsEyeMovementEnabled() const {
    return false;
}

bool UPalUVEyeComponent::GetUVEyeDisableFlag() const {
    return false;
}

void UPalUVEyeComponent::EnableEyeMovement(bool bEnable) {
}


