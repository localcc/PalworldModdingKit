#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PalHitLocationCalculator.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class UPalHitLocationCalculator : public UObject {
    GENERATED_BODY()
public:
    UPalHitLocationCalculator();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector CalcLocation(UPrimitiveComponent* MyHitComponent, UPrimitiveComponent* OtherHitComponent);
    
};

