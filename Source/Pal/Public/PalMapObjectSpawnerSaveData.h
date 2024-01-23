#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectSpawnerItemSaveData.h"
#include "PalMapObjectSpawnerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSpawnerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPalMapObjectSpawnerItemSaveData> ItemMap;
    
    PAL_API FPalMapObjectSpawnerSaveData();
};

