#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalItemAndNum.h"
#include "PalItemId.h"
#include "PalItemSlotId.h"
#include "PalUIBaseCampItemDispenserModel.generated.h"

class UPalBaseCampFunctionModuleBase;
class UPalBaseCampModel;
class UPalBaseCampModuleItemStackInfo;
class UPalUIBaseCampItemDispenserModel;

UCLASS(Blueprintable)
class PAL_API UPalUIBaseCampItemDispenserModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalUIBaseCampItemDispenserModel*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateItemStackInBaseCampDelegate;
    
    UPalUIBaseCampItemDispenserModel();

    UFUNCTION(BlueprintCallable)
    void RequestStartReplicateItemStackInfo();
    
    UFUNCTION(BlueprintCallable)
    void RequestMoveItemToInventory(const FPalItemId& ItemId, int32 StackCount);
    
    UFUNCTION(BlueprintCallable)
    void RequestMoveInventoryItemToBaseCamp(const TArray<FPalItemSlotId>& InventoryItemSlotIds);
    
    UFUNCTION(BlueprintCallable)
    void RequestEndReplicateItemStackInfo();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemStackRepInfo(UPalBaseCampModuleItemStackInfo* ItemStackInfoModule);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyModuleItemStackInfo(UPalBaseCampModel* Model, UPalBaseCampFunctionModuleBase* Module);
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_RequestMoveInventoryItemToBaseCamp_ByItemName(const FName StaticItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CollectItemStackInfo(TArray<FPalItemAndNum>& OutArray, TArray<FName>& OutIdArray) const;
    
};

