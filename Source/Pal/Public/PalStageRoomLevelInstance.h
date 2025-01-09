#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalLevelInstance.h"
#include "PalStageRoomLevelInstance.generated.h"

UCLASS(Blueprintable)
class PAL_API APalStageRoomLevelInstance : public APalLevelInstance {
    GENERATED_BODY()
public:
    APalStageRoomLevelInstance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FTransform GetPlayerStartTransform() const;
    
};

