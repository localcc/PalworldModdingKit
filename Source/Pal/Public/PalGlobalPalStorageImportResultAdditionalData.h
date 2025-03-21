#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalGlobalPalStorageImportResultAdditionalData.generated.h"

USTRUCT(BlueprintType)
struct FPalGlobalPalStorageImportResultAdditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverwriteTargetSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImportedSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter OverwriteSaveParameter;
    
    PAL_API FPalGlobalPalStorageImportResultAdditionalData();
};

