#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalAIActionBaseCampReturnBack.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampReturnBack : public UPalAIActionBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampReturnBack();


    // Fix for true pure virtual functions not being implemented
};

