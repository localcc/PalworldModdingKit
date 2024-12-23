#pragma once
#include "CoreMinimal.h"
#include "PalStageRoomPlayerInfo.generated.h"

class UPalStageRoomReturnBackInfoBase;

USTRUCT(BlueprintType)
struct FPalStageRoomPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalStageRoomReturnBackInfoBase* ReturnBackInfo;
    
    PAL_API FPalStageRoomPlayerInfo();
};

