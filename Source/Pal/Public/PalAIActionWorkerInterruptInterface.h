#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalAIActionWorkerInterruptInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalAIActionWorkerInterruptInterface : public UInterface {
    GENERATED_BODY()
};

class IPalAIActionWorkerInterruptInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInterruptibleBySleep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInterruptibleByRecoverHungry() const;
    
};

