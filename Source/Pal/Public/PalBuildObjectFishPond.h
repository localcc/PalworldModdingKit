#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalBuildObject.h"
#include "PalBuildObjectFishPond.generated.h"

UCLASS(Blueprintable)
class PAL_API APalBuildObjectFishPond : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ChestInteractRef;
    
public:
    APalBuildObjectFishPond(const FObjectInitializer& ObjectInitializer);

};

