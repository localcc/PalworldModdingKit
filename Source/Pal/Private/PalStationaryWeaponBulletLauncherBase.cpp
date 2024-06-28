#include "PalStationaryWeaponBulletLauncherBase.h"
#include "Net/UnrealNetwork.h"

APalStationaryWeaponBulletLauncherBase::APalStationaryWeaponBulletLauncherBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackableDistance = 3000.00f;
    this->AttackableAnglePitchRange = 40.00f;
    this->AttackableAngleYawRange = 80.00f;
    this->RotateSpeed = 10.00f;
}

FRotator APalStationaryWeaponBulletLauncherBase::RotateLauncherCalculatePostProcess_Implementation(const FRotator& InRotator) {
    return FRotator{};
}

void APalStationaryWeaponBulletLauncherBase::OnRep_LauncherRotator() {
}

float APalStationaryWeaponBulletLauncherBase::GetRotateSpeed() const {
    return 0.0f;
}


FRotator APalStationaryWeaponBulletLauncherBase::GetLauncherRotator() const {
    return FRotator{};
}

float APalStationaryWeaponBulletLauncherBase::GetAttackableAngleYaw() const {
    return 0.0f;
}

float APalStationaryWeaponBulletLauncherBase::GetAttackableAnglePitch() const {
    return 0.0f;
}


void APalStationaryWeaponBulletLauncherBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalStationaryWeaponBulletLauncherBase, LauncherRotator);
}


