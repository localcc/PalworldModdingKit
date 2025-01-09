#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectHatchingEggModelBase.h"
#include "PalMapObjectMultiHatchingEggModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectMultiHatchingEggModel : public UPalMapObjectHatchingEggModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectMultiHatchingEggModel();

    UFUNCTION(BlueprintCallable)
    void TryFillIncubator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetPalEggSlotIndexArrayByAddOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<bool> GetHatchedStateArray() const;
    
};

