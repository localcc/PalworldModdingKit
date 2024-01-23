#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalCharacterSlotSaveData.h"
#include "PalCharacterContainerSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterContainerSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReferenceSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCharacterSlotSaveData> Slots;
    
    PAL_API FPalCharacterContainerSaveData();
};

