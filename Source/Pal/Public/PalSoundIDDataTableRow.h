#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalSoundIDDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalSoundIDDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    PAL_API FPalSoundIDDataTableRow();
};

