#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalStageModelBase.h"
#include "PalStageRoomPlayerInfo.h"
#include "PalStageModelRoom.generated.h"

class UDataLayerInstance;

UCLASS(Blueprintable)
class PAL_API UPalStageModelRoom : public UPalStageModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataLayerInstance* ReservedDataLayerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalStageRoomPlayerInfo> RoomPlayerInfoMap;
    
public:
    UPalStageModelRoom();

};

