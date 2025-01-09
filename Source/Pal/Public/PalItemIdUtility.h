#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalItemId.h"
#include "PalItemIdUtility.generated.h"

UCLASS(Blueprintable)
class UPalItemIdUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalItemIdUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPalItemId Debug_CreateItemId(const FName StaticItemId);
    
};

