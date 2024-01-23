#pragma once
#include "CoreMinimal.h"
#include "PalCharacterSlotId.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalPlayerDataPalStorageSlotSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerDataPalStorageSlotSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter CharacterSaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCharacterSlotId SlotID;
    
    PAL_API FPalPlayerDataPalStorageSlotSaveData();
};

