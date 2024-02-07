#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModuleTransportItemDepotInterface.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPalFoodBoxModel.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectPalFoodBoxModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampModuleTransportItemDepotInterface {
    GENERATED_BODY()
public:
    UPalMapObjectPalFoodBoxModel();


    // Fix for true pure virtual functions not being implemented
};

