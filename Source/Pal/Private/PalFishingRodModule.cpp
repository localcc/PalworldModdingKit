#include "PalFishingRodModule.h"

UPalFishingRodModule::UPalFishingRodModule() {
    this->ActionCharacter = NULL;
    this->CableShootSpeed = 8000.00f;
    this->CableReturnSpeed = 12000.00f;
    this->CableMaxLength = 2100.00f;
    this->CharacterMoveSpeed = 4000.00f;
    this->FishingRodState = EPalFishingRodState::None;
}

void UPalFishingRodModule::TickModule(float DeltaTime) {
}

void UPalFishingRodModule::ShowLine() {
}

void UPalFishingRodModule::ShotCable() {
}

void UPalFishingRodModule::OnStartFishingAction() {
}

void UPalFishingRodModule::OnStartAim() {
}

void UPalFishingRodModule::OnStartAction(const UPalActionBase* action) {
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

void UPalFishingRodModule::Initialize(const FPalFishingRodInitParameter& Parameter) {
}

bool UPalFishingRodModule::CanHitFishingTarget() const {
    return false;
}

void UPalFishingRodModule::CancelFishing() {
}


