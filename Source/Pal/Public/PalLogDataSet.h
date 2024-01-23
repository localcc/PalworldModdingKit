#pragma once
#include "CoreMinimal.h"
#include "PalLogAdditionalData.h"
#include "PalLogDataSet.generated.h"

USTRUCT(BlueprintType)
struct FPalLogDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalLogAdditionalData AdditionalData;
    
    PAL_API FPalLogDataSet();
};

