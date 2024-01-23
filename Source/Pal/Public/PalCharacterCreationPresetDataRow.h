#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalCharacterCreationPresetDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalCharacterCreationPresetDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPlayerDataCharacterMakeInfo MakeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconTexture;
    
    PAL_API FPalCharacterCreationPresetDataRow();
};

