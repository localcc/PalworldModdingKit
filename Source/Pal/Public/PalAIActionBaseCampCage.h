#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBase.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalAIActionBaseCampCage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalAIActionBaseCampCage : public UPalAIActionBase, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    UPalAIActionBaseCampCage();


    // Fix for true pure virtual functions not being implemented
};

