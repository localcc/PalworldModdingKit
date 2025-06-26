#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalMapObjectInstantEffectInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UPalMapObjectInstantEffectInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMapObjectInstantEffectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAllowInstantEffect(int32 RequestPlayerId, AActor* RequestActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteInstantEffect(int32 RequestPlayerId, AActor* RequestActor);
    
};

