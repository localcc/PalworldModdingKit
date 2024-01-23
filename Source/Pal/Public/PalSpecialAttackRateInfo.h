#pragma once
#include "CoreMinimal.h"
#include "EPalSpecialAttackRateType.h"
#include "PalSpecialAttackRateInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSpecialAttackRateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalSpecialAttackRateType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    PAL_API FPalSpecialAttackRateInfo();
};

