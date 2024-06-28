#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalOilrigHandledActorInterface.h"
#include "PalOilrigLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalOilrigLightComponent : public UActorComponent, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
    UPalOilrigLightComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeLightColor(bool IsCombat);
    

    // Fix for true pure virtual functions not being implemented
};

