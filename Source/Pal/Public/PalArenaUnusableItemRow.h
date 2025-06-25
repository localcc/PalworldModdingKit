#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalArenaUnusableItemRow.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaUnusableItemRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    PAL_API FPalArenaUnusableItemRow();
};

