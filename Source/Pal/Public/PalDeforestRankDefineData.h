#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectMaterialSubType.h"
#include "PalDeforestRankDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalDeforestRankDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectMaterialSubType MaterialSubType;
    
    PAL_API FPalDeforestRankDefineData();
};

