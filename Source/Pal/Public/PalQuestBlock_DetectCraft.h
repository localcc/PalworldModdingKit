#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalItemAndNum.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DetectCraft.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_DetectCraft : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData DetectItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowCraftNumCount;
    
public:
    UPalQuestBlock_DetectCraft();
private:
    UFUNCTION(BlueprintCallable)
    void OnCraftItem(TArray<FPalItemAndNum>& ItemInfos);
    
};

