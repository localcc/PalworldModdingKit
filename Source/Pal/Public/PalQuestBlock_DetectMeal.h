#pragma once
#include "CoreMinimal.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DetectMeal.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_DetectMeal : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowMealCount;
    
public:
    UPalQuestBlock_DetectMeal();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriedMeal();
    
};

