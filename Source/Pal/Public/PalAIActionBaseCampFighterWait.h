#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalAIActionBaseCampFighterChildBase.h"
#include "PalAIActionBaseCampFighterWait.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampFighterWait : public UPalAIActionBaseCampFighterChildBase {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampFighterWait();
protected:
    UFUNCTION(BlueprintCallable)
    bool TrySearchEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetWaitLocation(FVector& Location);
    
};

