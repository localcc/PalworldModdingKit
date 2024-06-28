#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFunctionAffectedByWorkStatusBase.h"
#include "PalMapObjectFunctionAffectItemCorruptionByWorkStatus.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectFunctionAffectItemCorruptionByWorkStatus : public UPalMapObjectFunctionAffectedByWorkStatusBase {
    GENERATED_BODY()
public:
    UPalMapObjectFunctionAffectItemCorruptionByWorkStatus();

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerContent(UPalItemContainer* Container);
    
};

