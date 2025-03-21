#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "PalItemAndNum.h"
#include "PalTreasureBoxLotteryResult.generated.h"

USTRUCT(BlueprintType)
struct FPalTreasureBoxLotteryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndNum> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectTreasureGradeType GradeType;
    
    PAL_API FPalTreasureBoxLotteryResult();
};

