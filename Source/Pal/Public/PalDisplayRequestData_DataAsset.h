#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalPalDisplayCategory.h"
#include "PalDisplayRequestData_DataAsset.generated.h"

USTRUCT(BlueprintType)
struct FPalDisplayRequestData_DataAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPalDisplayCategory RequestCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequestPalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpBonusLevel;
    
    PAL_API FPalDisplayRequestData_DataAsset();
};

