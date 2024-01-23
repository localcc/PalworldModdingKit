#pragma once
#include "CoreMinimal.h"
#include "PalFoliageSaveData.h"
#include "PalFoliageGridSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageGridSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalFoliageSaveData> ModelMap;
    
    PAL_API FPalFoliageGridSaveData();
};

