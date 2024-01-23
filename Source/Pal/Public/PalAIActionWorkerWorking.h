#pragma once
#include "CoreMinimal.h"
#include "EPalWorkType.h"
#include "PalAIActionWorkerChildBase.h"
#include "PalAIActionWorkerWorking.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionWorkerWorking : public UPalAIActionWorkerChildBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalWorkType CurrentWorkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeedToTarget;
    
public:
    UPalAIActionWorkerWorking();
};

