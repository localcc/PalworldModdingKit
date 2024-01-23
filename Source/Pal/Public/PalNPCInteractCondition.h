#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalNPCInteractCondition.generated.h"

UCLASS(Blueprintable)
class UPalNPCInteractCondition : public UObject {
    GENERATED_BODY()
public:
    UPalNPCInteractCondition();
    UFUNCTION(BlueprintCallable)
    void SetResult(bool bResult);
    
};

