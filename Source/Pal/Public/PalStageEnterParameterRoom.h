#pragma once
#include "CoreMinimal.h"
#include "PalStageEnterParameterBase.h"
#include "PalStageEnterParameterRoom.generated.h"

class UPalStageRoomReturnBackInfoBase;

UCLASS(Blueprintable)
class UPalStageEnterParameterRoom : public UPalStageEnterParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalStageRoomReturnBackInfoBase* ReturnBackInfo;
    
    UPalStageEnterParameterRoom();

};

