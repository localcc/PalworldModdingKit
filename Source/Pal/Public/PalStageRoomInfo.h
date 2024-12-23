#pragma once
#include "CoreMinimal.h"
#include "PalStageRoomInfo.generated.h"

class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalStageRoomInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* DataLayerAsset;
    
    PAL_API FPalStageRoomInfo();
};

