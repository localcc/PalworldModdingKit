#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalIncidentParameterDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalIncidentParameterDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Option;
    
    PAL_API FPalIncidentParameterDataTableRow();
};

