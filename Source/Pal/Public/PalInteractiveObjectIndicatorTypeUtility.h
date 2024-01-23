#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorTypeUtility.generated.h"

UCLASS(Blueprintable)
class UPalInteractiveObjectIndicatorTypeUtility : public UObject {
    GENERATED_BODY()
public:
    UPalInteractiveObjectIndicatorTypeUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ToText(const UObject* WorldObjectContext, const EPalInteractiveObjectIndicatorType Type);
    
};

