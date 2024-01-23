#pragma once
#include "CoreMinimal.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_UseStatusPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalQuestBlock_UseStatusPoint : public UPalQuestBlock {
    GENERATED_BODY()
public:
    UPalQuestBlock_UseStatusPoint();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateStatusPoint();
    
};

