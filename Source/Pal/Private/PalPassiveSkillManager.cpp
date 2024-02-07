#include "PalPassiveSkillManager.h"

UPalPassiveSkillManager::UPalPassiveSkillManager() {
    this->PassiveSkillDataTable = NULL;
}

void UPalPassiveSkillManager::OnCreatedDynamicItemDataInServer(UPalDynamicItemDataBase* CreatedItemData, const FPalItemCreateParameter& CreateParameter) {
}

TArray<EPalPassiveSkillEffectType> UPalPassiveSkillManager::GetSkillEffectTypes(FName SkillName) {
    return TArray<EPalPassiveSkillEffectType>();
}

bool UPalPassiveSkillManager::GetSkillData(const FName& SkillName, FPalPassiveSkillDatabaseRow& outSkillData) {
    return false;
}

TArray<FName> UPalPassiveSkillManager::GetPassiveSkillNamesRowName(const TArray<FName>& passiveList) {
    return TArray<FName>();
}

TArray<FPalPassiveSkillEffect> UPalPassiveSkillManager::GetPassiveSkillEffect(const FName& SkillName, bool bTargetToSelf) {
    return TArray<FPalPassiveSkillEffect>();
}

float UPalPassiveSkillManager::GetParameterWithSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType, const TArray<FPalPassiveSkillEffect>& skillEffectList) {
    return 0.0f;
}

FName UPalPassiveSkillManager::GetNameTextId(FName SkillName) {
    return NAME_None;
}


