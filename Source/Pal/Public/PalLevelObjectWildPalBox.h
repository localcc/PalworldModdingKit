#pragma once
#include "CoreMinimal.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectWildPalBox.generated.h"

UCLASS(Blueprintable)
class APalLevelObjectWildPalBox : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    APalLevelObjectWildPalBox(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

