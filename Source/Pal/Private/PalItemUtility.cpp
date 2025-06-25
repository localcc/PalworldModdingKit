#include "PalItemUtility.h"

UPalItemUtility::UPalItemUtility() {
}

bool UPalItemUtility::TryGetItemVisualBlueprintClass(const UObject* WorldContextObject, const FName StaticItemId, TSoftClassPtr<AActor>& VisualBlueprintClass) {
    return false;
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

bool UPalItemUtility::IsEmptyAllSlots(const TArray<UPalItemSlot*> Slots) {
    return false;
}

bool UPalItemUtility::IsEmpty(const FPalItemAndNum& ItemInfo) {
    return false;
}

void UPalItemUtility::GetProductItemRequiredMaterialInfos(const UObject* WorldContextObject, const UPalMapObjectConcreteModelBase* OwnerConcreteModel, const FName RecipeID, TArray<FPalStaticItemIdAndNum>& OutRequiredMaterialInfos) {
}

void UPalItemUtility::GetProductItemRequiredMaterialInfoMap(const UObject* WorldContextObject, const UPalMapObjectConcreteModelBase* OwnerConcreteModel, const FName RecipeID, TMap<FName, int32>& OutRequiredMaterialInfoMap) {
}

UPalItemSlot* UPalItemUtility::CreateLocalItemSlot(UObject* WorldContextObject, const FName StaticItemId, const int32 Stack) {
    return NULL;
}

void UPalItemUtility::CollectLocalPlayerControllableItemInfos_ByTypeB_WithSort(const UObject* WorldContextObject, TArray<EPalItemTypeB> ItemTypes, TArray<FPalStaticItemIdAndNum>& OutItemInfos, const EPalItemInfoCollectType CollectType) {
}

void UPalItemUtility::CollectLocalPlayerControllableItemInfos_ByTypeB(const UObject* WorldContextObject, TArray<EPalItemTypeB> ItemTypes, TArray<FPalStaticItemIdAndNum>& OutItemInfos, const EPalItemInfoCollectType CollectType) {
}

void UPalItemUtility::CollectLocalPlayerControllableItemInfos(const UObject* WorldContextObject, TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos, const EPalItemInfoCollectType CollectType) {
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


