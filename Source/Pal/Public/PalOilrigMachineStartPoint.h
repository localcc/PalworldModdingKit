#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectActor.h"
#include "PalOilrigHandledActorInterface.h"
#include "PalOilrigMachineStartPoint.generated.h"

UCLASS(Blueprintable)
class PAL_API APalOilrigMachineStartPoint : public APalLevelObjectActor, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
    APalOilrigMachineStartPoint(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

