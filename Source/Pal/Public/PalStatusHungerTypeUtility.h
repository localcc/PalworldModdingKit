#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPalStatusHungerType.h"
#include "PalStatusHungerTypeUtility.generated.h"

UCLASS(Blueprintable)
class UPalStatusHungerTypeUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalStatusHungerTypeUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHunger(EPalStatusHungerType Type);
    
};

