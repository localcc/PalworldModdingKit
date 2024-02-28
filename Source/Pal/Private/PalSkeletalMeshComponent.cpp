#include "PalSkeletalMeshComponent.h"

UPalSkeletalMeshComponent::UPalSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanRagdoll = false;
    this->ClavicleAdjustDegree = 0.00f;
    this->bIsEnableGroundTilt = false;
    this->PitchAngle = 0.00f;
    this->RollAngle = 0.00f;
    this->TiltingInterpTime = 0.25f;
    this->TiltTimer = 0.00f;
    this->DefaultAnimRateScale = 0.00f;
    this->PalSkeletalMeshType = EPalSkeletalMeshType::Normal;
    this->CharcterMakeMorphMax = 1.00f;
    this->DisableChangeMesh_ByPlayerDead = false;
    this->DefaultTickOption = EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered;
}

void UPalSkeletalMeshComponent::SetTiltDisable(FName flagName, bool bIsDisable) {
}

void UPalSkeletalMeshComponent::SetRuntimeScale(FName flagName, float Scale) {
}

void UPalSkeletalMeshComponent::SetRuntimePitch(FName flagName, float Pitch) {
}

void UPalSkeletalMeshComponent::SetRuntimeAnimRateScale(FName flagName, float RateScale) {
}

void UPalSkeletalMeshComponent::SetEnableRagdollCCD(bool IsActive) {
}

void UPalSkeletalMeshComponent::SetDisableChangeMesh(bool Disable) {
}

void UPalSkeletalMeshComponent::SetCharacterMakeInfo(const FPalPlayerDataCharacterMakeInfo& Info) {
}

void UPalSkeletalMeshComponent::ResetTransformToDefault() {
}

bool UPalSkeletalMeshComponent::IsDisableTilt() const {
    return false;
}

EPalSkeletalMeshType UPalSkeletalMeshComponent::GetPalSkeletalMeshType() const {
    return EPalSkeletalMeshType::Normal;
}

float UPalSkeletalMeshComponent::GetAnimRateScale() {
    return 0.0f;
}

void UPalSkeletalMeshComponent::ChangeVisibilityAnimTick(EPalSkeletalTickLayer SkeletalTickLayer) {
}


