#pragma once
#include "CoreMinimal.h"
#include "PalUIBaseCampWorkFixedAssignInfo.generated.h"

class UPalBaseCampGroupedWorkBase;
class UPalWorkBase;

USTRUCT(BlueprintType)
struct FPalUIBaseCampWorkFixedAssignInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalWorkBase* TargetWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalBaseCampGroupedWorkBase* TargetGroupedWork;
    
    PAL_API FPalUIBaseCampWorkFixedAssignInfo();
};

