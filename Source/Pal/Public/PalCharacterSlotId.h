#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalCharacterSlotId.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterSlotId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    PAL_API FPalCharacterSlotId();
};

