#include "PalDynamicArmorItemDataBase.h"
#include "Net/UnrealNetwork.h"

UPalDynamicArmorItemDataBase::UPalDynamicArmorItemDataBase() {
    this->Durability = 0.00f;
    this->MaxDurability = 0.00f;
    this->OldDurability = -1.00f;
}

void UPalDynamicArmorItemDataBase::SetDurability(float NewDurability) {
}

void UPalDynamicArmorItemDataBase::OnRep_Durability() {
}

TArray<FName> UPalDynamicArmorItemDataBase::GetPassiveSkillList() const {
    return TArray<FName>();
}

float UPalDynamicArmorItemDataBase::GetMaxDurability() const {
    return 0.0f;
}

float UPalDynamicArmorItemDataBase::GetDurability() const {
    return 0.0f;
}

void UPalDynamicArmorItemDataBase::DeleteAllPassive() {
}

bool UPalDynamicArmorItemDataBase::ChangePassiveSkill(int32 passiveIndex, FName SkillName) {
    return false;
}

bool UPalDynamicArmorItemDataBase::AddPassiveSkill(FName SkillName) {
    return false;
}

void UPalDynamicArmorItemDataBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalDynamicArmorItemDataBase, Durability);
    DOREPLIFETIME(UPalDynamicArmorItemDataBase, MaxDurability);
    DOREPLIFETIME(UPalDynamicArmorItemDataBase, PassiveSkillList);
}


