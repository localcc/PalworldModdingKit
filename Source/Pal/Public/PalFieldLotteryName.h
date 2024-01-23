#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalFieldLotteryName.generated.h"

USTRUCT(BlueprintType)
struct FPalFieldLotteryName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSlot1_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSlot2_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSlot3_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSlot4_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSlot5_ProbabilityPercent;
    
    PAL_API FPalFieldLotteryName();
};

