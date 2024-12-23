#pragma once
#include "CoreMinimal.h"
#include "PalRaidBossSummonPalInfo.h"
#include "PalRaidBossSummonMeteorInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidBossSummonMeteorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRaidBossSummonPalInfo> SummonPalInfoList;
    
    PAL_API FPalRaidBossSummonMeteorInfo();
};

