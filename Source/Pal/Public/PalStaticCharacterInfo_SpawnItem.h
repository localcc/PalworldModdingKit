#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalStaticCharacterInfo_SpawnItem.generated.h"

USTRUCT(BlueprintType)
struct FPalStaticCharacterInfo_SpawnItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPalDataTableRowName_FieldLotteryNameData> FieldLotteryNameByRank;
    
    PAL_API FPalStaticCharacterInfo_SpawnItem();
};

