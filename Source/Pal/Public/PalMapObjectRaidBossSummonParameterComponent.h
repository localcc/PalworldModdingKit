#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectRaidBossSummonParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectRaidBossSummonParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectRaidBossSummonParameterComponent(const FObjectInitializer& ObjectInitializer);

};

