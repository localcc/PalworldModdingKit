#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalFoliageInstanceId.h"
#include "PalFoliageInstanceSaveData.h"
#include "PalFoliageSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalFoliageInstanceId, FPalFoliageInstanceSaveData> InstanceDataMap;
    
    PAL_API FPalFoliageSaveData();
};

