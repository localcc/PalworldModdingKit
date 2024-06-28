#include "PalPassiveSkillManager.h"

UPalPassiveSkillManager::UPalPassiveSkillManager() {
    this->PassiveSkillDataTable = NULL;
}

void UPalPassiveSkillManager::OnCreatedDynamicItemDataInServer(UPalDynamicItemDataBase* CreatedItemData, const FPalItemCreateParameter& CreateParameter) {
}

TArray<EPalPassiveSkillEffectType> UPalPassiveSkillManager::GetSkillEffectTypes(FName SkillName) {
    return TArray<EPalPassiveSkillEffectType>();
}

float UPalPassiveSkillManager::GetSkillEffectTotalValue(EPalPassiveSkillEffectType EffectType, const TArray<FPalPassiveSkillEffect>& skillEffectList) {
    return 0.0f;
}

bool UPalPassiveSkillManager::GetSkillData(const FName& SkillName, FPalPassiveSkillDatabaseRow& outSkillData) {
    return false;
}

TArray<FName> UPalPassiveSkillManager::GetPassiveSkillNamesRowName(const TArray<FName>& passiveList) {
    return TArray<FName>();
}

TArray<FPalPassiveSkillEffect> UPalPassiveSkillManager::GetPassiveSkillEffect(const FName& SkillName, bool bTargetToSelf, bool bTargetToOtherPal, EPalPassiveSkillEffectTargetType targetType) {
    return TArray<FPalPassiveSkillEffect>();
}

float UPalPassiveSkillManager::GetParameterWithSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType, const TArray<FPalPassiveSkillEffect>& skillEffectList) {
    return 0.0f;
}

FName UPalPassiveSkillManager::GetNameTextId(FName SkillName) {
    return NAME_None;
}


