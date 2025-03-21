#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalEnemyCampObjectSpawnMapObjectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalEnemyCampObjectSpawnMapObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalEnemyCampObjectSpawnMapObjectComponent(const FObjectInitializer& ObjectInitializer);

};

