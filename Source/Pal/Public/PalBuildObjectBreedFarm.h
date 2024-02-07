#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalBuildObject.h"
#include "PalBuildObjectBreedFarm.generated.h"

UCLASS(Blueprintable)
class PAL_API APalBuildObjectBreedFarm : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ChestInteractRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference WalkAroundVolumeRef;
    
public:
    APalBuildObjectBreedFarm(const FObjectInitializer& ObjectInitializer);

};

