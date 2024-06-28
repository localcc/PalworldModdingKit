#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDefenseModelBase.h"
#include "PalMapObjectDefenseAttackModelBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectDefenseAttackModelBase : public UPalMapObjectDefenseModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectDefenseAttackModelBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableRunning() const;
    
};

