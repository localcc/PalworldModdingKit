#include "PalEquipWeaponShooterComponent.h"
#include "Templates/SubclassOf.h"

UPalEquipWeaponShooterComponent::UPalEquipWeaponShooterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalEquipWeaponShooterComponent::SetWeapon_ForDebug_DirectBP(EPalMonsterEquipWeaponSocketType SocketType, TSubclassOf<APalMonsterEquipWeaponBase> WeaponActorClass) {
}

void UPalEquipWeaponShooterComponent::SetWeapon_ForDebug(EPalMonsterEquipWeaponSocketType SocketType, FName ItemName) {
}

void UPalEquipWeaponShooterComponent::PullTrigger() {
}


