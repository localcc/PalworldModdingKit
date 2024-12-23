#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalBuildObjectGenerateEnergy.generated.h"

class UPalWorkBase;

UCLASS(Blueprintable)
class APalBuildObjectGenerateEnergy : public APalBuildObject {
    GENERATED_BODY()
public:
    APalBuildObjectGenerateEnergy(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateWorkAssigned_ServerInternal(UPalWorkBase* Work);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartGenerate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndGenerate();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastStartGenerate();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastEndGenerate();
    
};

