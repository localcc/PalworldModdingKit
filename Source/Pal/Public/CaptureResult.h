#pragma once
#include "CoreMinimal.h"
#include "EFailedCaptureType.h"
#include "CaptureResult.generated.h"

USTRUCT(BlueprintType)
struct FCaptureResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestSuccessCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFailedCaptureType FailedCaptureType;
    
    PAL_API FCaptureResult();
};

