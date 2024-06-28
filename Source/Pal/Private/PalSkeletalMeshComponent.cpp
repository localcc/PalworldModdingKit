#include "PalSkeletalMeshComponent.h"

UPalSkeletalMeshComponent::UPalSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanRagdoll = false;
    this->ClavicleAdjustDegree = 0.00f;
    this->bUseCustomURO = true;
    this->bIsEnableGroundTilt = false;
    this->PitchAngle = 0.00f;
    this->RollAngle = 0.00f;
    this->TiltingInterpTime = 0.25f;
    this->TiltTimer = 0.00f;
    this->UpdateRate = 0.00f;
    this->EvaluationRate = 0.00f;
    this->CurrentUpdateInterval = 0.00f;
    this->CurrentEvaluationInterval = 0.00f;
    this->OriginalTickInterval = 0.00f;
    this->DefaultAnimRateScale = 0.00f;
    this->PalSkeletalMeshType = EPalSkeletalMeshType::Normal;
    this->CharcterMakeMorphMax = 1.00f;
    this->DisableChangeMesh_ByPlayerDead = false;
    this->DefaultTickOption = EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered;
}

void UPalSkeletalMeshComponent::SetUpdateRate(float InRate, bool bResetCurrentInterval) {
}

void UPalSkeletalMeshComponent::SetTiltDisable(FName flagName, bool bIsDisable) {
}

void UPalSkeletalMeshComponent::SetRuntimeScale(FName flagName, float Scale) {
}

void UPalSkeletalMeshComponent::SetRuntimePitch(FName flagName, float Pitch) {
}

void UPalSkeletalMeshComponent::SetRuntimeAnimRateScale(FName flagName, float RateScale) {
}

void UPalSkeletalMeshComponent::SetEvaluationRate(float InRate, bool bResetCurrentInterval) {
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

float UPalSkeletalMeshComponent::GetUpdateRate() const {
    return 0.0f;
}

EPalSkeletalMeshType UPalSkeletalMeshComponent::GetPalSkeletalMeshType() const {
    return EPalSkeletalMeshType::Normal;
}

float UPalSkeletalMeshComponent::GetEvaluationRate() const {
    return 0.0f;
}

float UPalSkeletalMeshComponent::GetAnimRateScale() {
    return 0.0f;
}

void UPalSkeletalMeshComponent::ChangeVisibilityAnimTick(EPalSkeletalTickLayer SkeletalTickLayer) {
}


