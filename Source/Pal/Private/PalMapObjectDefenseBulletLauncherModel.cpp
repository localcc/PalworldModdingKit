#include "PalMapObjectDefenseBulletLauncherModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectDefenseBulletLauncherModel::UPalMapObjectDefenseBulletLauncherModel() {
    this->remainingBulletsNum = 0;
    this->MagazineSize = 0;
    this->AttackableDistance = 0.00f;
    this->AttackableAngleElevation = 0.00f;
    this->AttackableAngleDepression = 0.00f;
    this->AttackableAngleElevationDot = 0.00f;
    this->AttackableAngleDepressionDot = 0.00f;
}

void UPalMapObjectDefenseBulletLauncherModel::UseBullet() {
}

void UPalMapObjectDefenseBulletLauncherModel::ReloadBullets(int32 ReloadBulletsNum) {
}

void UPalMapObjectDefenseBulletLauncherModel::OnRep_RemainingBulletsNum() {
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

void UPalMapObjectDefenseBulletLauncherModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectDefenseBulletLauncherModel, remainingBulletsNum);
    DOREPLIFETIME(UPalMapObjectDefenseBulletLauncherModel, BulletItemName);
}


