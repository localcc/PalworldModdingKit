#include "PalNPCAIWeaponHandle.h"
#include "Templates/SubclassOf.h"

UPalNPCAIWeaponHandle::UPalNPCAIWeaponHandle() {
    this->ShooterHuman = NULL;
    this->FireStateClass = NULL;
}

void UPalNPCAIWeaponHandle::UnequipWeapon() {
}

void UPalNPCAIWeaponHandle::TerminateNPCWeapon() {
}

void UPalNPCAIWeaponHandle::ShootOneBullet() {
}

void UPalNPCAIWeaponHandle::ShootBurstBullet(float PullSecond) {
}

void UPalNPCAIWeaponHandle::ReleaseTrigger() {
}

bool UPalNPCAIWeaponHandle::IsTargetInConeShap() {
    return false;
}

bool UPalNPCAIWeaponHandle::IsNear_NearRange(AActor* TargetActor, float NearRangePlusOffset) {
    return false;
}

bool UPalNPCAIWeaponHandle::IsNear_FarRange(AActor* TargetActor, float FarRangePlusOffset) {
    return false;
}

bool UPalNPCAIWeaponHandle::IsMagazineEmpty() const {
    return false;
}

bool UPalNPCAIWeaponHandle::IsEndInitialize() {
    return false;
}

void UPalNPCAIWeaponHandle::InitializeNPCWeapon(APalWeaponBase* WeaponActor) {
}

bool UPalNPCAIWeaponHandle::GetUseSideDashMovement() {
    return false;
}

float UPalNPCAIWeaponHandle::GetSphereCastRadius() {
    return 0.0f;
}

float UPalNPCAIWeaponHandle::GetShootInterval() {
    return 0.0f;
}

int32 UPalNPCAIWeaponHandle::GetRemainingBullet() {
    return 0;
}

float UPalNPCAIWeaponHandle::GetReloadTime() {
    return 0.0f;
}

float UPalNPCAIWeaponHandle::GetRandomMoveTimeMin() {
    return 0.0f;
}

int32 UPalNPCAIWeaponHandle::GetMaxShootCount() {
    return 0;
}

bool UPalNPCAIWeaponHandle::GetIsMeleeAttackWithGun() {
    return false;
}

TSubclassOf<UPalStateMachineStateBase> UPalNPCAIWeaponHandle::GetFireStateClass() {
    return NULL;
}

TSubclassOf<UPalAIActionBase> UPalNPCAIWeaponHandle::GetCombatClass() {
    return NULL;
}

void UPalNPCAIWeaponHandle::FullReload() {
}

void UPalNPCAIWeaponHandle::EquipWeapon() {
}

void UPalNPCAIWeaponHandle::DecreaseBullet() {
}

void UPalNPCAIWeaponHandle::AimToTarget(AActor* TargetActor, bool Aim, float DeltaTime) {
}


