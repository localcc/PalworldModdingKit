#include "PalUniqueRideWeaponBase.h"
#include "Templates/SubclassOf.h"

APalUniqueRideWeaponBase::APalUniqueRideWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APalUniqueRideWeaponBase::ShootOneBulletByDefault() {
}

void APalUniqueRideWeaponBase::ShootOneBullet(TSubclassOf<APalBullet> bulletClass, UNiagaraSystem* MuzzleEffect, FVector MuzzleLocation, FRotator MuzzleRotate, float BulrAngle, TSubclassOf<AActor> AmmoClass, FTransform AmmoEject) {
}

void APalUniqueRideWeaponBase::OnUniqueShoot() {
}


void APalUniqueRideWeaponBase::OnActionCompleted(const UPalActionComponent* ActionComp) {
}

void APalUniqueRideWeaponBase::OnActionBegin(const UPalActionBase* action) {
}




FVector APalUniqueRideWeaponBase::GetCommonTargetLocation() {
    return FVector{};
}






bool APalUniqueRideWeaponBase::CanUse() {
    return false;
}


