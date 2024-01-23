#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FieldLotteryNameData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_FieldLotteryNameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_FieldLotteryNameData();
};

