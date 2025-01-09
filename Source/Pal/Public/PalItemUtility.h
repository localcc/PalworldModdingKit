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
class UPalMapObjectConcreteModelBase;
class UPalStaticItemDataBase;

UCLASS(Blueprintable)
class UPalItemUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalItemUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool TryGetItemVisualBlueprintClass(const UObject* WorldContextObject, const FName StaticItemId, TSoftClassPtr<AActor>& VisualBlueprintClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FPalItemRecipe& Recipe);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStatusPointResetItem(const UPalStaticItemDataBase* ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRepairableItem(UObject* WorldContextObject, const FPalItemId& TargetItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmptyAllSlots(const TArray<UPalItemSlot*> Slots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmpty(const FPalItemAndNum& ItemInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetProductItemRequiredMaterialInfos(const UObject* WorldContextObject, const UPalMapObjectConcreteModelBase* OwnerConcreteModel, const FName RecipeID, TArray<FPalStaticItemIdAndNum>& OutRequiredMaterialInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetProductItemRequiredMaterialInfoMap(const UObject* WorldContextObject, const UPalMapObjectConcreteModelBase* OwnerConcreteModel, const FName RecipeID, TMap<FName, int32>& OutRequiredMaterialInfoMap);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPalItemSlot* CreateLocalItemSlot(UObject* WorldContextObject, const FName StaticItemId, const int32 Stack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void CollectLocalPlayerControllableItemInfos(const UObject* WorldContextObject, TArray<FName> StaticItemIds, TArray<FPalStaticItemIdAndNum>& OutItemInfos, const bool bIncludeInRangeBaseCamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanItemLevelUp(const UPalStaticItemDataBase* ItemData, UPalIndividualCharacterParameter* TargetParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanDropFromInventory(const UObject* WorldContextObject, const FName& StaticItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanDisposeFromInventory(const UObject* WorldContextObject, const FName& StaticItemId);
    
};

