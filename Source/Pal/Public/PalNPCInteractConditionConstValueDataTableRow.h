#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalNPCInteractConditionConstValueDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalNPCInteractConditionConstValueDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ValText;
    
    PAL_API FPalNPCInteractConditionConstValueDataTableRow();
};

