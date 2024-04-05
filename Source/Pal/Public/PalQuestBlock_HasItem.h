#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_HasItem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_HasItem : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_ItemData, int32> RequireItemMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_HasItem();

private:
    UFUNCTION(BlueprintCallable)
    void CheckItem();
    
};

