#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampModuleTransportItemDirection.h"
#include "PalBaseCampModuleTransportItemRequirement.h"
#include "PalBoundsTransform.h"
#include "PalInstanceID.h"
#include "PalBaseCampModuleTransportItemStatus.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampModuleTransportItemStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBaseCampModuleTransportItemRequirement Requirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDepot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBoundsTransform DepotLocalBoundsTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid WorkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalInstanceID, FPalBaseCampModuleTransportItemDirection> DirectionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> NotSatisfiedRequirementItemInfoMap;
    
    PAL_API FPalBaseCampModuleTransportItemStatus();
};

