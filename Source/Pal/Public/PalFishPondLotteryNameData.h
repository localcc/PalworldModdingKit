#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalFishPondLotteryNameData.generated.h"

USTRUCT(BlueprintType)
struct FPalFishPondLotteryNameData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextId;
    
    PAL_API FPalFishPondLotteryNameData();
};

