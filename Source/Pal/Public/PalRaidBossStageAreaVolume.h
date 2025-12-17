#pragma once
#include "CoreMinimal.h"
#include "PalStageAreaVolume.h"
#include "PalRaidBossStageAreaVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API APalRaidBossStageAreaVolume : public APalStageAreaVolume {
    GENERATED_BODY()
public:
    APalRaidBossStageAreaVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapActor(AActor* Other);
    
};

