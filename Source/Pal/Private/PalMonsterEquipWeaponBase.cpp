#include "PalMonsterEquipWeaponBase.h"
#include "Templates/SubclassOf.h"

APalBullet* APalMonsterEquipWeaponBase::ShootOneBulletDefault() {
    return NULL;
}

APalBullet* APalMonsterEquipWeaponBase::ShootOneBullet(TSubclassOf<APalBullet> bulletClass, UNiagaraSystem* MuzzleEffect, FVector MuzzleLocation, FRotator MuzzleRotate, float BulrAngle) {
    return NULL;
}




FVector APalMonsterEquipWeaponBase::GetCommonTargetLocation() {
    return FVector{};
}



APalMonsterEquipWeaponBase::APalMonsterEquipWeaponBase() {
}

