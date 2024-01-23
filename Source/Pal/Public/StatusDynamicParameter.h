#pragma once
#include "CoreMinimal.h"
#include "StatusDynamicParameter.generated.h"

USTRUCT(BlueprintType)
struct FStatusDynamicParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneralIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GeneralName;
    
    PAL_API FStatusDynamicParameter();
};

