#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "PalCharacterCreationColorPresetDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterCreationColorPresetDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> Colors;
    
    PAL_API FPalCharacterCreationColorPresetDataRow();
};

