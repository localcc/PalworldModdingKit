#pragma once
#include "CoreMinimal.h"
#include "PalCharacterSlotId.h"
#include "PalInstanceID.h"
#include "PalCharacterContainerSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterContainerSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalCharacterSlotId SlotID;
    
    PAL_API FPalCharacterContainerSlotInfo();
};

