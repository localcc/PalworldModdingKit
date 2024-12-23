#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalWorldMapAreaDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldMapAreaDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MsgID;
    
    PAL_API FPalWorldMapAreaDataRow();
};

