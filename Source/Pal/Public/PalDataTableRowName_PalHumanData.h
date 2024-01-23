#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalHumanData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_PalHumanData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_PalHumanData();
};

