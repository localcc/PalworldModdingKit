#pragma once
#include "CoreMinimal.h"
#include "PalRaidBossAreaInstanceModelCreateParameter.generated.h"

class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalRaidBossAreaInstanceModelCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
    PAL_API FPalRaidBossAreaInstanceModelCreateParameter();
};

