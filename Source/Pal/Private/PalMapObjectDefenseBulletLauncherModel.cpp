#include "PalMapObjectDefenseBulletLauncherModel.h"

UPalMapObjectDefenseBulletLauncherModel::UPalMapObjectDefenseBulletLauncherModel() {
    this->remainingBulletsNum = 0;
    this->MagazineSize = 0;
}

void UPalMapObjectDefenseBulletLauncherModel::UseBullet() {
}

void UPalMapObjectDefenseBulletLauncherModel::TurnToTarget(const AActor* TargetActor, float DeltaTime) {
}

bool UPalMapObjectDefenseBulletLauncherModel::TryGetWeapon(APalStationaryWeaponBase*& OutWeapon) const {
    return false;
}

void UPalMapObjectDefenseBulletLauncherModel::SetOwnerCharacter(const APalCharacter* OwnerCharacter) {
}

void UPalMapObjectDefenseBulletLauncherModel::SetEnableTrigger(bool EnableTrigger) {
}

void UPalMapObjectDefenseBulletLauncherModel::ReloadBullets(int32 ReloadBulletsNum) {
}

void UPalMapObjectDefenseBulletLauncherModel::OnUpdateEnergyModuleState(UPalMapObjectEnergyModule* EnergyModule) {
}

int32 UPalMapObjectDefenseBulletLauncherModel::GetRemainingBulletsNum() const {
    return 0;
}

int32 UPalMapObjectDefenseBulletLauncherModel::GetMagazineSize() const {
    return 0;
}

FName UPalMapObjectDefenseBulletLauncherModel::GetBulletName() const {
    return NAME_None;
}

float UPalMapObjectDefenseBulletLauncherModel::GetAttackableDistance() const {
    return 0.0f;
}

float UPalMapObjectDefenseBulletLauncherModel::GetAttackableAngle() const {
    return 0.0f;
}

bool UPalMapObjectDefenseBulletLauncherModel::CanAvailable() const {
    return false;
}


