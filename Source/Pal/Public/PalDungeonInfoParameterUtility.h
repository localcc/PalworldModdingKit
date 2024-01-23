#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDungeonInfoParameter.h"
#include "PalDungeonInfoParameterUtility.generated.h"

UCLASS(Blueprintable)
class UPalDungeonInfoParameterUtility : public UObject {
    GENERATED_BODY()
public:
    UPalDungeonInfoParameterUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcDisappearRemainSeconds(const UObject* WorldContextObject, const FPalDungeonInfoParameter& InParameter);
    
};

