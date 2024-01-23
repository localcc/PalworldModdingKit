#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "PalMapBaseCampWorkerOrderTypeUtility.generated.h"

UCLASS(Blueprintable)
class UPalMapBaseCampWorkerOrderTypeUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMapBaseCampWorkerOrderTypeUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBattleOrderType(const EPalMapBaseCampWorkerOrderType OrderType);
    
};

