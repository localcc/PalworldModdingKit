#pragma once
#include "CoreMinimal.h"
#include "PalDungeonDataLayerAssetSet.generated.h"

class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalDungeonDataLayerAssetSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataLayerAsset*> DataLayers;
    
    PAL_API FPalDungeonDataLayerAssetSet();
};

