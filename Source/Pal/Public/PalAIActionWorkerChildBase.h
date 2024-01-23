#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalAIActionBase.h"
#include "PalAIActionWorkerChildBase.generated.h"

class UPalAIActionCompositeWorker;

UCLASS(Blueprintable, EditInlineNew)
class UPalAIActionWorkerChildBase : public UPalAIActionBase {
    GENERATED_BODY()
public:
    UPalAIActionWorkerChildBase();
protected:
    UFUNCTION(BlueprintCallable)
    void LookToTarget(const float TurnSpeed, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetWorkable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetAssignable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssignedToTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorkLookAtLocation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalAIActionCompositeWorker* GetParent() const;
    
};

