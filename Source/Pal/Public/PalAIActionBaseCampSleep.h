#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBaseCampBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalAIActionBaseCampSleep.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampSleep : public UPalAIActionBaseCampBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampSleep();


    // Fix for true pure virtual functions not being implemented
};

