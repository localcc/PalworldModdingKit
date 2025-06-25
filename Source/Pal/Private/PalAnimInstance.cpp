#include "PalAnimInstance.h"

UPalAnimInstance::UPalAnimInstance() {
    this->IsRotateYawInterpolation = false;
    this->RotateYawInterpolation_Acceleration = 0.00f;
    this->bOverrideTransform = false;
    this->MoveSpeedOverride = -1.00f;
}

void UPalAnimInstance::SetUseUpperBodyOnlyWhileRidingFlag(FName flagName, bool isUse) {
}

void UPalAnimInstance::SetUpperOverrideDisableFlag(FName flagName, bool isDisable) {
}

void UPalAnimInstance::SetOverrideTransform(const FTransform& InTransform) {
}

void UPalAnimInstance::SetMoveSpeedOverride(const float InMoveSpeed) {
}

void UPalAnimInstance::SetForceSprintForNPC(const bool bOn) {
}

void UPalAnimInstance::SetAdditiveAnimationRate(FName flagName, float Rate) {
}

void UPalAnimInstance::ResetOverrideTransform() {
}

void UPalAnimInstance::ReplaceReservedMontage(const int32 Index, FReserveMontage Montage) {
}

void UPalAnimInstance::ReplaceNextReservedMontage(FReserveMontage Montage) {
}

void UPalAnimInstance::ReplaceCurrentReservedMontage(FReserveMontage Montage) {
}

void UPalAnimInstance::OnMontageEndedCallback(UAnimMontage* Montage, bool bInterrupted) {
}

void UPalAnimInstance::Montage_PlayList(TArray<FReserveMontage> montageList) {
}

bool UPalAnimInstance::IsOverrideTransform() const {
    return false;
}

int32 UPalAnimInstance::GetReservedMontageIndex(UAnimMontage* Montage) const {
    return 0;
}

void UPalAnimInstance::GetOverrideTransform(FTransform& OutTransform) const {
}

UAnimMontage* UPalAnimInstance::GetNextReservedMontage() const {
    return NULL;
}

FName UPalAnimInstance::GetNearBoneInSpines(FVector fromPos) {
    return NAME_None;
}

FName UPalAnimInstance::GetNearBoneInFullBody(FVector fromPos) {
    return NAME_None;
}

UAnimMontage* UPalAnimInstance::GetCurrentReservedMontage() const {
    return NULL;
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

void UPalAnimInstance::ClearMoveSpeedOverride() {
}

void UPalAnimInstance::CalcLength(FName Target, FName nextBone, float tipLength) {
}

void UPalAnimInstance::BodyInstance_SetSimulate(FName BoneName, bool SimulateActive) {
}

void UPalAnimInstance::AddSpinesListFromBoneList(FName BoneName) {
}

void UPalAnimInstance::AddList(FName BoneName) {
}


