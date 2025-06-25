#pragma once
#include "CoreMinimal.h"
#include "PalLocationPoint.h"
#include "PalLocationPoint_TreasureMapPoint.generated.h"

UCLASS(Blueprintable)
class UPalLocationPoint_TreasureMapPoint : public UPalLocationPoint {
    GENERATED_BODY()
public:
    UPalLocationPoint_TreasureMapPoint();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRarity() const;
    
};

