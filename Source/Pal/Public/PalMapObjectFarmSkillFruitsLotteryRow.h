#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalFarmSkillFruitsLotteryItemType.h"
#include "PalMapObjectFarmSkillFruitsLotteryRow.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectFarmSkillFruitsLotteryRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFarmSkillFruitsLotteryItemType LotteryItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OtherItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    PAL_API FPalMapObjectFarmSkillFruitsLotteryRow();
};

