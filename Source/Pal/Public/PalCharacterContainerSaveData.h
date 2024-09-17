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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    PAL_API FPalCharacterContainerSaveData();
};

