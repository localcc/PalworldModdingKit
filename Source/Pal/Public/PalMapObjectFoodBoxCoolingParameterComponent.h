#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectFoodBoxCoolingParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectFoodBoxCoolingParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectFoodBoxCoolingParameterComponent(const FObjectInitializer& ObjectInitializer);

};

