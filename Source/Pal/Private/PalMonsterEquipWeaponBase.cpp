#include "PalMonsterEquipWeaponBase.h"
#include "Templates/SubclassOf.h"

APalMonsterEquipWeaponBase::APalMonsterEquipWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

APalBullet* APalMonsterEquipWeaponBase::ShootOneBulletDefault() {
    return NULL;
}

APalBullet* APalMonsterEquipWeaponBase::ShootOneBullet(TSubclassOf<APalBullet> BulletClass, UNiagaraSystem* MuzzleEffect, FVector MuzzleLocation, FRotator MuzzleRotate, float BulrAngle) {
    return NULL;
}




FVector APalMonsterEquipWeaponBase::GetCommonTargetLocation() {
    return FVector{};
}




