#pragma once
#include "CoreMinimal.h"
#include "PalDeathPenaltyInfo.h"
#include "PalDeathPenaltyList.generated.h"

USTRUCT(BlueprintType)
struct FPalDeathPenaltyList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalDeathPenaltyInfo> DeathPenaArray;
    
    PAL_API FPalDeathPenaltyList();
};

