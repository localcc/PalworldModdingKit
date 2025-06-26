#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectActor.h"
#include "PalTreasureMapPoint.generated.h"

class APalTreasureMapInteractivePoint;

UCLASS(Blueprintable)
class PAL_API APalTreasureMapPoint : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalTreasureMapInteractivePoint* InteractivePoint;
    
public:
    APalTreasureMapPoint(const FObjectInitializer& ObjectInitializer);

};

