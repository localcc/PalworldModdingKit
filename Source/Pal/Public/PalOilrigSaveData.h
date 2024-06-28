#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigType.h"
#include "PalOilrigSaveStatus.h"
#include "PalOilrigSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalOilrigSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalOilrigType, FPalOilrigSaveStatus> OilrigMap;
    
    PAL_API FPalOilrigSaveData();
};

