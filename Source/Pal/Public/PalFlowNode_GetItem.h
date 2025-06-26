#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalNetworkNPCTalkRequestData.h"
#include "PalFlowNode_GetItem.generated.h"

class UDataTable;
class UObject;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalFlowNode_GetItem : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_ItemData, int32> GetItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LotteryDataTable;
    
public:
    UPalFlowNode_GetItem();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    void OnGetItemInServer(const UObject* WorldContextObject, const FGuid& PlayerUId, const FPalNetworkNPCTalkRequestData& RequestData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LotteryItemAndNum(const UDataTable* PresentLotteryDataTable, FName& OutItemName, int32& OutNum);
    
};

