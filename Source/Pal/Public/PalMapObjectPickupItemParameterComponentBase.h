#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectPickupItemParameterComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectPickupItemParameterComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectPickupItemParameterComponentBase(const FObjectInitializer& ObjectInitializer);

};

