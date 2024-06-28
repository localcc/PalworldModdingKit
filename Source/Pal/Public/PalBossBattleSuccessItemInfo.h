#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalBossBattleSuccessItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBossBattleSuccessItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    PAL_API FPalBossBattleSuccessItemInfo();
};

