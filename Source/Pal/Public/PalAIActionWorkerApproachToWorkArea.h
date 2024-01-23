#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "PalAIActionWorkerChildBase.h"
#include "PalAIActionWorkerApproachToWorkArea.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionWorkerApproachToWorkArea : public UPalAIActionWorkerChildBase {
    GENERATED_BODY()
public:
    UPalAIActionWorkerApproachToWorkArea();
private:
    UFUNCTION(BlueprintCallable)
    void OnReceiveMoveCompleted(FAIRequestID AIRequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
};

