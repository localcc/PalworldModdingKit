#include "PalDynamicWeaponItemDataBase.h"
#include "Net/UnrealNetwork.h"

UPalDynamicWeaponItemDataBase::UPalDynamicWeaponItemDataBase() {
    this->Durability = 0.00f;
    this->MaxDurability = 0.00f;
    this->OldDurability = -1.00f;
    this->RemainingBullets = 0;
    this->bIsEmptyBulletInventory = false;
    this->ForceUpdateBulletsCounter = 0;
}

int32 UPalDynamicWeaponItemDataBase::UseBullets(int32 UseNum) {
    return 0;
}

bool UPalDynamicWeaponItemDataBase::UseBullet() {
    return false;
}

void UPalDynamicWeaponItemDataBase::SetReloadStartRemainingBullets_Local(int32 bulletsNum) {
}

void UPalDynamicWeaponItemDataBase::SetDurabilityInternal(float NewDurability) {
}

void UPalDynamicWeaponItemDataBase::SetBulletsNum(int32 bulletsNum) {
}

void UPalDynamicWeaponItemDataBase::ResetReloadStartRemainingBullets_Local() {
}

void UPalDynamicWeaponItemDataBase::OnRep_ForceUpdateBulletsCounter() {
}

void UPalDynamicWeaponItemDataBase::OnRep_Durability() {
}

bool UPalDynamicWeaponItemDataBase::IsEmptyMagazine() const {
    return false;
}

bool UPalDynamicWeaponItemDataBase::IsEmptyBulletInventory() const {
    return false;
}

int32 UPalDynamicWeaponItemDataBase::GetRemainingBulletsNum() const {
    return 0;
}

int32 UPalDynamicWeaponItemDataBase::GetReloadStartRemainingBullets_Local() const {
    return 0;
}

TArray<FName> UPalDynamicWeaponItemDataBase::GetPassiveSkillList() const {
    return TArray<FName>();
}

float UPalDynamicWeaponItemDataBase::GetMaxDurability() const {
    return 0.0f;
}

float UPalDynamicWeaponItemDataBase::GetDurability() const {
    return 0.0f;
}

void UPalDynamicWeaponItemDataBase::DeleteAllPassive() {
}

bool UPalDynamicWeaponItemDataBase::ChangePassiveSkill(int32 passiveIndex, FName SkillName) {
    return false;
}

bool UPalDynamicWeaponItemDataBase::AddPassiveSkill(FName SkillName) {
    return false;
}

void UPalDynamicWeaponItemDataBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalDynamicWeaponItemDataBase, Durability);
    DOREPLIFETIME(UPalDynamicWeaponItemDataBase, MaxDurability);
    DOREPLIFETIME(UPalDynamicWeaponItemDataBase, RemainingBullets);
    DOREPLIFETIME(UPalDynamicWeaponItemDataBase, bIsEmptyBulletInventory);
    DOREPLIFETIME(UPalDynamicWeaponItemDataBase, PassiveSkillList);
    DOREPLIFETIME(UPalDynamicWeaponItemDataBase, ForceUpdateBulletsCounter);
}


