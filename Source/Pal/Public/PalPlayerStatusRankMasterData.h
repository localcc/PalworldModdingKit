#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalPlayerStatusRankMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerStatusRankMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredRelicNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResetRequiredMoney;
    
    PAL_API FPalPlayerStatusRankMasterData();
};

