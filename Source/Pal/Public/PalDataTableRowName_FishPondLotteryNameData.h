#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FishPondLotteryNameData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_FishPondLotteryNameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_FishPondLotteryNameData();
};
FORCEINLINE uint32 GetTypeHash(const FPalDataTableRowName_FishPondLotteryNameData) { return 0; }

