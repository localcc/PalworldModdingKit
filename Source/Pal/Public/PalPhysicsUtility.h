#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalPhysicsUtility.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class UPalPhysicsUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalPhysicsUtility();
    UFUNCTION(BlueprintCallable)
    static void SetCanEverAffectNavigation(UActorComponent* Component, bool bAffect);
    
};

