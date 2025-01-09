#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalWorkSuitability.h"
#include "PalGainWorkSuitabilityRankItemDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalGainWorkSuitabilityRankItemDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkSuitability WorkSuitability;
    
    PAL_API FPalGainWorkSuitabilityRankItemDataRow();
};

