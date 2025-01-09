#pragma once
#include "CoreMinimal.h"
#include "PalStageRegistrationParameterBase.h"
#include "PalStageRegistrationParameterRoom.generated.h"

class UDataLayerInstance;

UCLASS(Blueprintable)
class UPalStageRegistrationParameterRoom : public UPalStageRegistrationParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerInstance* DataLayerInstance;
    
    UPalStageRegistrationParameterRoom();

};

