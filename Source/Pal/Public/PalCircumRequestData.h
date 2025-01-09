#pragma once
#include "CoreMinimal.h"
#include "EPalItemRequireCategory.h"
#include "PalStaticItemIdAndNum.h"
#include "PalCircumRequestData.generated.h"

USTRUCT(BlueprintType)
struct FPalCircumRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalItemRequireCategory RequestCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStaticItemIdAndNum RequestItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalStaticItemIdAndNum> RewardItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpBonusLevel;
    
    PAL_API FPalCircumRequestData();
};

