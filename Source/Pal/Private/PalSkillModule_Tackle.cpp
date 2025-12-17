#include "PalSkillModule_Tackle.h"

UPalSkillModule_Tackle::UPalSkillModule_Tackle() {
    this->StartAnimMontage = NULL;
    this->LoopAnimMontage = NULL;
    this->EndAnimMontage = NULL;
    this->AttackTime = 4.00f;
    this->AttackEndTimeForPassed = 0.50f;
    this->YawMultiply = 0.10f;
    this->EndBrakeTime = 0.50f;
    this->MaxSpeedMultiply = 1.70f;
    this->MinSpeedMultiply = 0.00f;
    this->TackleHomingRate = 0.10f;
    this->StartHomingRate = 4.00f;
    this->TackleHomingDistanceLimit = 100.00f;
    this->bIsTackleHoming = true;
    this->bIsEffectSpawnOnGround = true;
    this->EndSkillEffectNotifyName = TEXT("EndSkillEffect");
    this->StartTossinNotifyName = TEXT("StartTossin");
    this->StartEffectNotifyName = TEXT("StartEffect");
    this->StartSkillEffectClass = NULL;
    this->LoopSkillEffectClass = NULL;
    this->StartSkillEffect = NULL;
    this->LoopSkillEffect = NULL;
    this->EndBrakeTimer = 0.00f;
    this->bStopUpdateYaw = false;
    this->TackleState = EPalTackleState::None;
    this->Proxy = NULL;
}

void UPalSkillModule_Tackle::UpdateYaw_Implementation(float DeltaTime) {
}

void UPalSkillModule_Tackle::UpdateVelocity_Implementation(float DeltaTime) {
}

void UPalSkillModule_Tackle::TerminateMotion() {
}

void UPalSkillModule_Tackle::SetFlagName(FName InFlagName) {
}

void UPalSkillModule_Tackle::SetCurrentState(EPalTackleState InState) {
}

void UPalSkillModule_Tackle::ResetTackleTimes() {
}

void UPalSkillModule_Tackle::OnStartTossin_Implementation() {
}

void UPalSkillModule_Tackle::OnMontageNotifyEvent_Implementation(UAnimMontage* Montage, FName NotifyName) {
}

void UPalSkillModule_Tackle::OnMontageEnded_Tackle_Implementation(UAnimMontage* Montage, bool bInterrupted) {
}

void UPalSkillModule_Tackle::OnEndMontageNotifyEnd_Implementation(FName NotifyName) {
}

void UPalSkillModule_Tackle::OnEndMontageNotifyBegin_Implementation(FName NotifyName) {
}

void UPalSkillModule_Tackle::OnEndMontageInterrupted_Implementation(FName NotifyName) {
}

void UPalSkillModule_Tackle::OnEndMontageCompleted_Implementation(FName NotifyName) {
}

void UPalSkillModule_Tackle::OnEndMontageBlendOut_Implementation(FName NotifyName) {
}

void UPalSkillModule_Tackle::OnEndAttack_Implementation() {
}

bool UPalSkillModule_Tackle::IsPlayingEndMontage() const {
    return false;
}

bool UPalSkillModule_Tackle::IsPlayingAnyMontage(const TArray<UAnimMontage*> Montages) const {
    return false;
}

float UPalSkillModule_Tackle::GetTackleTime(EPalTackleState InState) const {
    return 0.0f;
}

float UPalSkillModule_Tackle::GetCurrentTackleTime() const {
    return 0.0f;
}

EPalTackleState UPalSkillModule_Tackle::GetCurrentState() const {
    return EPalTackleState::None;
}

void UPalSkillModule_Tackle::ControlInput_Implementation(float DeltaTime) {
}

bool UPalSkillModule_Tackle::CheckEndHoming_Implementation() {
    return false;
}

bool UPalSkillModule_Tackle::CheckEndCurrentState_Implementation() {
    return false;
}


