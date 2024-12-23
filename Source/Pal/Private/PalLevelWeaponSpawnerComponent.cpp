#include "PalLevelWeaponSpawnerComponent.h"

UPalLevelWeaponSpawnerComponent::UPalLevelWeaponSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LauncherClass = NULL;
    this->LauncherClass_Destroyed = NULL;
    this->AutoSpawnByBeginPlay = false;
    this->SpawnedWeapon = NULL;
}

void UPalLevelWeaponSpawnerComponent::SpawnWeapon() {
}

void UPalLevelWeaponSpawnerComponent::SetGuidByOutside(FGuid ID) {
}

void UPalLevelWeaponSpawnerComponent::ResetInstanceId() {
}

void UPalLevelWeaponSpawnerComponent::OnDestroyedWeapon() {
}

FGuid UPalLevelWeaponSpawnerComponent::GetGuid() {
    return FGuid{};
}




