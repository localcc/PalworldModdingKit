#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalCharacterIconDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalCharacterIconDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    PAL_API FPalCharacterIconDataRow();
};

