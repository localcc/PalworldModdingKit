#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampModuleTransportItemRequirement.h"
#include "PalBoundsTransform.h"
#include "PalBaseCampModuleTransportItemDepotParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampModuleTransportItemDepotParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerMapObjectConcreteModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBoundsTransform DepotLocalBoundsTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBaseCampModuleTransportItemRequirement Requirement;
    
    PAL_API FPalBaseCampModuleTransportItemDepotParameter();
};

