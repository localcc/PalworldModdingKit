#pragma once
#include "CoreMinimal.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "PalAIActionCompositeBase.h"
#include "PalAIActionCompositeBaseCamp.generated.h"

UCLASS(Blueprintable)
class UPalAIActionCompositeBaseCamp : public UPalAIActionCompositeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeedDefault;
    
public:
    UPalAIActionCompositeBaseCamp();
    UFUNCTION(BlueprintCallable)
    void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActionToWorker();
    
};

