#pragma once
#include "CoreMinimal.h"
#include "PalDungeonInstanceModelCreateParameter.generated.h"

class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalDungeonInstanceModelCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
    PAL_API FPalDungeonInstanceModelCreateParameter();
};

