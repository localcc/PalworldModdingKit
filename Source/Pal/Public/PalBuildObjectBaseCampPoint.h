#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBuildObject.h"
#include "PalBuildObjectBaseCampPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API APalBuildObjectBaseCampPoint : public APalBuildObject {
    GENERATED_BODY()
public:
    APalBuildObjectBaseCampPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetWorkerSpawnLocalTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetFastTravelLocalTransform() const;
    
};

