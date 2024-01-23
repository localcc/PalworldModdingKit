#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectSpawnerItemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerItemSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 NextLotteryGameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MapObjectInstanceId;
    
    PAL_API FPalMapObjectSpawnerItemSaveData();
};

