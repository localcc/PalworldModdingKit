#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalUIPaldexDistributionLocationStruct.h"
#include "PalUIPaldexDistributionData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIPaldexDistributionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalUIPaldexDistributionLocationStruct dayTimeLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalUIPaldexDistributionLocationStruct nightTimeLocations;
    
    PAL_API FPalUIPaldexDistributionData();
};

