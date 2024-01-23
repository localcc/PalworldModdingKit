#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "EPalPlayerInventoryType.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalItemSlotId.h"
#include "PalSelectedItemPlayerInventoryDelegateDelegate.h"
#include "PalHUDDispatchParameter_SelectItemInventory.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_SelectItemInventory : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalPlayerInventoryType> showInventoryTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeA> showItemTypesA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> showItemTypesB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool shouldSelectNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalSelectedItemPlayerInventoryDelegate Callback;
    
    UPalHUDDispatchParameter_SelectItemInventory();
    UFUNCTION(BlueprintCallable)
    void InvokeCallback(const FPalItemSlotId& itemSlotId, const int32 itemNum);
    
};

