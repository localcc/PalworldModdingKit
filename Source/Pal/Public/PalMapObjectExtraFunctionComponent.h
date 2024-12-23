#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalMapObjectExtraFunctionComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectExtraFunctionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectExtraFunctionComponent(const FObjectInitializer& ObjectInitializer);

};

