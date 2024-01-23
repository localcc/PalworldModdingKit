#pragma once
#include "CoreMinimal.h"
#include "PalWorkAssignInfo.generated.h"

class UPalWorkAssign;

USTRUCT(BlueprintType)
struct FPalWorkAssignInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LocationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalWorkAssign* WorkAssign;
    
    PAL_API FPalWorkAssignInfo();
};

