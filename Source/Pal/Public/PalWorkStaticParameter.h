#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBoundsTransform.h"
#include "PalWorkAssignLocalLocation.h"
#include "PalWorkStaticParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkStaticParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerMapObjectModelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerMapObjectConcreteModelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalBoundsTransform WorkableBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalWorkAssignLocalLocation> AssignLocalLocations;
    
    PAL_API FPalWorkStaticParameter();
};

