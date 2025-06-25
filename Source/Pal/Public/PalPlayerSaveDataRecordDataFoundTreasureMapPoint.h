#pragma once
#include "CoreMinimal.h"
#include "PalPlayerSaveDataRecordDataFoundTreasureMapPoint.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerSaveDataRecordDataFoundTreasureMapPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rarity;
    
    PAL_API FPalPlayerSaveDataRecordDataFoundTreasureMapPoint();
};

