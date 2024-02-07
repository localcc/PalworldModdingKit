#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectObtainable.h"
#include "PalLevelObjectRelic.generated.h"

UCLASS(Blueprintable)
class PAL_API APalLevelObjectRelic : public APalLevelObjectObtainable {
    GENERATED_BODY()
public:
    APalLevelObjectRelic(const FObjectInitializer& ObjectInitializer);

};

