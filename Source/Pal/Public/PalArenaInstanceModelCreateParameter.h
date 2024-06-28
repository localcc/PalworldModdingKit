#pragma once
#include "CoreMinimal.h"
#include "PalArenaInstanceModelCreateParameter.generated.h"

class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalArenaInstanceModelCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
    PAL_API FPalArenaInstanceModelCreateParameter();
};

