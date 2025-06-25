#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalMapObjectLotteryData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectLotteryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapObjectId;
    
    PAL_API FPalMapObjectLotteryData();
};

