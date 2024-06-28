#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModuleTransportItemDepotInterface.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPalFoodBoxModel.generated.h"

class UPalMapObjectFunctionAffectedByWorkStatusBase;

UCLASS(Blueprintable)
class UPalMapObjectPalFoodBoxModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampModuleTransportItemDepotInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectFunctionAffectedByWorkStatusBase* WorkAffection;
    
public:
    UPalMapObjectPalFoodBoxModel();


    // Fix for true pure virtual functions not being implemented
};

