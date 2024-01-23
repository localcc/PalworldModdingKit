#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalWaitInfoWorldHUDParameter.generated.h"

class APalBossTower;

UCLASS(Blueprintable)
class UPalWaitInfoWorldHUDParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalBossTower* BossTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isWaiting;
    
    UPalWaitInfoWorldHUDParameter();
};

