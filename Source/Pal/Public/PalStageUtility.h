#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalStageInstanceId.h"
#include "PalStageUtility.generated.h"

UCLASS(Blueprintable)
class UPalStageUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalStageUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_PalStageInstanceId(FPalStageInstanceId A, FPalStageInstanceId B);
    
};

