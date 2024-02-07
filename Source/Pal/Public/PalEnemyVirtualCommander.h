#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalEnemyVirtualCommander.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalEnemyVirtualCommander : public AActor {
    GENERATED_BODY()
public:
    APalEnemyVirtualCommander(const FObjectInitializer& ObjectInitializer);

};

