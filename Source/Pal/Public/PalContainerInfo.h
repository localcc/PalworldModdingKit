#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalContainerInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalContainerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    PAL_API FPalContainerInfo();
};

