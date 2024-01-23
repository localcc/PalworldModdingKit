#pragma once
#include "CoreMinimal.h"
#include "PalDungeonMarkerPointSpawnParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalDungeonMarkerPointSpawnParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisappearInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisappearIntervalAfterDefeatBoss;
    
    PAL_API FPalDungeonMarkerPointSpawnParameter();
};

