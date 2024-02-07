#include "PalActionBase.h"

UPalActionBase::UPalActionBase() {
    this->bIsEndAction = false;
    this->bCanDeleteInstance = true;
    this->bCanInterruptWaza = true;
    this->bIsChangeWorkAnimPlayRate = true;
    this->bIsChangeWalkableFloorAngle = true;
    this->ActionWalkableFloorAngle = 45.00f;
    this->bIsDisableNavWalk = false;
    this->bIsReflectForClient = false;
}

void UPalActionBase::TickAction_Implementation(float DeltaTime) {
}

void UPalActionBase::SetAnimRateScale(FName flagName, float AnimRateScale) {
}

void UPalActionBase::SendNotify(FName NotifyName) {
}

void UPalActionBase::OnUpdatePassiveSkill(EPalPassiveSkillEffectType EffectType, float Value) {
}

void UPalActionBase::OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType) {
}

void UPalActionBase::OnEndAction_Implementation() {
}

void UPalActionBase::OnChangeCurrentWorkSuitability() {
}

void UPalActionBase::OnBreakAction_Implementation() {
}

void UPalActionBase::OnBeginAction_Implementation() {
}

bool UPalActionBase::IsInServer() const {
    return false;
}

bool UPalActionBase::IsInLocalControlled() const {
    return false;
}

bool UPalActionBase::IsEndAction_Implementation() {
    return false;
}

FVector UPalActionBase::GetTargetLocation() const {
    return FVector{};
}

FString UPalActionBase::GetSimpleName() const {
    return TEXT("");
}

FRandomStream UPalActionBase::GetRandomStream() const {
    return FRandomStream{};
}

int32 UPalActionBase::GetGeneralPurposeIndex() const {
    return 0;
}

FPalNetArchive UPalActionBase::GetBlackboard() const {
    return FPalNetArchive{};
}

FVector UPalActionBase::GetActionVelocity() const {
    return FVector{};
}

AActor* UPalActionBase::GetActionTarget() const {
    return NULL;
}

UPalIndividualCharacterParameter* UPalActionBase::GetActionIndividualCharacterParameter() const {
    return NULL;
}

APalCharacter* UPalActionBase::GetActionCharacter() const {
    return NULL;
}

bool UPalActionBase::CanStepCancel_Implementation() {
    return false;
}

bool UPalActionBase::CanNextActionCancel_Implementation() {
    return false;
}

bool UPalActionBase::CanGainSP_Implementation() {
    return false;
}

bool UPalActionBase::CanDeleteInstance_Implementation() {
    return false;
}

void UPalActionBase::AnimEventSpawn_Implementation() {
}

void UPalActionBase::AnimEventOther_Implementation() {
}

void UPalActionBase::AnimEventAttack_Implementation() {
}


