#pragma once
#include "CoreMinimal.h"
#include "EPalEnergyType.h"
#include "PalBuildObject.h"
#include "PalBuildObjectGenerateEnergy.generated.h"

class UPalWorkBase;

UCLASS(Blueprintable)
class APalBuildObjectGenerateEnergy : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalEnergyType GenerateEnergyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerateEnergyRateByWorker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEnergyStorage;
    
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

