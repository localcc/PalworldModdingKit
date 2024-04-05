#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPalTalentType.h"
#include "PalTalentUpItemDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalTalentUpItemDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalTalentType TalentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 addValue;
    
    PAL_API FPalTalentUpItemDataRow();
};

