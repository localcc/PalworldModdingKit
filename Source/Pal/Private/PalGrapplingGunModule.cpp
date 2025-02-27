#include "PalGrapplingGunModule.h"

UPalGrapplingGunModule::UPalGrapplingGunModule() {
    this->ActionCharacter = NULL;
    this->CableShootSpeed = 8000.00f;
    this->CableReturnSpeed = 12000.00f;
    this->CableMaxLength = 2100.00f;
    this->CharacterMoveSpeed = 4000.00f;
    this->NearCoolTimeDistance = 400.00f;
    this->NearCoolTimeRate = 0.20f;
    this->GrapplingGunState = EPalGrapplingGunState::Idle;
}

void UPalGrapplingGunModule::TickModule_Implementation(float DeltaTime) {
}

void UPalGrapplingGunModule::ShowLine() {
}

void UPalGrapplingGunModule::ShotCable() {
}

void UPalGrapplingGunModule::OnStartGrapplingAction(const FVector& HitLocation) {
}

void UPalGrapplingGunModule::OnStartAction(const UPalActionBase* action) {
}

void UPalGrapplingGunModule::OnEndGrapplingAction() {
}

void UPalGrapplingGunModule::OnDetachWeapon() {
}

void UPalGrapplingGunModule::OnAttachWeapon() {
}

bool UPalGrapplingGunModule::IsGrapplingAction() const {
    return false;
}

void UPalGrapplingGunModule::Initialize(const FPalGrapplingGunInitParameter& Parameter) {
}

bool UPalGrapplingGunModule::CanHitGrapplingTarget() const {
    return false;
}


