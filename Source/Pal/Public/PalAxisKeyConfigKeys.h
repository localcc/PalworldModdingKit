#pragma once
#include "CoreMinimal.h"
#include "EPalKeyConfigAxisFilterType.h"
#include "PalKeyConfigKeys.h"
#include "PalAxisKeyConfigKeys.generated.h"

USTRUCT(BlueprintType)
struct FPalAxisKeyConfigKeys : public FPalKeyConfigKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalKeyConfigAxisFilterType FilterType;
    
    PAL_API FPalAxisKeyConfigKeys();
};

