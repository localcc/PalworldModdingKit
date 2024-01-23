#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalMonsterControllerBaseCampHungryParameter.h"
#include "PalMonsterControllerBaseCampUtility.generated.h"

class UObject;

UCLASS(Blueprintable)
class UPalMonsterControllerBaseCampUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalMonsterControllerBaseCampUtility();
    UFUNCTION(BlueprintCallable)
    static FPalMonsterControllerBaseCampHungryParameter SetHungryParameterToDefault(const UObject* WorldObjectContext, FPalMonsterControllerBaseCampHungryParameter Parameter);
    
};

