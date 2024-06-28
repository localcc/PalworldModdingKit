#include "PalItemUtility.h"

UPalItemUtility::UPalItemUtility() {
}

bool UPalItemUtility::TryGetItemVisualBlueprintClass(const UObject* WorldContextObject, const FName StaticItemId, TSoftClassPtr<AActor>& VisualBlueprintClass) {
    return false;
}

void UPalItemUtility::RestoreWithItem(const UObject* WorldContextObject, FName staticItemName, UPalIndividualCharacterParameter* TargetParameter) {
}

void UPalItemUtility::MaterialInfos(const FPalItemRecipe& Recipe, TArray<FPalStaticItemIdAndNum>& NewMaterialInfos) {
}

bool UPalItemUtility::IsValid(const FPalItemRecipe& Recipe) {
    return false;
}

bool UPalItemUtility::IsStatusPointResetItem(const UPalStaticItemDataBase* ItemData) {
    return false;
}

bool UPalItemUtility::IsRepairableItem(UObject* WorldContextObject, const FPalItemId& TargetItemId) {
    return false;
}

bool UPalItemUtility::IsEmpty(const FPalItemAndNum& ItemInfo) {
    return false;
}

int32 UPalItemUtility::GetRecipeMaterialKindCount(const FPalItemRecipe& Recipe) {
    return 0;
}

UPalItemSlot* UPalItemUtility::CreateLocalItemSlot(UObject* WorldContextObject, const FName StaticItemId, const int32 Stack) {
    return NULL;
}

void UPalItemUtility::CollectLocalPlayerControllableItemInfos(const UObject* WorldContextObject, TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos, const bool bIncludeInRangeBaseCamp) {
}

bool UPalItemUtility::CanUseHealItem(const UObject* WorldContextObject, FName staticItemName, UPalIndividualCharacterParameter* TargetParameter) {
    return false;
}

bool UPalItemUtility::CanItemLevelUp(const UPalStaticItemDataBase* ItemData, UPalIndividualCharacterParameter* TargetParameter) {
    return false;
}

bool UPalItemUtility::CanDropFromInventory(const UObject* WorldContextObject, const FName& StaticItemId) {
    return false;
}

bool UPalItemUtility::CanDisposeFromInventory(const UObject* WorldContextObject, const FName& StaticItemId) {
    return false;
}


