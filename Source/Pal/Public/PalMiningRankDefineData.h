#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectMaterialSubType.h"
#include "PalMiningRankDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalMiningRankDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectMaterialSubType MaterialSubType;
    
    PAL_API FPalMiningRankDefineData();
};

