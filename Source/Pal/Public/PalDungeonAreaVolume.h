#pragma once
#include "CoreMinimal.h"
#include "PalStageAreaVolume.h"
#include "PalDungeonAreaVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API APalDungeonAreaVolume : public APalStageAreaVolume {
    GENERATED_BODY()
public:
    APalDungeonAreaVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapActor(AActor* Other);
    
};

