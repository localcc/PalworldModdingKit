#include "PalFishingRodModule.h"

UPalFishingRodModule::UPalFishingRodModule() {
    this->ActionCharacter = NULL;
    this->FishingRodState = EPalFishingRodState::None;
    this->TargetSpot = NULL;
    this->PreTargetFishShadow = NULL;
    this->TargetFishShadow = NULL;
}

void UPalFishingRodModule::TickModule(float DeltaTime) {
}

void UPalFishingRodModule::ShotCable() {
}

void UPalFishingRodModule::SetFloatLocation(const FVector& InLocation) {
}

void UPalFishingRodModule::OnStartWaitPick() {
}

void UPalFishingRodModule::OnStartFishingAction() {
}

void UPalFishingRodModule::OnStartAim() {
}

void UPalFishingRodModule::OnStartAction(const UPalActionBase* action) {
}

void UPalFishingRodModule::OnPickStart() {
}

void UPalFishingRodModule::OnEndFishingAction() {
}

void UPalFishingRodModule::OnEndAim() {
}

void UPalFishingRodModule::OnEndAction() {
}

void UPalFishingRodModule::OnDetachWeapon() {
}

void UPalFishingRodModule::OnAttachWeapon() {
}

bool UPalFishingRodModule::IsFishingAction() const {
    return false;
}

void UPalFishingRodModule::Initialize(const FPalFishingRodInitParameter& Parameter, APalCharacter* InActionCharacter) {
}

APalFishShadow* UPalFishingRodModule::GetTargetFishShadow() const {
    return NULL;
}

FVector UPalFishingRodModule::GetFloatLocation() const {
    return FVector{};
}

void UPalFishingRodModule::DebugShowLine() {
}

bool UPalFishingRodModule::CanHitFishingTarget() {
    return false;
}

void UPalFishingRodModule::CancelFishing() {
}


