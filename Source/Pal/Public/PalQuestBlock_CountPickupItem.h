#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalItemAndNum.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CountPickupItem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_CountPickupItem : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData DetectItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=NotifyUpdateQuest_Client, meta=(AllowPrivateAccess=true))
    int32 NowPickupCount;
    
public:
    UPalQuestBlock_CountPickupItem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnPickupItem(TArray<FPalItemAndNum>& ItemInfos);
    
};

