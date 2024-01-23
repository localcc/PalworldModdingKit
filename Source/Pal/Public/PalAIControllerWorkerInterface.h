#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "PalAIControllerWorkerInterface.generated.h"

class UPalAIControllerWorkerModule;

UINTERFACE(Blueprintable, MinimalAPI)
class UPalAIControllerWorkerInterface : public UInterface {
    GENERATED_BODY()
};

class IPalAIControllerWorkerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UPalAIControllerWorkerModule> GetWorkerModuleClass();
    
};

