#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalCharacterCreationMakeInfoPresetDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterCreationMakeInfoPresetDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPlayerDataCharacterMakeInfo PresetMakeInfo;
    
    PAL_API FPalCharacterCreationMakeInfoPresetDataRow();
};

