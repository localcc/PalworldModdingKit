#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalAchivementCategory.h"
#include "PalRecordCountRewardData_DataAsset.generated.h"

USTRUCT(BlueprintType)
struct FPalRecordCountRewardData_DataAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalAchivementCategory AchivementCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardItemString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpBonusLevel;
    
    PAL_API FPalRecordCountRewardData_DataAsset();
};

