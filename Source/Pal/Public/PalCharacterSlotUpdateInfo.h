#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalCharacterSlotUpdateInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterSlotUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID InstanceId;
    
    PAL_API FPalCharacterSlotUpdateInfo();
};

