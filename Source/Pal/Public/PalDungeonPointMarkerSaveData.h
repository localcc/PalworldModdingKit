#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameDateTime.h"
#include "PalDungeonPointMarkerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalDungeonPointMarkerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MarkerPointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDateTime NextRespawnGameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConnectedDungeonInstanceId;
    
    PAL_API FPalDungeonPointMarkerSaveData();
};

