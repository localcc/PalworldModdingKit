#pragma once
#include "CoreMinimal.h"
#include "EPalWorkType.h"
#include "PalWorkTypeSet.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkTypeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalWorkType> WorkTypes;
    
    PAL_API FPalWorkTypeSet();
};

