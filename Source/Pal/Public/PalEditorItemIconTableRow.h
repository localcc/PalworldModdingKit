#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalEditorItemIconTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalEditorItemIconTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    PAL_API FPalEditorItemIconTableRow();
};

