#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalPlayerLampBase.generated.h"

class UPalTimerPointLightComponent;

UCLASS(Blueprintable)
class PAL_API APalPlayerLampBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPalTimerPointLightComponent*> MyTimerLightComponents;
    
public:
    APalPlayerLampBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLampEnable(bool bEnableLamp, bool bForceCallEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedLampEnable(bool bIsEnable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLampEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalTimerPointLightComponent*> GetTimerLightComponents() const;
    
};

