#pragma once
#include "CoreMinimal.h"
#include "PalBuilderRotateOrderInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBuilderRotateOrderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 YCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SnapYCount;
    
    PAL_API FPalBuilderRotateOrderInfo();
};

