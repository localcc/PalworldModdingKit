#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalStageRoomReturnBackInfoBase.h"
#include "PalStageRoomReturnBackInfoFromBaseCamp.generated.h"

UCLASS(Blueprintable)
class UPalStageRoomReturnBackInfoFromBaseCamp : public UPalStageRoomReturnBackInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid FromBaseCampId;
    
public:
    UPalStageRoomReturnBackInfoFromBaseCamp();

};

