#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalItemAndNum.h"
#include "PalItemId.h"
#include "PalItemRecipe.h"
#include "PalStaticItemIdAndNum.h"
#include "PalItemUtility.generated.h"

class AActor;
class UObject;
class UPalIndividualCharacterParameter;
class UPalItemSlot;
class UPalStaticItemDataBase;

UCLASS(Blueprintable)
class UPalItemUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalItemUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool TryGetItemVisualBlueprintClass(const UObject* WorldContextObject, const FName StaticItemId, TSoftClassPtr<AActor>& VisualBlueprintClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestoreWithItem(const UObject* WorldContextObject, FName staticItemName, UPalIndividualCharacterParameter* TargetParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MaterialInfos(const FPalItemRecipe& Recipe, TArray<FPalStaticItemIdAndNum>& NewMaterialInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FPalItemRecipe& Recipe);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStatusPointResetItem(const UPalStaticItemDataBase* ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRepairableItem(UObject* WorldContextObject, const FPalItemId& TargetItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmpty(const FPalItemAndNum& ItemInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRecipeMaterialKindCount(const FPalItemRecipe& Recipe);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalItemSlot* CreateLocalItemSlot(UObject* WorldContextObject, const FName StaticItemId, const int32 Stack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CollectLocalPlayerControllableItemInfos(const UObject* WorldContextObject, TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos, const bool bIncludeInRangeBaseCamp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanUseHealItem(const UObject* WorldContextObject, FName staticItemName, UPalIndividualCharacterParameter* TargetParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanItemLevelUp(const UPalStaticItemDataBase* ItemData, UPalIndividualCharacterParameter* TargetParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanDropFromInventory(const UObject* WorldContextObject, const FName& StaticItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanDisposeFromInventory(const UObject* WorldContextObject, const FName& StaticItemId);
    
};

