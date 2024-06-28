#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorkAssignLocalLocation.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkAssignLocalLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FVector FacingDirection;
    
    PAL_API FPalWorkAssignLocalLocation();
};

