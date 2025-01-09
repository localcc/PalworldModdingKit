#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalRaidBossSummonGeneratorBase.generated.h"

UCLASS(Blueprintable)
class PAL_API APalRaidBossSummonGeneratorBase : public AActor {
    GENERATED_BODY()
public:
    APalRaidBossSummonGeneratorBase(const FObjectInitializer& ObjectInitializer);

};

