#pragma once
#include "CoreMinimal.h"
#include "PalCaptureBonusExpTableSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalCaptureBonusExpTableSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TableReferenceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TableIndexCount;
    
    PAL_API FPalCaptureBonusExpTableSetting();
};

