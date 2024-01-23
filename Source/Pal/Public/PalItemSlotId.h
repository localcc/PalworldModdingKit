#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalItemSlotId.generated.h"

USTRUCT(BlueprintType)
struct FPalItemSlotId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    PAL_API FPalItemSlotId();
};

