#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalCharacterSlotSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterSlotSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    PAL_API FPalCharacterSlotSaveData();
};

