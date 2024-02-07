#include "PalAnimInstance.h"

UPalAnimInstance::UPalAnimInstance() {
    this->IsRotateYawInterpolation = false;
    this->RotateYawInterpolation_Acceleration = 0.00f;
}

void UPalAnimInstance::SetUpperOverrideDisableFlag(FName flagName, bool isDisable) {
}

void UPalAnimInstance::SetAdditiveAnimationRate(FName flagName, float Rate) {
}

void UPalAnimInstance::OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UPalAnimInstance::OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UPalAnimInstance::OnMontageEndedCallback(UAnimMontage* Montage, bool bInterrupted) {
}

void UPalAnimInstance::Montage_PlayList(TArray<FReserveMontage> montageList) {
}

FName UPalAnimInstance::GetNearBoneInSpines(FVector fromPos) {
    return NAME_None;
}

FName UPalAnimInstance::GetNearBoneInFullBody(FVector fromPos) {
    return NAME_None;
}

float UPalAnimInstance::GetCurrentMontagePlayTimeToEnd() {
    return 0.0f;
}

FTransform UPalAnimInstance::GetBoneTransform(FName BoneName) {
    return FTransform{};
}

FQuat UPalAnimInstance::GetBoneRotationComponentSpace(FName BoneName) {
    return FQuat{};
}

FQuat UPalAnimInstance::GetBoneRotation(FName BoneName) {
    return FQuat{};
}

FVector UPalAnimInstance::GetBonePosition(FName BoneName) {
    return FVector{};
}

UPalBoneInfo* UPalAnimInstance::GetBoneInfo(FName BoneName) {
    return NULL;
}

void UPalAnimInstance::CalcLength(FName Target, FName nextBone, float tipLength) {
}

void UPalAnimInstance::BodyInstance_SetSimulate(FName BoneName, bool SimulateActive) {
}

void UPalAnimInstance::AddSpinesListFromBoneList(FName BoneName) {
}

void UPalAnimInstance::AddList(FName BoneName) {
}


