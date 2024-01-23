#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FarmCropData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_FarmCropData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_FarmCropData();
};

