#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalRaidBossSummonPalInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidBossSummonPalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_PalMonsterData, int32> PalNameAndNum;
    
    PAL_API FPalRaidBossSummonPalInfo();
};

