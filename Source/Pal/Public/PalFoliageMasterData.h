#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalFoliageMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClassRefId;
    
    PAL_API FPalFoliageMasterData();
};

