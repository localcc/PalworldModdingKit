#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModuleTransportItemDepotInterface.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPalMedicineBoxModel.generated.h"

class UPalMapObjectFunctionAffectedByWorkStatusBase;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPalMedicineBoxModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampModuleTransportItemDepotInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectFunctionAffectedByWorkStatusBase* WorkAffection;
    
public:
    UPalMapObjectPalMedicineBoxModel();


    // Fix for true pure virtual functions not being implemented
};

