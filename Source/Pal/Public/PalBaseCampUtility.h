#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalBaseCampUtility.generated.h"

class APalAIController;

UCLASS(Blueprintable)
class UPalBaseCampUtility : public UObject {
    GENERATED_BODY()
public:
    UPalBaseCampUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunnableAction_PalRandomRest_BaseCamp(APalAIController* AIController);
    
};

