#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalElementType.h"
#include "EPalEnergyType.h"
#include "PalEnergyTypeUtility.generated.h"

UCLASS(Blueprintable)
class UPalEnergyTypeUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalEnergyTypeUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CollectWorkableElementTypes(const EPalEnergyType EnergyType, TArray<EPalElementType>& ElementTypes);
    
};

