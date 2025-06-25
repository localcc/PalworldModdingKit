#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPlayerBedModuleOwnerInterface.h"
#include "PalMapObjectPlayerBedModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPlayerBedModel : public UPalMapObjectConcreteModelBase, public IPalMapObjectPlayerBedModuleOwnerInterface {
    GENERATED_BODY()
public:
    UPalMapObjectPlayerBedModel();

    
    // Fix for true pure virtual functions not being implemented
};

