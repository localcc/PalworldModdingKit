#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemIdAndNum.h"
#include "PalRecordCountRewardData.generated.h"

USTRUCT(BlueprintType)
struct FPalRecordCountRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RecordID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalStaticItemIdAndNum> RewardItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpBonusLevel;
    
    PAL_API FPalRecordCountRewardData();
};

