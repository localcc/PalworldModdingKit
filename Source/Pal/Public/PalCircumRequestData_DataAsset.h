#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalItemRequireCategory.h"
#include "PalCircumRequestData_DataAsset.generated.h"

USTRUCT(BlueprintType)
struct FPalCircumRequestData_DataAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalItemRequireCategory RequestCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequestItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardItemString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpBonusLevel;
    
    PAL_API FPalCircumRequestData_DataAsset();
};

